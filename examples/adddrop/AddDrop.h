#ifndef SRC_XCP_TYPES_ADDDROP_H_
#define SRC_XCP_TYPES_ADDDROP_H_

#include <string>
#include <stdint.h>

namespace CPqD {
namespace Xcp {

//enum class AddDropType : uint8_t {

enum AddDropType {
	ADD_DROP_LOCAL     = 1, //!< ADD_DROP_LOCAL
	ADD_DROP_GLOBAL    = 2, //!< ADD_DROP_GLOBAL
};

struct AddDrop {
	AddDrop():localId(0),transportPlaneId(""),type(ADD_DROP_LOCAL){}
	uint32_t localId;
    std::string  transportPlaneId;
    AddDropType type;
};

} // End of namespace Xcp
} // End of namespace CPqD

#endif // SRC_XCP_TYPES_ADDDROP_H_