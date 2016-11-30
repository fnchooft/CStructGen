check_PROGRAMS = Simple_test Simple_test_validation
TESTS = Simple_test Simple_test_validation

Simple_test_CXXFLAGS= $(GTEST_CFLAGS)
Simple_test_LDFLAGS= $(GTEST_LIBS) -lgtest_main
Simple_test_SOURCES=Simple.cpp Simple.generated.cpp Simple_test.cpp jsonxx.cc

Simple_test_validation_CXXFLAGS= $(GTEST_CFLAGS)
Simple_test_validation_LDFLAGS= $(GTEST_LIBS) -lgtest_main
Simple_test_validation_SOURCES=Simple.cpp Simple.generated.cpp Simple_test_validation.cpp jsonxx.cc

generate_xml:
	castxml -I. -c -x c++ --castxml-cc-gnu g++ --castxml-gccxml Simple.h

generate_code: generate_xml
	gsl -script:../../scripts/cast_xml_generate_printers-$(PACKAGE_VERSION).gsl -cstandard:C11 -type:Enumeration,Struct,Class -file:Simple.h Simple.xml
