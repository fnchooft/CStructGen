#include "Pair.generated.h"
#include <gtest/gtest.h>


TEST(SPairSecond, compareAB){
  SPairSecond a = SPairSecond();
  SPairSecond b = SPairSecond();
  EXPECT_EQ(a,b);
  SPairSecond c = SPairSecond();
  std::cout << "JSON-b: " << toJsonString(&b) << std::endl;
  EXPECT_EQ(0,fromJson(&c, toJsonString(&b)));
  std::cout << "JSON-c: " << toJsonString(&c) << std::endl;
  EXPECT_EQ(c,b);
}

#include "Pair.generated.h"
#include <gtest/gtest.h>


TEST(SPair, compareAB){
  SPair a = SPair();
  SPair b = SPair();
  EXPECT_EQ(a,b);
  b.an_int = 12345;
  SPairSecond bbs;
  bbs.astring = "Abcdefgh";
  bbs.pairtype = 3;
  b.apair = std::make_pair(true, bbs);
  
  SPair c = SPair();
  std::cout << "JSON-b: " << toJsonString(&b) << std::endl;
  EXPECT_EQ(0,fromJson(&c, toJsonString(&b)));
  std::cout << "JSON-c: " << toJsonString(&c) << std::endl;
  EXPECT_EQ(c,b);
}

#include "Pair.generated.h"
#include <gtest/gtest.h>


TEST(SMapTest, compareAB){
  SMapTest a = SMapTest();
  SMapTest b = SMapTest();
  EXPECT_EQ(a,b);
  SMapTest c = SMapTest();
  std::cout << "JSON-b: " << toJsonString(&b) << std::endl;
  EXPECT_EQ(0,fromJson(&c, toJsonString(&b)));
  std::cout << "JSON-c: " << toJsonString(&c) << std::endl;
  EXPECT_EQ(c,b);
}


