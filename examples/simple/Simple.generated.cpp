#ifndef __IMPLEMENTATION_SIMPLE_H__
#define __IMPLEMENTATION_SIMPLE_H__


#ifdef __cplusplus



#include "Simple.generated.h"
#include <stdio.h>
#include <string.h>
#include "jsonxx.h"
//Generated default toString,fromString,stream implementations for enumeration: AddDropType
std::string toString(AddDropType enumval, int32_t shortname)
{
  if(enumval == ADD_DROP_LOCAL){
    return shortname == 0 ? "ADD_DROP_LOCAL" : "local";
  }
  if(enumval == ADD_DROP_GLOBAL){
    return shortname == 0 ? "ADD_DROP_GLOBAL" : "global";
  }
  return shortname == 0 ? "??????" : "???";
} // toString for AddDropType


bool fromString(std::string svalue, AddDropType *enum_ptr)
{
  if(svalue == "ADD_DROP_LOCAL"  ||        svalue == "local")            {
    *enum_ptr = ADD_DROP_LOCAL; return true;
  }
  if(svalue == "ADD_DROP_GLOBAL" ||        svalue == "global")           {
    *enum_ptr = ADD_DROP_GLOBAL; return true;
  }
  return false;
} // AddDropType_fromString


std::ostream & operator<<(std::ostream & out, const AddDropType adddroptype)
{
  out << toString(adddroptype);
  return out;
} // AddDropType stream-operator



// Generated default printers for struct: AddDrop
std::ostream & operator<<(std::ostream & out, const AddDrop & adddrop) {
    out << "localId:"    << " "       << adddrop.localId               << ", ";
    out << "transportPlaneId:" << " " << adddrop.transportPlaneId      << ", ";
    out << "type:"       << " "       << adddrop.type                  << "";
  return out;
}


std::string toString(const AddDrop & adddrop) {
    std::stringstream out;
    std::string ret = "";
    out << adddrop;
    ret = out.str();
    return ret;
}


// struct: AddDrop compare-functions due to union existance...
// Found Struct->settings.... 0
// Generated default compare implementation for struct: AddDrop
bool operator<(AddDrop lhs, AddDrop rhs) {
    // Type of field _561      / localId             resolved_type: Typedef
    if (lhs.localId    < rhs.localId)    return true;
    if (lhs.localId    > rhs.localId)    return false;
    // Type of field _849      / transportPlaneId    resolved_type: Typedef
    if (lhs.transportPlaneId < rhs.transportPlaneId) return true;
    if (lhs.transportPlaneId > rhs.transportPlaneId) return false;
    // Type of field _755      / type                resolved_type: Enumeration
    if (lhs.type       < rhs.type)       return true;
    if (lhs.type       > rhs.type)       return false;
    return false;
}
bool operator<=(AddDrop lhs, AddDrop rhs) {
    if ((lhs < rhs) || (lhs == rhs)){
        return true;
    } else {
        return false;
    }
}
bool operator>(AddDrop lhs, AddDrop rhs) {
    return !(lhs <= rhs);
}
bool operator>=(AddDrop lhs, AddDrop rhs) {
    return !(lhs < rhs);
}
bool operator==(AddDrop lhs, AddDrop rhs){
    if (lhs.localId    != rhs.localId)    return false;
    if (lhs.transportPlaneId != rhs.transportPlaneId) return false;
    if (lhs.type       != rhs.type)       return false;
    return true;
}
bool operator!=(AddDrop lhs, AddDrop rhs) {
    return !(lhs == rhs);
}


// Generated toJsonString / fromJsonString implementation for struct: AddDrop
std::string toJsonString(AddDrop *input) {
  jsonxx::Object jsono;
  // Typedef              name: [uint32_t]                     json_type: Number                            json_type_cast: (unsigned int)
  // gsl:488 - In the else branch....
  // render_fundamental_to_json: scope:localId       object_name: Typedef                 json_type:number                      comment: Number
  jsono              << "localId"                  << (unsigned int)input->localId;
  // Typedef              name: [string]                       json_type: String                            json_type_cast: (std::string)
  // gsl:488 - In the else branch....
  // render_fundamental_to_json: scope:transportPlaneId object_name: Typedef              json_type:string                      comment: String
  jsono              << "transportPlaneId"         << (std::string)input->transportPlaneId;
  // Enumeration          name: [AddDropType]                  json_type: String                            json_type_cast: (std::string)
  // gsl:488 - In the else branch....
  // render_fundamental_to_json: scope:type          object_name: Enumeration             json_type:string                      comment: String
  jsono              << "type"                     << toString(input->type);
  return jsono.json();
}


int32_t fromJson(AddDrop *output, std::string jsondata) {
  jsonxx::Object json;
  if(!json.parse(jsondata))
  {
    return -2048;
  }
  // Return the negative-bitindex 1 of the localId-field on error
  // Type is: _561 ->       [uint32_t] -> typeOf: Typedef -> parent_type FundamentalType
  // Line 663: Else case json_type: Number json_type_cast: (unsigned int)
  if(json.has<jsonxx::Number>("localId"))
  {
    output->localId = (unsigned int)json.get<jsonxx::Number>("localId");
  }
  // Return the negative-bitindex 2 of the transportPlaneId-field on error
  // Type is: _849 ->       [string] -> typeOf: Typedef -> parent_type Class
  // Line 663: Else case json_type: String json_type_cast: (std::string)
  if(json.has<jsonxx::String>("transportPlaneId"))
  {
    output->transportPlaneId = (std::string)json.get<jsonxx::String>("transportPlaneId");
  }
  // Return the negative-bitindex 3 of the type-field on error
  // Type is: _755 ->       [AddDropType] -> typeOf: Enumeration -> parent_type unknown
  if(json.has<jsonxx::String>("type"))
  {
    if(fromString(json.get<jsonxx::String>("type"),&output->type) == false)
    {
      return -3;
    }
  }
  return 0;
}

