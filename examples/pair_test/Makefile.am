check_PROGRAMS = Pair_test
TESTS = Pair_test

Pair_test_CXXFLAGS= $(GTEST_CFLAGS)
Pair_test_LDFLAGS= $(GTEST_LIBS) -lgtest_main
Pair_test_SOURCES=Pair.generated.cpp Pair_test.cpp jsonxx.cc

generate_xml:
	castxml -I. -c -x c++ --castxml-cc-gnu g++ --castxml-gccxml Pair.hpp

generate_code: generate_xml
	gsl -script:../../scripts/cast_xml_generate_printers.gsl -cstandard:C11 -type:Enumeration,Struct,Class -file:Pair.hpp Pair.xml

clean_xml:
	xsltproc ../../scripts/remove_attributes.xslt Pair.xml-cleaned.xml > Pair-clean.xml