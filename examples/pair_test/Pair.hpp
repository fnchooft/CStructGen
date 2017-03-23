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


typedef uint32_t LSPProtectionType;
typedef LSPProtectionType* LSPProtectionTypePtr;
const LSPProtectionType GMPLS_LSP_PROTN_UNPROTECTED = 0;
/// LSP state - Secondary LSP
const LSPProtectionType GMPLS_LSP_PROTN_STATE_SECLSP  =  0x0001;
/// LSP state - Protecting LSP
const LSPProtectionType GMPLS_LSP_PROTN_STATE_PROTECTING = 0x0002;
/// LSP state - Notification only
const LSPProtectionType GMPLS_LSP_PROTN_STATE_NOTIFICATION = 0x0004;
/// vOperational
const LSPProtectionType GMPLS_LSP_PROTN_STATE_OPERATIONAL = 0x4000;
/// LSP state - Restoration
const LSPProtectionType GMPLS_LSP_PROTN_STATE_RESTORATION = 0x8000;
/// LSP state - Restoration Protecting
const LSPProtectionType GMPLS_LSP_PROTN_STATE_RESTORATION_PROTECTING = 0x10000;

typedef struct SGmplsTest {
  LSPProtectionType type;
} GmplsTest;


#endif /* SIMPLE_STRUCT */