// Generated default printers for struct: Simple
std::ostream & operator<<(std::ostream & out, const Simple & simple) {
    out << "is_on:"      << " "       << simple.is_on                  << ", ";
    out << "var_vector_of_bool:" << " [ ";
    for (std::vector<bool >::const_iterator      it=simple.var_vector_of_bool.begin();     it != simple.var_vector_of_bool.end();     ++it)
    {
      out << *it;
      if(it != simple.var_vector_of_bool.end())
        out << ",";
    }
    out << " ] " << ", ";
    out << "var_vector_of_int:" << " [ ";
    for (std::vector<int32_t >::const_iterator   it=simple.var_vector_of_int.begin();      it != simple.var_vector_of_int.end();      ++it)
    {
      out << *it;
      if(it != simple.var_vector_of_int.end())
        out << ",";
    }
    out << " ] " << ", ";
    out << "var_uint08:" << " "       << simple.var_uint08             << ", ";
    out << "var_uint16:" << " "       << simple.var_uint16             << ", ";
    out << "var_uint32:" << " "       << simple.var_uint32             << ", ";
    out << "var_uint64:" << " "       << simple.var_uint64             << ", ";
    out << "vector_of_uint08:" << " [ ";
    for (std::vector<uint8_t >::const_iterator   it=simple.vector_of_uint08.begin();       it != simple.vector_of_uint08.end();       ++it)
    {
      out << *it;
      if(it != simple.vector_of_uint08.end())
        out << ",";
    }
    out << " ] " << ", ";
    out << "vector_of_uint16:" << " [ ";
    for (std::vector<uint16_t >::const_iterator  it=simple.vector_of_uint16.begin();       it != simple.vector_of_uint16.end();       ++it)
    {
      out << *it;
      if(it != simple.vector_of_uint16.end())
        out << ",";
    }
    out << " ] " << ", ";
    out << "vector_of_uint32:" << " [ ";
    for (std::vector<uint32_t >::const_iterator  it=simple.vector_of_uint32.begin();       it != simple.vector_of_uint32.end();       ++it)
    {
      out << *it;
      if(it != simple.vector_of_uint32.end())
        out << ",";
    }
    out << " ] " << ", ";
    out << "vector_of_uint64:" << " [ ";
    for (std::vector<uint64_t >::const_iterator  it=simple.vector_of_uint64.begin();       it != simple.vector_of_uint64.end();       ++it)
    {
      out << *it;
      if(it != simple.vector_of_uint64.end())
        out << ",";
    }
    out << " ] " << ", ";
    out << "list_of_uint08:" << " [ ";
    for (std::list<uint8_t >::const_iterator     it=simple.list_of_uint08.begin();         it != simple.list_of_uint08.end();         ++it)
    {
      out << *it;
      if(it != simple.list_of_uint08.end())
        out << ",";
    }
    out << " ] " << ", ";
    out << "list_of_uint16:" << " [ ";
    for (std::list<uint16_t >::const_iterator    it=simple.list_of_uint16.begin();         it != simple.list_of_uint16.end();         ++it)
    {
      out << *it;
      if(it != simple.list_of_uint16.end())
        out << ",";
    }
    out << " ] " << ", ";
    out << "list_of_uint32:" << " [ ";
    for (std::list<uint32_t >::const_iterator    it=simple.list_of_uint32.begin();         it != simple.list_of_uint32.end();         ++it)
    {
      out << *it;
      if(it != simple.list_of_uint32.end())
        out << ",";
    }
    out << " ] " << ", ";
    out << "list_of_uint64:" << " [ ";
    for (std::list<uint64_t >::const_iterator    it=simple.list_of_uint64.begin();         it != simple.list_of_uint64.end();         ++it)
    {
      out << *it;
      if(it != simple.list_of_uint64.end())
        out << ",";
    }
    out << " ] " << ", ";
    out << "var_int08:"  << " "       << simple.var_int08              << ", ";
    out << "var_int16:"  << " "       << simple.var_int16              << ", ";
    out << "var_int32:"  << " "       << simple.var_int32              << ", ";
    out << "var_int64:"  << " "       << simple.var_int64              << ", ";
    out << "vector_of_int8:" << " [ ";
    for (std::vector<int8_t >::const_iterator    it=simple.vector_of_int8.begin();         it != simple.vector_of_int8.end();         ++it)
    {
      out << *it;
      if(it != simple.vector_of_int8.end())
        out << ",";
    }
    out << " ] " << ", ";
    out << "vector_of_int16:" << " [ ";
    for (std::vector<int16_t >::const_iterator   it=simple.vector_of_int16.begin();        it != simple.vector_of_int16.end();        ++it)
    {
      out << *it;
      if(it != simple.vector_of_int16.end())
        out << ",";
    }
    out << " ] " << ", ";
    out << "vector_of_int32:" << " [ ";
    for (std::vector<int32_t >::const_iterator   it=simple.vector_of_int32.begin();        it != simple.vector_of_int32.end();        ++it)
    {
      out << *it;
      if(it != simple.vector_of_int32.end())
        out << ",";
    }
    out << " ] " << ", ";
    out << "vector_of_int64:" << " [ ";
    for (std::vector<int64_t >::const_iterator   it=simple.vector_of_int64.begin();        it != simple.vector_of_int64.end();        ++it)
    {
      out << *it;
      if(it != simple.vector_of_int64.end())
        out << ",";
    }
    out << " ] " << ", ";
    out << "list_of_int8:" << " [ ";
    for (std::list<int8_t >::const_iterator      it=simple.list_of_int8.begin();           it != simple.list_of_int8.end();           ++it)
    {
      out << *it;
      if(it != simple.list_of_int8.end())
        out << ",";
    }
    out << " ] " << ", ";
    out << "list_of_int16:" << " [ ";
    for (std::list<int16_t >::const_iterator     it=simple.list_of_int16.begin();          it != simple.list_of_int16.end();          ++it)
    {
      out << *it;
      if(it != simple.list_of_int16.end())
        out << ",";
    }
    out << " ] " << ", ";
    out << "list_of_int32:" << " [ ";
    for (std::list<int32_t >::const_iterator     it=simple.list_of_int32.begin();          it != simple.list_of_int32.end();          ++it)
    {
      out << *it;
      if(it != simple.list_of_int32.end())
        out << ",";
    }
    out << " ] " << ", ";
    out << "list_of_int64:" << " [ ";
    for (std::list<int64_t >::const_iterator     it=simple.list_of_int64.begin();          it != simple.list_of_int64.end();          ++it)
    {
      out << *it;
      if(it != simple.list_of_int64.end())
        out << ",";
    }
    out << " ] " << ", ";
    out << "var_string:" << " "       << simple.var_string             << ", ";
    out << "var_float:"  << " "       << simple.var_float              << ", ";
    out << "var_double:" << " "       << simple.var_double             << ", ";
    out << "var_long:"   << " "       << simple.var_long               << ", ";
    out << "var_in_addr:" << " "      << simple.var_in_addr            << ", ";
    out << "vector_of_in_addr:" << " [ ";
    for (std::vector<in_addr >::const_iterator   it=simple.vector_of_in_addr.begin();      it != simple.vector_of_in_addr.end();      ++it)
    {
      out << *it;
      if(it != simple.vector_of_in_addr.end())
        out << ",";
    }
    out << " ] " << ", ";
    out << "list_of_in_addr:" << " [ ";
    for (std::list<in_addr >::const_iterator     it=simple.list_of_in_addr.begin();        it != simple.list_of_in_addr.end();        ++it)
    {
      out << *it;
      if(it != simple.list_of_in_addr.end())
        out << ",";
    }
    out << " ] " << ", ";
    out << "vc:"         << " [ ";
    for (std::vector<float >::const_iterator     it=simple.vc.begin();                     it != simple.vc.end();                     ++it)
    {
      out << *it;
      if(it != simple.vc.end())
        out << ",";
    }
    out << " ] " << "";
  return out;
}


std::string toString(const Simple & simple) {
    std::stringstream out;
    std::string ret = "";
    out << simple;
    ret = out.str();
    return ret;
}


