#include "Simple.generated.h"
#include <gtest/gtest.h>


TEST(Simple, compareAB){
  Simple a = Simple();
  Simple b = Simple();
  EXPECT_EQ(a,b);

  b.var_in_addr.s_addr = 0x22334455;
  for (int i = 0; i < 1024; i+=128) {
     b.var_in_addr.s_addr += i;
     b.list_of_in_addr.push_back(b.var_in_addr);
  }
  b.var_in_addr.s_addr = 0x22334455;

  b.var_vector_of_bool.push_back(true);
  b.var_vector_of_bool.push_back(false);
  b.var_vector_of_bool.push_back(true);
  b.var_vector_of_bool.push_back(false);
  b.var_vector_of_bool.push_back(true);
  b.var_vector_of_bool.push_back(false);
  b.var_vector_of_bool.push_back(true);
  b.var_vector_of_bool.push_back(false);


  b.vector_of_uint08.push_back(0x00);
  b.vector_of_uint08.push_back(0xFF);

  b.vector_of_uint16.push_back(0x0000);
  b.vector_of_uint16.push_back(0xAAAA);
  b.vector_of_uint16.push_back(0xFFFF);

  b.vector_of_uint32.push_back(0x00000000);
  b.vector_of_uint32.push_back(0x0F0F0F0F);
  b.vector_of_uint32.push_back(0xFFFFFFFF);

  b.vector_of_uint64.push_back(0x0000000000000000);
  b.vector_of_uint64.push_back(0x0F0F0F0F0F0F0F0F);
  b.vector_of_uint64.push_back(0xFFFFFFFFFFFFFFFA); // F0 FA

  b.vector_of_int8.push_back(std::numeric_limits<int8_t>::min());
  b.vector_of_int8.push_back(std::numeric_limits<int8_t>::max());

  b.vector_of_int16.push_back(std::numeric_limits<int16_t>::min());
  b.vector_of_int16.push_back(std::numeric_limits<int16_t>::max());

  b.vector_of_int32.push_back(std::numeric_limits<int32_t>::min());
  b.vector_of_int32.push_back(std::numeric_limits<int32_t>::max());

  b.vector_of_int64.push_back(std::numeric_limits<int64_t>::min());
  b.vector_of_int64.push_back(std::numeric_limits<int64_t>::max());
  std::cout << "MaxFor uint64_t: " << std::numeric_limits<uint64_t>::max() << std::endl;

  b.var_float = 3.1459f;
  b.vc.push_back(b.var_float);
  //b.vc.push_back(b.var_float - 1.0000f);
  //b.vc.push_back(b.var_float - 2.0000f);
  //b.vc.push_back(b.var_float - 3.0000f);

  /* Test all the lists */
  b.list_of_uint08.push_back(0x00);
  b.list_of_uint08.push_back(0xFF);

  b.list_of_uint16.push_back(0x0000);
  b.list_of_uint16.push_back(0xAAAA);
  b.list_of_uint16.push_back(0xFFFF);

  b.list_of_uint32.push_back(0x00000000);
  b.list_of_uint32.push_back(0x0F0F0F0F);
  b.list_of_uint32.push_back(0xFFFFFFFF);

  b.list_of_uint64.push_back(0x0000000000000000);
  b.list_of_uint64.push_back(0x0F0F0F0F0F0F0F0F);
  b.list_of_uint64.push_back(0xFFFFFFFFFFFFFFFA); // F0 FA

  b.list_of_int8.push_back(std::numeric_limits<int8_t>::min());
  b.list_of_int8.push_back(std::numeric_limits<int8_t>::max());

  b.list_of_int16.push_back(std::numeric_limits<int16_t>::min());
  b.list_of_int16.push_back(std::numeric_limits<int16_t>::max());

  b.list_of_int32.push_back(std::numeric_limits<int32_t>::min());
  b.list_of_int32.push_back(std::numeric_limits<int32_t>::max());

  b.list_of_int64.push_back(std::numeric_limits<int64_t>::min());
  b.list_of_int64.push_back(std::numeric_limits<int64_t>::max());


  Simple c = Simple();
  std::cout << "JSON-b: " << toJsonString(&b) << std::endl;
  EXPECT_EQ(0,fromJson(&c, toJsonString(&b)));
  std::cout << "JSON-c: " << toJsonString(&c) << std::endl;
  EXPECT_EQ(c,b);
}


