#ifndef __DEFINITION_PAIR_HPP__
#define __DEFINITION_PAIR_HPP__


#include "Pair.hpp"


#ifdef __cplusplus


// C++ overloads, methods, and so on
#include <map>
#include <string>
#include <iostream>
#include <utility>
#include <sstream>
#include <stdint.h>


// Generated stream-operators for: SPairSecond
std::ostream & operator<<(std::ostream & out, const SPairSecond & spairsecond);
std::string toString(const SPairSecond & spairsecond);
// struct: SPairSecond compare-functions due to union existance...
// Found Struct->settings.... 0
// Generated default compare definitions for struct: SPairSecond
bool operator< (SPairSecond lhs, SPairSecond rhs);
bool operator<=(SPairSecond lhs, SPairSecond rhs);
bool operator> (SPairSecond lhs, SPairSecond rhs);
bool operator>=(SPairSecond lhs, SPairSecond rhs);
bool operator==(SPairSecond lhs, SPairSecond rhs);
bool operator!=(SPairSecond lhs, SPairSecond rhs);
// Generated toJsonString / fromJsonString definition for struct: SPairSecond
std::string toJsonString(SPairSecond *input);
int32_t fromJson(SPairSecond *output, std::string jsondata);
// Generated stream-operators for: SPair
std::ostream & operator<<(std::ostream & out, const SPair & spair);
std::string toString(const SPair & spair);
// struct: SPair compare-functions due to union existance...
// Found Struct->settings.... 0
// Generated default compare definitions for struct: SPair
bool operator< (SPair lhs, SPair rhs);
bool operator<=(SPair lhs, SPair rhs);
bool operator> (SPair lhs, SPair rhs);
bool operator>=(SPair lhs, SPair rhs);
bool operator==(SPair lhs, SPair rhs);
bool operator!=(SPair lhs, SPair rhs);
// Generated toJsonString / fromJsonString definition for struct: SPair
std::string toJsonString(SPair *input);
int32_t fromJson(SPair *output, std::string jsondata);
// Generated stream-operators for: SMapTest
std::ostream & operator<<(std::ostream & out, const SMapTest & smaptest);
std::string toString(const SMapTest & smaptest);
// struct: SMapTest compare-functions due to union existance...
// Found Struct->settings.... 0
// Generated default compare definitions for struct: SMapTest
bool operator< (SMapTest lhs, SMapTest rhs);
bool operator<=(SMapTest lhs, SMapTest rhs);
bool operator> (SMapTest lhs, SMapTest rhs);
bool operator>=(SMapTest lhs, SMapTest rhs);
bool operator==(SMapTest lhs, SMapTest rhs);
bool operator!=(SMapTest lhs, SMapTest rhs);
// Generated toJsonString / fromJsonString definition for struct: SMapTest
std::string toJsonString(SMapTest *input);
int32_t fromJson(SMapTest *output, std::string jsondata);
#endif // ___cplusplus


#endif // __DEFINITION_PAIR_HPP__