// struct: Simple compare-functions due to union existance...
// Found Struct->settings.... 0
// Generated default compare implementation for struct: Simple
bool operator<(Simple lhs, Simple rhs) {
    // Type of field _2267     / is_on               resolved_type: FundamentalType
    if (lhs.is_on      < rhs.is_on)      return true;
    if (lhs.is_on      > rhs.is_on)      return false;
    // Type of field _919      / var_vector_of_bool  resolved_type: Class
    if (lhs.var_vector_of_bool < rhs.var_vector_of_bool) return true;
    if (lhs.var_vector_of_bool > rhs.var_vector_of_bool) return false;
    // Type of field _920      / var_vector_of_int   resolved_type: Class
    if (lhs.var_vector_of_int < rhs.var_vector_of_int) return true;
    if (lhs.var_vector_of_int > rhs.var_vector_of_int) return false;
    // Type of field _559      / var_uint08          resolved_type: Typedef
    if (lhs.var_uint08 < rhs.var_uint08) return true;
    if (lhs.var_uint08 > rhs.var_uint08) return false;
    // Type of field _560      / var_uint16          resolved_type: Typedef
    if (lhs.var_uint16 < rhs.var_uint16) return true;
    if (lhs.var_uint16 > rhs.var_uint16) return false;
    // Type of field _561      / var_uint32          resolved_type: Typedef
    if (lhs.var_uint32 < rhs.var_uint32) return true;
    if (lhs.var_uint32 > rhs.var_uint32) return false;
    // Type of field _562      / var_uint64          resolved_type: Typedef
    if (lhs.var_uint64 < rhs.var_uint64) return true;
    if (lhs.var_uint64 > rhs.var_uint64) return false;
    // Type of field _921      / vector_of_uint08    resolved_type: Class
    if (lhs.vector_of_uint08 < rhs.vector_of_uint08) return true;
    if (lhs.vector_of_uint08 > rhs.vector_of_uint08) return false;
    // Type of field _922      / vector_of_uint16    resolved_type: Class
    if (lhs.vector_of_uint16 < rhs.vector_of_uint16) return true;
    if (lhs.vector_of_uint16 > rhs.vector_of_uint16) return false;
    // Type of field _923      / vector_of_uint32    resolved_type: Class
    if (lhs.vector_of_uint32 < rhs.vector_of_uint32) return true;
    if (lhs.vector_of_uint32 > rhs.vector_of_uint32) return false;
    // Type of field _924      / vector_of_uint64    resolved_type: Class
    if (lhs.vector_of_uint64 < rhs.vector_of_uint64) return true;
    if (lhs.vector_of_uint64 > rhs.vector_of_uint64) return false;
    // Type of field _888      / list_of_uint08      resolved_type: Class
    if (lhs.list_of_uint08 < rhs.list_of_uint08) return true;
    if (lhs.list_of_uint08 > rhs.list_of_uint08) return false;
    // Type of field _889      / list_of_uint16      resolved_type: Class
    if (lhs.list_of_uint16 < rhs.list_of_uint16) return true;
    if (lhs.list_of_uint16 > rhs.list_of_uint16) return false;
    // Type of field _890      / list_of_uint32      resolved_type: Class
    if (lhs.list_of_uint32 < rhs.list_of_uint32) return true;
    if (lhs.list_of_uint32 > rhs.list_of_uint32) return false;
    // Type of field _891      / list_of_uint64      resolved_type: Class
    if (lhs.list_of_uint64 < rhs.list_of_uint64) return true;
    if (lhs.list_of_uint64 > rhs.list_of_uint64) return false;
    // Type of field _555      / var_int08           resolved_type: Typedef
    if (lhs.var_int08  < rhs.var_int08)  return true;
    if (lhs.var_int08  > rhs.var_int08)  return false;
    // Type of field _556      / var_int16           resolved_type: Typedef
    if (lhs.var_int16  < rhs.var_int16)  return true;
    if (lhs.var_int16  > rhs.var_int16)  return false;
    // Type of field _557      / var_int32           resolved_type: Typedef
    if (lhs.var_int32  < rhs.var_int32)  return true;
    if (lhs.var_int32  > rhs.var_int32)  return false;
    // Type of field _558      / var_int64           resolved_type: Typedef
    if (lhs.var_int64  < rhs.var_int64)  return true;
    if (lhs.var_int64  > rhs.var_int64)  return false;
    // Type of field _925      / vector_of_int8      resolved_type: Class
    if (lhs.vector_of_int8 < rhs.vector_of_int8) return true;
    if (lhs.vector_of_int8 > rhs.vector_of_int8) return false;
    // Type of field _926      / vector_of_int16     resolved_type: Class
    if (lhs.vector_of_int16 < rhs.vector_of_int16) return true;
    if (lhs.vector_of_int16 > rhs.vector_of_int16) return false;
    // Type of field _920      / vector_of_int32     resolved_type: Class
    if (lhs.vector_of_int32 < rhs.vector_of_int32) return true;
    if (lhs.vector_of_int32 > rhs.vector_of_int32) return false;
    // Type of field _927      / vector_of_int64     resolved_type: Class
    if (lhs.vector_of_int64 < rhs.vector_of_int64) return true;
    if (lhs.vector_of_int64 > rhs.vector_of_int64) return false;
    // Type of field _892      / list_of_int8        resolved_type: Class
    if (lhs.list_of_int8 < rhs.list_of_int8) return true;
    if (lhs.list_of_int8 > rhs.list_of_int8) return false;
    // Type of field _893      / list_of_int16       resolved_type: Class
    if (lhs.list_of_int16 < rhs.list_of_int16) return true;
    if (lhs.list_of_int16 > rhs.list_of_int16) return false;
    // Type of field _894      / list_of_int32       resolved_type: Class
    if (lhs.list_of_int32 < rhs.list_of_int32) return true;
    if (lhs.list_of_int32 > rhs.list_of_int32) return false;
    // Type of field _895      / list_of_int64       resolved_type: Class
    if (lhs.list_of_int64 < rhs.list_of_int64) return true;
    if (lhs.list_of_int64 > rhs.list_of_int64) return false;
    // Type of field _849      / var_string          resolved_type: Typedef
    if (lhs.var_string < rhs.var_string) return true;
    if (lhs.var_string > rhs.var_string) return false;
    // Type of field _1787     / var_float           resolved_type: FundamentalType
    if (lhs.var_float  < rhs.var_float)  return true;
    if (lhs.var_float  > rhs.var_float)  return false;
    // Type of field _1786     / var_double          resolved_type: FundamentalType
    if (lhs.var_double < rhs.var_double) return true;
    if (lhs.var_double > rhs.var_double) return false;
    // Type of field _1789     / var_long            resolved_type: FundamentalType
    if (lhs.var_long   < rhs.var_long)   return true;
    if (lhs.var_long   > rhs.var_long)   return false;
    // Type of field _682      / var_in_addr         resolved_type: Struct
    if (lhs.var_in_addr < rhs.var_in_addr) return true;
    if (lhs.var_in_addr > rhs.var_in_addr) return false;
    // Type of field _928      / vector_of_in_addr   resolved_type: Class
    if (lhs.vector_of_in_addr < rhs.vector_of_in_addr) return true;
    if (lhs.vector_of_in_addr > rhs.vector_of_in_addr) return false;
    // Type of field _896      / list_of_in_addr     resolved_type: Class
    if (lhs.list_of_in_addr < rhs.list_of_in_addr) return true;
    if (lhs.list_of_in_addr > rhs.list_of_in_addr) return false;
    // Type of field _929      / vc                  resolved_type: Class
    if (lhs.vc         < rhs.vc)         return true;
    if (lhs.vc         > rhs.vc)         return false;
    return false;
}
bool operator<=(Simple lhs, Simple rhs) {
    if ((lhs < rhs) || (lhs == rhs)){
        return true;
    } else {
        return false;
    }
}
bool operator>(Simple lhs, Simple rhs) {
    return !(lhs <= rhs);
}
bool operator>=(Simple lhs, Simple rhs) {
    return !(lhs < rhs);
}
bool operator==(Simple lhs, Simple rhs){
    if (lhs.is_on      != rhs.is_on)      return false;
    if (lhs.var_vector_of_bool != rhs.var_vector_of_bool) return false;
    if (lhs.var_vector_of_int != rhs.var_vector_of_int) return false;
    if (lhs.var_uint08 != rhs.var_uint08) return false;
    if (lhs.var_uint16 != rhs.var_uint16) return false;
    if (lhs.var_uint32 != rhs.var_uint32) return false;
    if (lhs.var_uint64 != rhs.var_uint64) return false;
    if (lhs.vector_of_uint08 != rhs.vector_of_uint08) return false;
    if (lhs.vector_of_uint16 != rhs.vector_of_uint16) return false;
    if (lhs.vector_of_uint32 != rhs.vector_of_uint32) return false;
    if (lhs.vector_of_uint64 != rhs.vector_of_uint64) return false;
    if (lhs.list_of_uint08 != rhs.list_of_uint08) return false;
    if (lhs.list_of_uint16 != rhs.list_of_uint16) return false;
    if (lhs.list_of_uint32 != rhs.list_of_uint32) return false;
    if (lhs.list_of_uint64 != rhs.list_of_uint64) return false;
    if (lhs.var_int08  != rhs.var_int08)  return false;
    if (lhs.var_int16  != rhs.var_int16)  return false;
    if (lhs.var_int32  != rhs.var_int32)  return false;
    if (lhs.var_int64  != rhs.var_int64)  return false;
    if (lhs.vector_of_int8 != rhs.vector_of_int8) return false;
    if (lhs.vector_of_int16 != rhs.vector_of_int16) return false;
    if (lhs.vector_of_int32 != rhs.vector_of_int32) return false;
    if (lhs.vector_of_int64 != rhs.vector_of_int64) return false;
    if (lhs.list_of_int8 != rhs.list_of_int8) return false;
    if (lhs.list_of_int16 != rhs.list_of_int16) return false;
    if (lhs.list_of_int32 != rhs.list_of_int32) return false;
    if (lhs.list_of_int64 != rhs.list_of_int64) return false;
    if (lhs.var_string != rhs.var_string) return false;
    if (lhs.var_float  != rhs.var_float)  return false;
    if (lhs.var_double != rhs.var_double) return false;
    if (lhs.var_long   != rhs.var_long)   return false;
    if (lhs.var_in_addr != rhs.var_in_addr) return false;
    if (lhs.vector_of_in_addr != rhs.vector_of_in_addr) return false;
    if (lhs.list_of_in_addr != rhs.list_of_in_addr) return false;
    if (lhs.vc         != rhs.vc)         return false;
    return true;
}
bool operator!=(Simple lhs, Simple rhs) {
    return !(lhs == rhs);
}


