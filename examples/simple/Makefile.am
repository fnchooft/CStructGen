check_PROGRAMS = Simple_test Simple_test_validation
TESTS = Simple_test Simple_test_validation

Simple_test_CXXFLAGS= $(GTEST_CFLAGS)
Simple_test_LDFLAGS= $(GTEST_LIBS) -lgtest_main
Simple_test_SOURCES=Simple.cpp Simple.generated.cpp Simple_test.cpp jsonxx.cc

Simple_test_validation_CXXFLAGS= $(GTEST_CFLAGS)
Simple_test_validation_LDFLAGS= $(GTEST_LIBS) -lgtest_main
Simple_test_validation_SOURCES=Simple.cpp Simple.generated.cpp Simple_test_validation.cpp jsonxx.cc
