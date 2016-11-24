#include "Simple.generated.h"
#include <gtest/gtest.h>


TEST(Simple, compareAB){
  Simple a = { .a = 30, .b = strdup("NULL"), .c = 2.24, .d = 10 };
  Simple b = { .a = 30, .b = strdup("NULL"), .c = 2.24, .d = 10 };
  EXPECT_EQ(a,b);
  std::cout << "JSON-b: " << toJsonString(&b) << std::endl;
  Simple c;
  EXPECT_EQ(0,fromJson(&c, toJsonString(&b)));
  std::cout << "JSON-c: " << toJsonString(&c) << std::endl;
  EXPECT_EQ(c,b);
  EXPECT_EQ(c,a);
}