// Generated toJsonString / fromJsonString implementation for struct: Simple
std::string toJsonString(Simple *input) {
  jsonxx::Object jsono;
  // FundamentalType      name: [bool]                         json_type: Boolean                           json_type_cast: (bool)
  // gsl:488 - In the else branch....
  // render_fundamental_to_json: scope:is_on         object_name: FundamentalType         json_type:boolean                     comment: Boolean
  jsono              << "is_on"                    << (bool)input->is_on;
  // Class                name: [vector<bool, std::allocator<bool> >] json_type: not-set                    json_type_cast: not-set
  // var_vector_of_bool is of type: Class                       trying to resolve type FundamentalType
  // Found FundamentalType
  jsonxx::Array jsona_var_vector_of_bool;
  for (std::vector<bool                           >::iterator it=input->var_vector_of_bool.begin(); it != input->var_vector_of_bool.end(); ++it)
  {
  // render_fundamental_to_json: scope:VectorList    object_name: FundamentalType         json_type:boolean                     comment: Boolean
    jsona_var_vector_of_bool << (bool)*it;
  }
  jsono << "var_vector_of_bool" << jsona_var_vector_of_bool;
  // Class                name: [vector<int32_t, std::allocator<int32_t> >] json_type: not-set              json_type_cast: not-set
  // var_vector_of_int is of type: Class                        trying to resolve type Typedef
  // Found Typedef
  jsonxx::Array jsona_var_vector_of_int;
  for (std::vector<int32_t                        >::iterator it=input->var_vector_of_int.begin(); it != input->var_vector_of_int.end(); ++it)
  {
  // render_fundamental_to_json: scope:VectorList    object_name: Typedef                 json_type:number                      comment: Number
    jsona_var_vector_of_int   << (int)*it;
  }
  jsono << "var_vector_of_int" << jsona_var_vector_of_int;
  // Typedef              name: [uint8_t]                      json_type: Number                            json_type_cast: (unsigned int)
  // gsl:488 - In the else branch....
  // render_fundamental_to_json: scope:var_uint08    object_name: Typedef                 json_type:number                      comment: Number
  jsono              << "var_uint08"               << (unsigned int)input->var_uint08;
  // Typedef              name: [uint16_t]                     json_type: Number                            json_type_cast: (unsigned int)
  // gsl:488 - In the else branch....
  // render_fundamental_to_json: scope:var_uint16    object_name: Typedef                 json_type:number                      comment: Number
  jsono              << "var_uint16"               << (unsigned int)input->var_uint16;
  // Typedef              name: [uint32_t]                     json_type: Number                            json_type_cast: (unsigned int)
  // gsl:488 - In the else branch....
  // render_fundamental_to_json: scope:var_uint32    object_name: Typedef                 json_type:number                      comment: Number
  jsono              << "var_uint32"               << (unsigned int)input->var_uint32;
  // Typedef              name: [uint64_t]                     json_type: Number                            json_type_cast: (unsigned long)
  // gsl:488 - In the else branch....
  // render_fundamental_to_json: scope:var_uint64    object_name: Typedef                 json_type:number                      comment: Number
  jsono              << "var_uint64"               << (unsigned long)input->var_uint64;
  // Class                name: [vector<uint8_t, std::allocator<uint8_t> >] json_type: not-set              json_type_cast: not-set
  // vector_of_uint08 is of type: Class                         trying to resolve type Typedef
  // Found Typedef
  jsonxx::Array jsona_vector_of_uint08;
  for (std::vector<uint8_t                        >::iterator it=input->vector_of_uint08.begin(); it != input->vector_of_uint08.end(); ++it)
  {
  // render_fundamental_to_json: scope:VectorList    object_name: Typedef                 json_type:number                      comment: Number
    jsona_vector_of_uint08    << (unsigned int)*it;
  }
  jsono << "vector_of_uint08" << jsona_vector_of_uint08;
  // Class                name: [vector<uint16_t, std::allocator<uint16_t> >] json_type: not-set            json_type_cast: not-set
  // vector_of_uint16 is of type: Class                         trying to resolve type Typedef
  // Found Typedef
  jsonxx::Array jsona_vector_of_uint16;
  for (std::vector<uint16_t                       >::iterator it=input->vector_of_uint16.begin(); it != input->vector_of_uint16.end(); ++it)
  {
  // render_fundamental_to_json: scope:VectorList    object_name: Typedef                 json_type:number                      comment: Number
    jsona_vector_of_uint16    << (unsigned int)*it;
  }
  jsono << "vector_of_uint16" << jsona_vector_of_uint16;
  // Class                name: [vector<uint32_t, std::allocator<uint32_t> >] json_type: not-set            json_type_cast: not-set
  // vector_of_uint32 is of type: Class                         trying to resolve type Typedef
  // Found Typedef
  jsonxx::Array jsona_vector_of_uint32;
  for (std::vector<uint32_t                       >::iterator it=input->vector_of_uint32.begin(); it != input->vector_of_uint32.end(); ++it)
  {
  // render_fundamental_to_json: scope:VectorList    object_name: Typedef                 json_type:number                      comment: Number
    jsona_vector_of_uint32    << (unsigned int)*it;
  }
  jsono << "vector_of_uint32" << jsona_vector_of_uint32;
  // Class                name: [vector<uint64_t, std::allocator<uint64_t> >] json_type: not-set            json_type_cast: not-set
  // vector_of_uint64 is of type: Class                         trying to resolve type Typedef
  // Found Typedef
  jsonxx::Array jsona_vector_of_uint64;
  for (std::vector<uint64_t                       >::iterator it=input->vector_of_uint64.begin(); it != input->vector_of_uint64.end(); ++it)
  {
  // render_fundamental_to_json: scope:VectorList    object_name: Typedef                 json_type:number                      comment: Number
    jsona_vector_of_uint64    << (unsigned long)*it;
  }
  jsono << "vector_of_uint64" << jsona_vector_of_uint64;
  // Class                name: [list<uint8_t, std::allocator<uint8_t> >] json_type: not-set                json_type_cast: not-set
  // list_of_uint08 is of type: Class                           trying to resolve type Typedef
  // Found Typedef
  jsonxx::Array jsona_list_of_uint08;
  for (std::list<uint8_t                          >::iterator it=input->list_of_uint08.begin(); it != input->list_of_uint08.end(); ++it)
  {
  // render_fundamental_to_json: scope:VectorList    object_name: Typedef                 json_type:number                      comment: Number
    jsona_list_of_uint08      << (unsigned int)*it;
  }
  jsono << "list_of_uint08" << jsona_list_of_uint08;
  // Class                name: [list<uint16_t, std::allocator<uint16_t> >] json_type: not-set              json_type_cast: not-set
  // list_of_uint16 is of type: Class                           trying to resolve type Typedef
  // Found Typedef
  jsonxx::Array jsona_list_of_uint16;
  for (std::list<uint16_t                         >::iterator it=input->list_of_uint16.begin(); it != input->list_of_uint16.end(); ++it)
  {
  // render_fundamental_to_json: scope:VectorList    object_name: Typedef                 json_type:number                      comment: Number
    jsona_list_of_uint16      << (unsigned int)*it;
  }
  jsono << "list_of_uint16" << jsona_list_of_uint16;
  // Class                name: [list<uint32_t, std::allocator<uint32_t> >] json_type: not-set              json_type_cast: not-set
  // list_of_uint32 is of type: Class                           trying to resolve type Typedef
  // Found Typedef
  jsonxx::Array jsona_list_of_uint32;
  for (std::list<uint32_t                         >::iterator it=input->list_of_uint32.begin(); it != input->list_of_uint32.end(); ++it)
  {
  // render_fundamental_to_json: scope:VectorList    object_name: Typedef                 json_type:number                      comment: Number
    jsona_list_of_uint32      << (unsigned int)*it;
  }
  jsono << "list_of_uint32" << jsona_list_of_uint32;
  // Class                name: [list<uint64_t, std::allocator<uint64_t> >] json_type: not-set              json_type_cast: not-set
  // list_of_uint64 is of type: Class                           trying to resolve type Typedef
  // Found Typedef
  jsonxx::Array jsona_list_of_uint64;
  for (std::list<uint64_t                         >::iterator it=input->list_of_uint64.begin(); it != input->list_of_uint64.end(); ++it)
  {
  // render_fundamental_to_json: scope:VectorList    object_name: Typedef                 json_type:number                      comment: Number
    jsona_list_of_uint64      << (unsigned long)*it;
  }
  jsono << "list_of_uint64" << jsona_list_of_uint64;
  // Typedef              name: [int8_t]                       json_type: Number                            json_type_cast: (signed int)
  // gsl:488 - In the else branch....
  // render_fundamental_to_json: scope:var_int08     object_name: Typedef                 json_type:number                      comment: Number
  jsono              << "var_int08"                << (signed int)input->var_int08;
  // Typedef              name: [int16_t]                      json_type: Number                            json_type_cast: (signed int)
  // gsl:488 - In the else branch....
  // render_fundamental_to_json: scope:var_int16     object_name: Typedef                 json_type:number                      comment: Number
  jsono              << "var_int16"                << (signed int)input->var_int16;
  // Typedef              name: [int32_t]                      json_type: Number                            json_type_cast: (int)
  // gsl:488 - In the else branch....
  // render_fundamental_to_json: scope:var_int32     object_name: Typedef                 json_type:number                      comment: Number
  jsono              << "var_int32"                << (int)input->var_int32;
  // Typedef              name: [int64_t]                      json_type: Number                            json_type_cast: (long long)
  // gsl:488 - In the else branch....
  // render_fundamental_to_json: scope:var_int64     object_name: Typedef                 json_type:number                      comment: Number
  jsono              << "var_int64"                << (long long)input->var_int64;
  // Class                name: [vector<int8_t, std::allocator<int8_t> >] json_type: not-set                json_type_cast: not-set
  // vector_of_int8 is of type: Class                           trying to resolve type Typedef
  // Found Typedef
  jsonxx::Array jsona_vector_of_int8;
  for (std::vector<int8_t                         >::iterator it=input->vector_of_int8.begin(); it != input->vector_of_int8.end(); ++it)
  {
  // render_fundamental_to_json: scope:VectorList    object_name: Typedef                 json_type:number                      comment: Number
    jsona_vector_of_int8      << (signed int)*it;
  }
  jsono << "vector_of_int8" << jsona_vector_of_int8;
  // Class                name: [vector<int16_t, std::allocator<int16_t> >] json_type: not-set              json_type_cast: not-set
  // vector_of_int16 is of type: Class                          trying to resolve type Typedef
  // Found Typedef
  jsonxx::Array jsona_vector_of_int16;
  for (std::vector<int16_t                        >::iterator it=input->vector_of_int16.begin(); it != input->vector_of_int16.end(); ++it)
  {
  // render_fundamental_to_json: scope:VectorList    object_name: Typedef                 json_type:number                      comment: Number
    jsona_vector_of_int16     << (signed int)*it;
  }
  jsono << "vector_of_int16" << jsona_vector_of_int16;
  // Class                name: [vector<int32_t, std::allocator<int32_t> >] json_type: not-set              json_type_cast: not-set
  // vector_of_int32 is of type: Class                          trying to resolve type Typedef
  // Found Typedef
  jsonxx::Array jsona_vector_of_int32;
  for (std::vector<int32_t                        >::iterator it=input->vector_of_int32.begin(); it != input->vector_of_int32.end(); ++it)
  {
  // render_fundamental_to_json: scope:VectorList    object_name: Typedef                 json_type:number                      comment: Number
    jsona_vector_of_int32     << (int)*it;
  }
  jsono << "vector_of_int32" << jsona_vector_of_int32;
  // Class                name: [vector<int64_t, std::allocator<int64_t> >] json_type: not-set              json_type_cast: not-set
  // vector_of_int64 is of type: Class                          trying to resolve type Typedef
  // Found Typedef
  jsonxx::Array jsona_vector_of_int64;
  for (std::vector<int64_t                        >::iterator it=input->vector_of_int64.begin(); it != input->vector_of_int64.end(); ++it)
  {
  // render_fundamental_to_json: scope:VectorList    object_name: Typedef                 json_type:number                      comment: Number
    jsona_vector_of_int64     << (long long)*it;
  }
  jsono << "vector_of_int64" << jsona_vector_of_int64;
  // Class                name: [list<int8_t, std::allocator<int8_t> >] json_type: not-set                  json_type_cast: not-set
  // list_of_int8 is of type: Class                             trying to resolve type Typedef
  // Found Typedef
  jsonxx::Array jsona_list_of_int8;
  for (std::list<int8_t                           >::iterator it=input->list_of_int8.begin(); it != input->list_of_int8.end(); ++it)
  {
  // render_fundamental_to_json: scope:VectorList    object_name: Typedef                 json_type:number                      comment: Number
    jsona_list_of_int8        << (signed int)*it;
  }
  jsono << "list_of_int8" << jsona_list_of_int8;
  // Class                name: [list<int16_t, std::allocator<int16_t> >] json_type: not-set                json_type_cast: not-set
  // list_of_int16 is of type: Class                            trying to resolve type Typedef
  // Found Typedef
  jsonxx::Array jsona_list_of_int16;
  for (std::list<int16_t                          >::iterator it=input->list_of_int16.begin(); it != input->list_of_int16.end(); ++it)
  {
  // render_fundamental_to_json: scope:VectorList    object_name: Typedef                 json_type:number                      comment: Number
    jsona_list_of_int16       << (signed int)*it;
  }
  jsono << "list_of_int16" << jsona_list_of_int16;
  // Class                name: [list<int32_t, std::allocator<int32_t> >] json_type: not-set                json_type_cast: not-set
  // list_of_int32 is of type: Class                            trying to resolve type Typedef
  // Found Typedef
  jsonxx::Array jsona_list_of_int32;
  for (std::list<int32_t                          >::iterator it=input->list_of_int32.begin(); it != input->list_of_int32.end(); ++it)
  {
  // render_fundamental_to_json: scope:VectorList    object_name: Typedef                 json_type:number                      comment: Number
    jsona_list_of_int32       << (int)*it;
  }
  jsono << "list_of_int32" << jsona_list_of_int32;
  // Class                name: [list<int64_t, std::allocator<int64_t> >] json_type: not-set                json_type_cast: not-set
  // list_of_int64 is of type: Class                            trying to resolve type Typedef
  // Found Typedef
  jsonxx::Array jsona_list_of_int64;
  for (std::list<int64_t                          >::iterator it=input->list_of_int64.begin(); it != input->list_of_int64.end(); ++it)
  {
  // render_fundamental_to_json: scope:VectorList    object_name: Typedef                 json_type:number                      comment: Number
    jsona_list_of_int64       << (long long)*it;
  }
  jsono << "list_of_int64" << jsona_list_of_int64;
  // Typedef              name: [string]                       json_type: String                            json_type_cast: (std::string)
  // gsl:488 - In the else branch....
  // render_fundamental_to_json: scope:var_string    object_name: Typedef                 json_type:string                      comment: String
  jsono              << "var_string"               << (std::string)input->var_string;
  // FundamentalType      name: [float]                        json_type: Number                            json_type_cast: (float)
  // gsl:488 - In the else branch....
  // render_fundamental_to_json: scope:var_float     object_name: FundamentalType         json_type:number                      comment: Number
  jsono              << "var_float"                << (float)input->var_float;
  // FundamentalType      name: [double]                       json_type: Number                            json_type_cast: (double)
  // gsl:488 - In the else branch....
  // render_fundamental_to_json: scope:var_double    object_name: FundamentalType         json_type:number                      comment: Number
  jsono              << "var_double"               << (double)input->var_double;
  // FundamentalType      name: [long int]                     json_type: Number                            json_type_cast: (long long)
  // gsl:488 - In the else branch....
  // render_fundamental_to_json: scope:var_long      object_name: FundamentalType         json_type:number                      comment: Number
  jsono              << "var_long"                 << (long long)input->var_long;
  // Struct               name: [in_addr]                      json_type: Object                            json_type_cast: not-set
  // gsl:488 - In the else branch....
  // render_fundamental_to_json: scope:var_in_addr   object_name: Struct                  json_type:object                      comment: Object
  jsono              << "var_in_addr"              << toString(input->var_in_addr);
  // Class                name: [vector<in_addr, std::allocator<in_addr> >] json_type: not-set              json_type_cast: not-set
  // vector_of_in_addr is of type: Class                        trying to resolve type Struct
  // Found Struct
  jsonxx::Array jsona_vector_of_in_addr;
  for (std::vector<in_addr                        >::iterator it=input->vector_of_in_addr.begin(); it != input->vector_of_in_addr.end(); ++it)
  {
  // render_fundamental_to_json: scope:VectorList    object_name: Struct                  json_type:inaddr                      comment: InAddr
    jsona_vector_of_in_addr   << toString(*it);
  }
  jsono << "vector_of_in_addr" << jsona_vector_of_in_addr;
  // Class                name: [list<in_addr, std::allocator<in_addr> >] json_type: not-set                json_type_cast: not-set
  // list_of_in_addr is of type: Class                          trying to resolve type Struct
  // Found Struct
  jsonxx::Array jsona_list_of_in_addr;
  for (std::list<in_addr                          >::iterator it=input->list_of_in_addr.begin(); it != input->list_of_in_addr.end(); ++it)
  {
  // render_fundamental_to_json: scope:VectorList    object_name: Struct                  json_type:inaddr                      comment: InAddr
    jsona_list_of_in_addr     << toString(*it);
  }
  jsono << "list_of_in_addr" << jsona_list_of_in_addr;
  // Class                name: [vector<float, std::allocator<float> >] json_type: not-set                  json_type_cast: not-set
  // vc         is of type: Class                               trying to resolve type FundamentalType
  // Found FundamentalType
  jsonxx::Array jsona_vc;
  for (std::vector<float                          >::iterator it=input->vc.begin(); it != input->vc.end(); ++it)
  {
  // render_fundamental_to_json: scope:VectorList    object_name: FundamentalType         json_type:number                      comment: Number
    jsona_vc                  << (float)*it;
  }
  jsono << "vc"         << jsona_vc;
  return jsono.json();
}


