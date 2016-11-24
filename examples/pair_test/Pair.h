ifndef SIMPLE_STRUCT
#define SIMPLE_STRUCT

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


typedef struct SPair {
  int an_int;
  std::pair<bool, PairSecond> apair;
} Pair;

typedef struct SMapTest {
  int an_int;
  std::map<bool, PairSecond> amap;
} MapTest;


#endif /* SIMPLE_STRUCT */

