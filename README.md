# Code-generator for C/C++-Structs based on CASTXML gccxml-output

In the case existing C-Structs are used in a project, the need occurs to
have compare-operators, toString-functions and maybe the occasional
json-serializer and json-deserializer function.

Since a C-Struct has a well-defined structure, the CastXML-tool can be used to
generate a C-family abstract syntax tree XML-representation of the struct.
This XML-representation can then be transformed by using the GSL-language.

## Purpose
 - Minimal to no code-changes in existing code
 - Analyze C / C++ -Structs
 - Generate XML-representation with the CastXML-tool
 - Transform XML to C++-code

## Dependencies
 - [gsl](https://github.com/fnchooft/gsl)
 - [castxml](https://github.com/fnchooft/CastXML)
 - [jsonxx](https://github.com/fnchooft/jsonxx)

## What is implemented?
Since the gccxml-syntax is well structured, the following entities are analyzed/handled:

 - FundamentalTypes
   - uint8_t, 16,32,64
   - int8_t, 16,32,64
   - float, double
   - Typedefs to FundamentalTypes
   - std::vector, std::list, std::pair
   - std::map<K,V>
     - K,V must either be a FundamentalType, or a predefined Struct
     - ** std::map  << K , std::vector|list|pair  >> is not supported for now **

 - Enumerations
  - Old style C++
  - New style C11 **(not yet supported)**

- Typedefs
  - Mostly tested typedef to Struct,FundamentalType


- Unions
  - Following assumption is made: The classifier of which union-**Choice** is to be used is conditioned by a previously defined **Field** ( in the same Struct).
  - By stipulating the condition for which this Union-Choice is valid in a seperate **xyz.settings.xml** file, we can generate the needed printers (toString, streaming) and json-serializer and json-deserializer code.

 - std::list, std::vector
   - Are represented as **Class**-entities, and for these cases the generator is working.
 - std::pair is converted by C++ into a **Struct** with first- and second-members.

## Examples
  - See the [examples](examples)-directory for use cases.  

## Author
 - [Fabian N.C. van 't Hooft](fnchooft@gmail.com)

## Notes / Limitations
 - The generator was conceived to run once under the control of the programmer.
 - Other then jsonxx, there are no special requirements and the generated code should run, and **is running on very limited hardware** such as mk6800 etc.
 - a precompiled castxml-utility can be downloaded directly from ITK by following [these](http://pygccxml.readthedocs.io/en/develop/install.html) instructions.


## Special thanks
 - All the authors of the dependencies,  [gsl](https://github.com/fnchooft/gsl), [castxml](https://github.com/fnchooft/CastXML)
 and [jsonxx](https://github.com/fnchooft/jsonxx).
 - Inspired by:
[cjson](https://github.com/fnchooft/cjson)

 - [pygccxml](http://pygccxml.readthedocs.io)
   - This library can also read the gccxml-output, but needs a python-infrastructure.
