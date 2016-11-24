#!/bin/sh

# A POSIX variable
OPTIND=1         # Reset in case getopts has been used previously in the shell.

# Initialize our own variables:
output_file=""
verbose=0
class_filter=""
cast_filter=""
include_path=""

while getopts "h?vf:c:x:" opt; do
    case "$opt" in
    h|\?)
        show_help
        exit 0
        ;;
    v)  verbose=1
        ;;
    f)	file_name="$OPTARG"
		;;
    c)	class_filter=" --castxml-start NamespaceA::NamespaceB::$OPTARG "
		;;
    x)  cast_filter=" --castxml-start $OPTARG "
        ;;
    esac
done

shift $((OPTIND-1))

[ "$1" = "--" ] && shift

echo "file: '$file_name' verbose=$verbose, class_filter='$class_filter', cast_filter='$cast_filter' Leftovers: $@"

# End of file
include_path=' -I.'

echo $include_path

filename=$(basename "$file_name")
extension="${filename##*.}"
filename="${filename%.*}"

castxml $include_path -c -x c++ -std=gnu++11 --castxml-cc-gnu g++ --castxml-gccxml $file_name
gsl -script:cast_xml_generate_printers.gsl -type:Enumeration,Struct,Class -file:$file_name $filename.xml
