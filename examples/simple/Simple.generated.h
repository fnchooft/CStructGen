#ifndef __DEFINITION_SIMPLE_H__
#define __DEFINITION_SIMPLE_H__
#include <map>
#include <string>
#include <iostream>
#include <utility> 
#include <sstream>
#include <stdint.h>


#include "Simple.h"



// Generated stream-operators for: Simple
std::ostream & operator<<(std::ostream & out, const Simple & simple);
std::string toString(const Simple & simple);
// struct: Simple compare-functions due to union existance...
// Found Struct->settings.... 0
// Generated default compare definitions for struct: Simple
bool operator< (Simple lhs, Simple rhs);
bool operator<=(Simple lhs, Simple rhs);
bool operator> (Simple lhs, Simple rhs);
bool operator>=(Simple lhs, Simple rhs);
bool operator==(Simple lhs, Simple rhs);
bool operator!=(Simple lhs, Simple rhs);
// Generated toJsonString / fromJsonString definition for struct: Simple
std::string toJsonString(Simple *input);
int32_t fromJson(Simple *output, std::string jsondata);

#endif // __DEFINITION_SIMPLE_H__

