#ifndef SIMPLE_STRUCT
#define SIMPLE_STRUCT

#include <stdint.h>
#include <vector>
#include <list>
#include <map>
#include <string>
#include <stdint.h>
#include <arpa/inet.h>

typedef struct SPairSecond {
  int pairtype;
  std::string astring;
} PairSecond;


typedef enum EPairType {
    LOCAL,    //!< LOCAL
    GLOBAL    //!< GLOBAL
} PairType;


typedef struct SPair {
  int an_int;
  std::pair<bool, PairSecond> apair;
} Pair;

typedef struct SMapTest {
  std::map<bool,PairSecond> amap;
} MapTest;

typedef struct SVectorEnumTest {
  std::vector<PairType> types;
} VectorEnumTest;




#endif /* SIMPLE_STRUCT */

