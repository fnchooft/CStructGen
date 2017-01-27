#include "Simple.generated.h"
#include <gtest/gtest.h>


TEST(AddDrop, compareAB){
  AddDrop a = AddDrop();
  AddDrop b = AddDrop();
  EXPECT_EQ(a,b);
  AddDrop c = AddDrop();
  std::cout << "JSON-b: " << toJsonString(&b) << std::endl;
  EXPECT_EQ(0,fromJson(&c, toJsonString(&b)));
  std::cout << "JSON-c: " << toJsonString(&c) << std::endl;
  EXPECT_EQ(c,b);
}

TEST(Simple, compareAB){
  Simple a = Simple();
  Simple b = Simple();
  EXPECT_EQ(a,b);
  Simple c = Simple();
  std::cout << "JSON-b: " << toJsonString(&b) << std::endl;
  EXPECT_EQ(0,fromJson(&c, toJsonString(&b)));
  std::cout << "JSON-c: " << toJsonString(&c) << std::endl;
  EXPECT_EQ(c,b);
}

