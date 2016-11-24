#include "Simple.generated.h"
#include <gtest/gtest.h>


TEST(Simple, compareAB){
  Simple a = { .a = 0, .uint8 = 0, .string_attribute = "", .b = NULL, .c = 0.0, .d = 0, .va = {}, .vb = {}, .vc = {}, .vd = {}, .la = {}, .lb = {}, .lc = {}, .ld = {} };
  Simple b = { .a = 0, .uint8 = 0, .string_attribute = "", .b = NULL, .c = 0.0, .d = 0, .va = {}, .vb = {}, .vc = {}, .vd = {}, .la = {}, .lb = {}, .lc = {}, .ld = {} };
  EXPECT_EQ(a,b);


  b.va.push_back(1);
  b.va.push_back(2);
  b.vb.push_back(strdup("First"));
  b.vb.push_back(strdup("Second"));
  b.vc.push_back(1.2f);
  b.vc.push_back(3.4f);

  std::cout << "JSON-b: " << toJsonString(&b) << std::endl;
  Simple c = { .a = 0, .uint8 = 0, .string_attribute = "", .b = NULL, .c = 0.0, .d = 0, .va = {}, .vb = {}, .vc = {}, .vd = {}, .la = {}, .lb = {}, .lc = {}, .ld = {} };
  EXPECT_EQ(0,fromJson(&c, toJsonString(&b)));
  std::cout << "JSON-c: " << toJsonString(&c) << std::endl;
  EXPECT_EQ(toJsonString(&c),toJsonString(&b));
}


