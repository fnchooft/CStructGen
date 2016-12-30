check_PROGRAMS = Pair_test
TESTS = Pair_test

Pair_test_CXXFLAGS= $(GTEST_CFLAGS)
Pair_test_LDFLAGS= $(GTEST_LIBS) -lgtest_main
Pair_test_SOURCES=Pair.generated.cpp Pair_test.cpp jsonxx.cc
 
Pair.generated.h Pair.generated.cpp: Pair.hpp  ../../scripts/cast_xml_generate_printers.gsl.in
	castxml -I. -c -x c++ --castxml-cc-gnu g++ --castxml-gccxml $<
	gsl -script:../../scripts/cast_xml_generate_printers.gsl.in -cstandard:C11 -type:Enumeration,Struct,Class -file:$< $(basename $<).xml
