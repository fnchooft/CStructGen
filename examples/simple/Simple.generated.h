#ifndef __DEFINITION_SIMPLE_H__
#define __DEFINITION_SIMPLE_H__


#include "Simple.h"


#ifdef __cplusplus


// C++ overloads, methods, and so on
#include <map>
#include <string>
#include <iostream>
#include <utility>
#include <sstream>
#include <stdint.h>


// Generated default toString,fromString,stream definitions for enumeration: AddDropType
std::string toString(AddDropType enumval, int32_t shortname = 0);
bool fromString(std::string stringvalue, AddDropType *enum_ptr);
std::ostream & operator<<(std::ostream & out, const AddDropType adddroptype);
// Generated toJsonString / fromJsonString definition for struct: AddDropType
std::string toJsonString(AddDropType *input);
int32_t fromJson(AddDropType *output, std::string jsondata);
// Generated stream-operators for: AddDrop
std::ostream & operator<<(std::ostream & out, const AddDrop & adddrop);
std::string toString(const AddDrop & adddrop);
// struct: AddDrop compare-functions due to union existance...
// Found Struct->settings.... 0
// Generated default compare definitions for struct: AddDrop
bool operator< (AddDrop lhs, AddDrop rhs);
bool operator<=(AddDrop lhs, AddDrop rhs);
bool operator> (AddDrop lhs, AddDrop rhs);
bool operator>=(AddDrop lhs, AddDrop rhs);
bool operator==(AddDrop lhs, AddDrop rhs);
bool operator!=(AddDrop lhs, AddDrop rhs);
// Generated toJsonString / fromJsonString definition for struct: AddDrop
std::string toJsonString(AddDrop *input);
int32_t fromJson(AddDrop *output, std::string jsondata);
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
#endif // ___cplusplus


#endif // __DEFINITION_SIMPLE_H__
