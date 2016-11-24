#ifndef SIMPLE_STRUCT
#define SIMPLE_STRUCT

#include <vector>
#include <list>
#include <string>
#include <stdint.h>
#include <arpa/inet.h>
typedef struct Simple {
  uint8_t  var_uint08;
  uint16_t var_uint16;
  uint32_t var_uint32;
  uint64_t var_uint64;
  int8_t   var_int08;
  int16_t  var_int16;
  int32_t  var_int32;
  int64_t  var_int64;

  std::string var_string;
  char* var_char;
  float var_float;
  long var_long;


  struct in_addr var_in_addr;
  std::vector<int> va;
  std::vector<char*> vb;
  std::vector<float> vc;
  std::vector<long int> vd;

  std::list<int> la;
  std::list<char*> lb;
  std::list<float> lc;
  std::list<long int> ld;

} Simple;

#endif /* SIMPLE_STRUCT */

