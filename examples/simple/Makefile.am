check_PROGRAMS = Simple_test Simple_test_validation
TESTS = Simple_test Simple_test_validation

GTESTLIB=$(shell pkg-config gtest-1.6.0 --libs)
GTESTFLAGS=$(shell pkg-config gtest-1.6.0 --cflags)

Simple_test_CXXFLAGS= $(GTESTFLAGS)
Simple_test_LDFLAGS= $(GTESTLIB) -lgtest_main
Simple_test_SOURCES=Simple.cpp Simple.generated.cpp Simple_test.cpp jsonxx.cc

Simple_test_validation_CXXFLAGS= $(GTESTFLAGS)
Simple_test_validation_LDFLAGS= $(GTESTLIB) -lgtest_main
Simple_test_validation_SOURCES=Simple.cpp Simple.generated.cpp Simple_test_validation.cpp jsonxx.cc
