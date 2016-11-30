#include "Simple.generated.h"
#include <gtest/gtest.h>


TEST(AddDrop, compareAB){
  AddDrop a = { .localId = 0, .transportPlaneId = "", .type = ADD_DROP_LOCAL };
  AddDrop b = { .localId = 0, .transportPlaneId = "", .type = ADD_DROP_LOCAL };
  EXPECT_EQ(a,b);
  AddDrop c = { .localId = 0, .transportPlaneId = "", .type = ADD_DROP_LOCAL };
  std::cout << "JSON-b: " << toJsonString(&b) << std::endl;
  EXPECT_EQ(0,fromJson(&c, toJsonString(&b)));
  std::cout << "JSON-c: " << toJsonString(&c) << std::endl;
  EXPECT_EQ(c,b);
}

#include "Simple.generated.h"
#include <gtest/gtest.h>


TEST(Simple, compareAB){
  Simple a = { .is_on = false, .var_vector_of_bool = {}, .var_vector_of_int = {}, .var_uint08 = 0, .var_uint16 = 0, .var_uint32 = 0, .var_uint64 = 0, .vector_of_uint08 = {}, .vector_of_uint16 = {}, .vector_of_uint32 = {}, .vector_of_uint64 = {}, .list_of_uint08 = {}, .list_of_uint16 = {}, .list_of_uint32 = {}, .list_of_uint64 = {}, .var_int08 = 0, .var_int16 = 0, .var_int32 = 0, .var_int64 = 0, .vector_of_int8 = {}, .vector_of_int16 = {}, .vector_of_int32 = {}, .vector_of_int64 = {}, .list_of_int8 = {}, .list_of_int16 = {}, .list_of_int32 = {}, .list_of_int64 = {}, .var_string = "", .var_float = 0.0f, .var_double = 0.0, .var_long = 0, .var_in_addr = { 0 }, .vector_of_in_addr = {}, .list_of_in_addr = {}, .vc = {} };
  Simple b = { .is_on = false, .var_vector_of_bool = {}, .var_vector_of_int = {}, .var_uint08 = 0, .var_uint16 = 0, .var_uint32 = 0, .var_uint64 = 0, .vector_of_uint08 = {}, .vector_of_uint16 = {}, .vector_of_uint32 = {}, .vector_of_uint64 = {}, .list_of_uint08 = {}, .list_of_uint16 = {}, .list_of_uint32 = {}, .list_of_uint64 = {}, .var_int08 = 0, .var_int16 = 0, .var_int32 = 0, .var_int64 = 0, .vector_of_int8 = {}, .vector_of_int16 = {}, .vector_of_int32 = {}, .vector_of_int64 = {}, .list_of_int8 = {}, .list_of_int16 = {}, .list_of_int32 = {}, .list_of_int64 = {}, .var_string = "", .var_float = 0.0f, .var_double = 0.0, .var_long = 0, .var_in_addr = { 0 }, .vector_of_in_addr = {}, .list_of_in_addr = {}, .vc = {} };
  EXPECT_EQ(a,b);
  Simple c = { .is_on = false, .var_vector_of_bool = {}, .var_vector_of_int = {}, .var_uint08 = 0, .var_uint16 = 0, .var_uint32 = 0, .var_uint64 = 0, .vector_of_uint08 = {}, .vector_of_uint16 = {}, .vector_of_uint32 = {}, .vector_of_uint64 = {}, .list_of_uint08 = {}, .list_of_uint16 = {}, .list_of_uint32 = {}, .list_of_uint64 = {}, .var_int08 = 0, .var_int16 = 0, .var_int32 = 0, .var_int64 = 0, .vector_of_int8 = {}, .vector_of_int16 = {}, .vector_of_int32 = {}, .vector_of_int64 = {}, .list_of_int8 = {}, .list_of_int16 = {}, .list_of_int32 = {}, .list_of_int64 = {}, .var_string = "", .var_float = 0.0f, .var_double = 0.0, .var_long = 0, .var_in_addr = { 0 }, .vector_of_in_addr = {}, .list_of_in_addr = {}, .vc = {} };
  std::cout << "JSON-b: " << toJsonString(&b) << std::endl;
  EXPECT_EQ(0,fromJson(&c, toJsonString(&b)));
  std::cout << "JSON-c: " << toJsonString(&c) << std::endl;
  EXPECT_EQ(c,b);
}