int32_t fromJson(Simple *output, std::string jsondata) {
  jsonxx::Object json;
  if(!json.parse(jsondata))
  {
    return -2048;
  }
  // Return the negative-bitindex 1 of the is_on-field on error
  // Type is: _2267 ->      [bool] -> typeOf: FundamentalType -> parent_type unknown
  // Line 663: Else case json_type: Boolean json_type_cast: (bool)
  if(json.has<jsonxx::Boolean>("is_on"))
  {
    output->is_on = (bool)json.get<jsonxx::Boolean>("is_on");
  }
  // Return the negative-bitindex 2 of the var_vector_of_bool-field on error
  // Type is: _919 ->       [vector<bool, std::allocator<bool> >] -> typeOf: Class -> parent_type FundamentalType
  // vector-container implementation...
  if(json.has<jsonxx::Array>("var_vector_of_bool"))
  {
    jsonxx::Array var_vector_of_bool_array = json.get<jsonxx::Array>("var_vector_of_bool");
    for(int af = 0; af < var_vector_of_bool_array.size(); af++)
    {
      bool var_vector_of_bool_af;
      var_vector_of_bool_af = (bool)var_vector_of_bool_array.get<jsonxx::Boolean>(af);
      output->var_vector_of_bool.push_back(var_vector_of_bool_af);
    }
  }
  // Return the negative-bitindex 3 of the var_vector_of_int-field on error
  // Type is: _920 ->       [vector<int32_t, std::allocator<int32_t> >] -> typeOf: Class -> parent_type Typedef
  // vector-container implementation...
  if(json.has<jsonxx::Array>("var_vector_of_int"))
  {
    jsonxx::Array var_vector_of_int_array = json.get<jsonxx::Array>("var_vector_of_int");
    for(int af = 0; af < var_vector_of_int_array.size(); af++)
    {
      int32_t var_vector_of_int_af;
      var_vector_of_int_af = (int)var_vector_of_int_array.get<jsonxx::Number>(af);
      output->var_vector_of_int.push_back(var_vector_of_int_af);
    }
  }
  // Return the negative-bitindex 4 of the var_uint08-field on error
  // Type is: _559 ->       [uint8_t] -> typeOf: Typedef -> parent_type FundamentalType
  // Line 663: Else case json_type: Number json_type_cast: (unsigned int)
  if(json.has<jsonxx::Number>("var_uint08"))
  {
    output->var_uint08 = (unsigned int)json.get<jsonxx::Number>("var_uint08");
  }
  // Return the negative-bitindex 5 of the var_uint16-field on error
  // Type is: _560 ->       [uint16_t] -> typeOf: Typedef -> parent_type FundamentalType
  // Line 663: Else case json_type: Number json_type_cast: (unsigned int)
  if(json.has<jsonxx::Number>("var_uint16"))
  {
    output->var_uint16 = (unsigned int)json.get<jsonxx::Number>("var_uint16");
  }
  // Return the negative-bitindex 6 of the var_uint32-field on error
  // Type is: _561 ->       [uint32_t] -> typeOf: Typedef -> parent_type FundamentalType
  // Line 663: Else case json_type: Number json_type_cast: (unsigned int)
  if(json.has<jsonxx::Number>("var_uint32"))
  {
    output->var_uint32 = (unsigned int)json.get<jsonxx::Number>("var_uint32");
  }
  // Return the negative-bitindex 7 of the var_uint64-field on error
  // Type is: _562 ->       [uint64_t] -> typeOf: Typedef -> parent_type FundamentalType
  // Line 663: Else case json_type: Number json_type_cast: (unsigned long)
  if(json.has<jsonxx::Number>("var_uint64"))
  {
    output->var_uint64 = (unsigned long)json.get<jsonxx::Number>("var_uint64");
  }
  // Return the negative-bitindex 8 of the vector_of_uint08-field on error
  // Type is: _921 ->       [vector<uint8_t, std::allocator<uint8_t> >] -> typeOf: Class -> parent_type Typedef
  // vector-container implementation...
  if(json.has<jsonxx::Array>("vector_of_uint08"))
  {
    jsonxx::Array vector_of_uint08_array = json.get<jsonxx::Array>("vector_of_uint08");
    for(int af = 0; af < vector_of_uint08_array.size(); af++)
    {
      uint8_t vector_of_uint08_af;
      vector_of_uint08_af = (unsigned int)vector_of_uint08_array.get<jsonxx::Number>(af);
      output->vector_of_uint08.push_back(vector_of_uint08_af);
    }
  }
  // Return the negative-bitindex 9 of the vector_of_uint16-field on error
  // Type is: _922 ->       [vector<uint16_t, std::allocator<uint16_t> >] -> typeOf: Class -> parent_type Typedef
  // vector-container implementation...
  if(json.has<jsonxx::Array>("vector_of_uint16"))
  {
    jsonxx::Array vector_of_uint16_array = json.get<jsonxx::Array>("vector_of_uint16");
    for(int af = 0; af < vector_of_uint16_array.size(); af++)
    {
      uint16_t vector_of_uint16_af;
      vector_of_uint16_af = (unsigned int)vector_of_uint16_array.get<jsonxx::Number>(af);
      output->vector_of_uint16.push_back(vector_of_uint16_af);
    }
  }
  // Return the negative-bitindex 10 of the vector_of_uint32-field on error
  // Type is: _923 ->       [vector<uint32_t, std::allocator<uint32_t> >] -> typeOf: Class -> parent_type Typedef
  // vector-container implementation...
  if(json.has<jsonxx::Array>("vector_of_uint32"))
  {
    jsonxx::Array vector_of_uint32_array = json.get<jsonxx::Array>("vector_of_uint32");
    for(int af = 0; af < vector_of_uint32_array.size(); af++)
    {
      uint32_t vector_of_uint32_af;
      vector_of_uint32_af = (unsigned int)vector_of_uint32_array.get<jsonxx::Number>(af);
      output->vector_of_uint32.push_back(vector_of_uint32_af);
    }
  }
  // Return the negative-bitindex 11 of the vector_of_uint64-field on error
  // Type is: _924 ->       [vector<uint64_t, std::allocator<uint64_t> >] -> typeOf: Class -> parent_type Typedef
  // vector-container implementation...
  if(json.has<jsonxx::Array>("vector_of_uint64"))
  {
    jsonxx::Array vector_of_uint64_array = json.get<jsonxx::Array>("vector_of_uint64");
    for(int af = 0; af < vector_of_uint64_array.size(); af++)
    {
      uint64_t vector_of_uint64_af;
      vector_of_uint64_af = (unsigned long)vector_of_uint64_array.get<jsonxx::Number>(af);
      output->vector_of_uint64.push_back(vector_of_uint64_af);
    }
  }
  // Return the negative-bitindex 12 of the list_of_uint08-field on error
  // Type is: _888 ->       [list<uint8_t, std::allocator<uint8_t> >] -> typeOf: Class -> parent_type Typedef
  // list-container implementation...
  if(json.has<jsonxx::Array>("list_of_uint08"))
  {
    jsonxx::Array list_of_uint08_array = json.get<jsonxx::Array>("list_of_uint08");
    for(int af = 0; af < list_of_uint08_array.size(); af++)
    {
      uint8_t list_of_uint08_af;
      list_of_uint08_af = (unsigned int)list_of_uint08_array.get<jsonxx::Number>(af);
      output->list_of_uint08.push_back(list_of_uint08_af);
    }
  }
  // Return the negative-bitindex 13 of the list_of_uint16-field on error
  // Type is: _889 ->       [list<uint16_t, std::allocator<uint16_t> >] -> typeOf: Class -> parent_type Typedef
  // list-container implementation...
  if(json.has<jsonxx::Array>("list_of_uint16"))
  {
    jsonxx::Array list_of_uint16_array = json.get<jsonxx::Array>("list_of_uint16");
    for(int af = 0; af < list_of_uint16_array.size(); af++)
    {
      uint16_t list_of_uint16_af;
      list_of_uint16_af = (unsigned int)list_of_uint16_array.get<jsonxx::Number>(af);
      output->list_of_uint16.push_back(list_of_uint16_af);
    }
  }
  // Return the negative-bitindex 14 of the list_of_uint32-field on error
  // Type is: _890 ->       [list<uint32_t, std::allocator<uint32_t> >] -> typeOf: Class -> parent_type Typedef
  // list-container implementation...
  if(json.has<jsonxx::Array>("list_of_uint32"))
  {
    jsonxx::Array list_of_uint32_array = json.get<jsonxx::Array>("list_of_uint32");
    for(int af = 0; af < list_of_uint32_array.size(); af++)
    {
      uint32_t list_of_uint32_af;
      list_of_uint32_af = (unsigned int)list_of_uint32_array.get<jsonxx::Number>(af);
      output->list_of_uint32.push_back(list_of_uint32_af);
    }
  }
  // Return the negative-bitindex 15 of the list_of_uint64-field on error
  // Type is: _891 ->       [list<uint64_t, std::allocator<uint64_t> >] -> typeOf: Class -> parent_type Typedef
  // list-container implementation...
  if(json.has<jsonxx::Array>("list_of_uint64"))
  {
    jsonxx::Array list_of_uint64_array = json.get<jsonxx::Array>("list_of_uint64");
    for(int af = 0; af < list_of_uint64_array.size(); af++)
    {
      uint64_t list_of_uint64_af;
      list_of_uint64_af = (unsigned long)list_of_uint64_array.get<jsonxx::Number>(af);
      output->list_of_uint64.push_back(list_of_uint64_af);
    }
  }
  // Return the negative-bitindex 16 of the var_int08-field on error
  // Type is: _555 ->       [int8_t] -> typeOf: Typedef -> parent_type FundamentalType
  // Line 663: Else case json_type: Number json_type_cast: (signed int)
  if(json.has<jsonxx::Number>("var_int08"))
  {
    output->var_int08 = (signed int)json.get<jsonxx::Number>("var_int08");
  }
  // Return the negative-bitindex 17 of the var_int16-field on error
  // Type is: _556 ->       [int16_t] -> typeOf: Typedef -> parent_type FundamentalType
  // Line 663: Else case json_type: Number json_type_cast: (signed int)
  if(json.has<jsonxx::Number>("var_int16"))
  {
    output->var_int16 = (signed int)json.get<jsonxx::Number>("var_int16");
  }
  // Return the negative-bitindex 18 of the var_int32-field on error
  // Type is: _557 ->       [int32_t] -> typeOf: Typedef -> parent_type FundamentalType
  // Line 663: Else case json_type: Number json_type_cast: (int)
  if(json.has<jsonxx::Number>("var_int32"))
  {
    output->var_int32 = (int)json.get<jsonxx::Number>("var_int32");
  }
  // Return the negative-bitindex 19 of the var_int64-field on error
  // Type is: _558 ->       [int64_t] -> typeOf: Typedef -> parent_type FundamentalType
  // Line 663: Else case json_type: Number json_type_cast: (long long)
  if(json.has<jsonxx::Number>("var_int64"))
  {
    output->var_int64 = (long long)json.get<jsonxx::Number>("var_int64");
  }
  // Return the negative-bitindex 20 of the vector_of_int8-field on error
  // Type is: _925 ->       [vector<int8_t, std::allocator<int8_t> >] -> typeOf: Class -> parent_type Typedef
  // vector-container implementation...
  if(json.has<jsonxx::Array>("vector_of_int8"))
  {
    jsonxx::Array vector_of_int8_array = json.get<jsonxx::Array>("vector_of_int8");
    for(int af = 0; af < vector_of_int8_array.size(); af++)
    {
      int8_t vector_of_int8_af;
      vector_of_int8_af = (signed int)vector_of_int8_array.get<jsonxx::Number>(af);
      output->vector_of_int8.push_back(vector_of_int8_af);
    }
  }
  // Return the negative-bitindex 21 of the vector_of_int16-field on error
  // Type is: _926 ->       [vector<int16_t, std::allocator<int16_t> >] -> typeOf: Class -> parent_type Typedef
  // vector-container implementation...
  if(json.has<jsonxx::Array>("vector_of_int16"))
  {
    jsonxx::Array vector_of_int16_array = json.get<jsonxx::Array>("vector_of_int16");
    for(int af = 0; af < vector_of_int16_array.size(); af++)
    {
      int16_t vector_of_int16_af;
      vector_of_int16_af = (signed int)vector_of_int16_array.get<jsonxx::Number>(af);
      output->vector_of_int16.push_back(vector_of_int16_af);
    }
  }
  // Return the negative-bitindex 22 of the vector_of_int32-field on error
  // Type is: _920 ->       [vector<int32_t, std::allocator<int32_t> >] -> typeOf: Class -> parent_type Typedef
  // vector-container implementation...
  if(json.has<jsonxx::Array>("vector_of_int32"))
  {
    jsonxx::Array vector_of_int32_array = json.get<jsonxx::Array>("vector_of_int32");
    for(int af = 0; af < vector_of_int32_array.size(); af++)
    {
      int32_t vector_of_int32_af;
      vector_of_int32_af = (int)vector_of_int32_array.get<jsonxx::Number>(af);
      output->vector_of_int32.push_back(vector_of_int32_af);
    }
  }
  // Return the negative-bitindex 23 of the vector_of_int64-field on error
  // Type is: _927 ->       [vector<int64_t, std::allocator<int64_t> >] -> typeOf: Class -> parent_type Typedef
  // vector-container implementation...
  if(json.has<jsonxx::Array>("vector_of_int64"))
  {
    jsonxx::Array vector_of_int64_array = json.get<jsonxx::Array>("vector_of_int64");
    for(int af = 0; af < vector_of_int64_array.size(); af++)
    {
      int64_t vector_of_int64_af;
      vector_of_int64_af = (long long)vector_of_int64_array.get<jsonxx::Number>(af);
      output->vector_of_int64.push_back(vector_of_int64_af);
    }
  }
  // Return the negative-bitindex 24 of the list_of_int8-field on error
  // Type is: _892 ->       [list<int8_t, std::allocator<int8_t> >] -> typeOf: Class -> parent_type Typedef
  // list-container implementation...
  if(json.has<jsonxx::Array>("list_of_int8"))
  {
    jsonxx::Array list_of_int8_array = json.get<jsonxx::Array>("list_of_int8");
    for(int af = 0; af < list_of_int8_array.size(); af++)
    {
      int8_t list_of_int8_af;
      list_of_int8_af = (signed int)list_of_int8_array.get<jsonxx::Number>(af);
      output->list_of_int8.push_back(list_of_int8_af);
    }
  }
  // Return the negative-bitindex 25 of the list_of_int16-field on error
  // Type is: _893 ->       [list<int16_t, std::allocator<int16_t> >] -> typeOf: Class -> parent_type Typedef
  // list-container implementation...
  if(json.has<jsonxx::Array>("list_of_int16"))
  {
    jsonxx::Array list_of_int16_array = json.get<jsonxx::Array>("list_of_int16");
    for(int af = 0; af < list_of_int16_array.size(); af++)
    {
      int16_t list_of_int16_af;
      list_of_int16_af = (signed int)list_of_int16_array.get<jsonxx::Number>(af);
      output->list_of_int16.push_back(list_of_int16_af);
    }
  }
  // Return the negative-bitindex 26 of the list_of_int32-field on error
  // Type is: _894 ->       [list<int32_t, std::allocator<int32_t> >] -> typeOf: Class -> parent_type Typedef
  // list-container implementation...
  if(json.has<jsonxx::Array>("list_of_int32"))
  {
    jsonxx::Array list_of_int32_array = json.get<jsonxx::Array>("list_of_int32");
    for(int af = 0; af < list_of_int32_array.size(); af++)
    {
      int32_t list_of_int32_af;
      list_of_int32_af = (int)list_of_int32_array.get<jsonxx::Number>(af);
      output->list_of_int32.push_back(list_of_int32_af);
    }
  }
  // Return the negative-bitindex 27 of the list_of_int64-field on error
  // Type is: _895 ->       [list<int64_t, std::allocator<int64_t> >] -> typeOf: Class -> parent_type Typedef
  // list-container implementation...
  if(json.has<jsonxx::Array>("list_of_int64"))
  {
    jsonxx::Array list_of_int64_array = json.get<jsonxx::Array>("list_of_int64");
    for(int af = 0; af < list_of_int64_array.size(); af++)
    {
      int64_t list_of_int64_af;
      list_of_int64_af = (long long)list_of_int64_array.get<jsonxx::Number>(af);
      output->list_of_int64.push_back(list_of_int64_af);
    }
  }
  // Return the negative-bitindex 28 of the var_string-field on error
  // Type is: _849 ->       [string] -> typeOf: Typedef -> parent_type Class
  // Line 663: Else case json_type: String json_type_cast: (std::string)
  if(json.has<jsonxx::String>("var_string"))
  {
    output->var_string = (std::string)json.get<jsonxx::String>("var_string");
  }
  // Return the negative-bitindex 29 of the var_float-field on error
  // Type is: _1787 ->      [float] -> typeOf: FundamentalType -> parent_type unknown
  // Line 663: Else case json_type: Number json_type_cast: (float)
  if(json.has<jsonxx::Number>("var_float"))
  {
    output->var_float = (float)json.get<jsonxx::Number>("var_float");
  }
  // Return the negative-bitindex 30 of the var_double-field on error
  // Type is: _1786 ->      [double] -> typeOf: FundamentalType -> parent_type unknown
  // Line 663: Else case json_type: Number json_type_cast: (double)
  if(json.has<jsonxx::Number>("var_double"))
  {
    output->var_double = (double)json.get<jsonxx::Number>("var_double");
  }
  // Return the negative-bitindex 31 of the var_long-field on error
  // Type is: _1789 ->      [long int] -> typeOf: FundamentalType -> parent_type unknown
  // Line 663: Else case json_type: Number json_type_cast: (long long)
  if(json.has<jsonxx::Number>("var_long"))
  {
    output->var_long = (long long)json.get<jsonxx::Number>("var_long");
  }
  // Return the negative-bitindex 32 of the var_in_addr-field on error
  // Type is: _682 ->       [in_addr] -> typeOf: Struct -> parent_type unknown
  if(json.has<jsonxx::String>("var_in_addr"))
  {
    std::string var_in_addr_str = json.get<jsonxx::String>("var_in_addr");
    int cc = inet_pton(AF_INET, var_in_addr_str.c_str(), &output->var_in_addr);
    if(cc == 0) // Error
      return -32;
  }
  // Return the negative-bitindex 33 of the vector_of_in_addr-field on error
  // Type is: _928 ->       [vector<in_addr, std::allocator<in_addr> >] -> typeOf: Class -> parent_type Struct
  // vector-container implementation...
  if(json.has<jsonxx::Array>("vector_of_in_addr"))
  {
    jsonxx::Array vector_of_in_addr_array = json.get<jsonxx::Array>("vector_of_in_addr");
    for(int af = 0; af < vector_of_in_addr_array.size(); af++)
    {
      in_addr vector_of_in_addr_af;
      std::string vector_of_in_addr_str = vector_of_in_addr_array.get<jsonxx::String>(af);
      int cc = inet_pton(AF_INET, vector_of_in_addr_str.c_str(), &vector_of_in_addr_af);
      if(cc == 0) // Error
      {
        return -33;
      }
      output->vector_of_in_addr.push_back(vector_of_in_addr_af);
    }
  }
  // Return the negative-bitindex 34 of the list_of_in_addr-field on error
  // Type is: _896 ->       [list<in_addr, std::allocator<in_addr> >] -> typeOf: Class -> parent_type Struct
  // list-container implementation...
  if(json.has<jsonxx::Array>("list_of_in_addr"))
  {
    jsonxx::Array list_of_in_addr_array = json.get<jsonxx::Array>("list_of_in_addr");
    for(int af = 0; af < list_of_in_addr_array.size(); af++)
    {
      in_addr list_of_in_addr_af;
      std::string list_of_in_addr_str = list_of_in_addr_array.get<jsonxx::String>(af);
      int cc = inet_pton(AF_INET, list_of_in_addr_str.c_str(), &list_of_in_addr_af);
      if(cc == 0) // Error
      {
        return -34;
      }
      output->list_of_in_addr.push_back(list_of_in_addr_af);
    }
  }
  // Return the negative-bitindex 35 of the vc-field on error
  // Type is: _929 ->       [vector<float, std::allocator<float> >] -> typeOf: Class -> parent_type FundamentalType
  // vector-container implementation...
  if(json.has<jsonxx::Array>("vc"))
  {
    jsonxx::Array vc_array = json.get<jsonxx::Array>("vc");
    for(int af = 0; af < vc_array.size(); af++)
    {
      float vc_af;
      vc_af = (float)vc_array.get<jsonxx::Number>(af);
      output->vc.push_back(vc_af);
    }
  }
  return 0;
}
#endif // ___cplusplus


#endif // __IMPLEMENTATION_SIMPLE_H__
