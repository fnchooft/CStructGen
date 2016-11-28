#ifndef __IMPLEMENTATION_PAIR_HPP__
#define __IMPLEMENTATION_PAIR_HPP__


#ifdef __cplusplus


#include "Pair.generated.h"
#include <stdio.h>
#include <string.h>
#include "jsonxx.h"

// Generated default printers for struct: SPairSecond
std::ostream & operator<<(std::ostream & out, const SPairSecond & spairsecond) {
    out << "pairtype:"   << " "       << spairsecond.pairtype          << ", ";
    out << "astring:"    << " "       << spairsecond.astring           << "";
  return out;
}


std::string toString(const SPairSecond & spairsecond) {
    std::stringstream out;
    std::string ret = "";
    out << spairsecond;
    ret = out.str();
    return ret;
}


// struct: SPairSecond compare-functions due to union existance...
// Found Struct->settings.... 0
// Generated default compare implementation for struct: SPairSecond
bool operator<(SPairSecond lhs, SPairSecond rhs) {
    // Type of field _1055     / pairtype            resolved_type: FundamentalType
    if (lhs.pairtype   < rhs.pairtype)   return true;
    if (lhs.pairtype   > rhs.pairtype)   return false;
    // Type of field _844      / astring             resolved_type: Typedef
    if (lhs.astring    < rhs.astring)    return true;
    if (lhs.astring    > rhs.astring)    return false;
    return false;
}
bool operator<=(SPairSecond lhs, SPairSecond rhs) {
    if ((lhs < rhs) || (lhs == rhs)){
        return true;
    } else {
        return false;
    }
}
bool operator>(SPairSecond lhs, SPairSecond rhs) {
    return !(lhs <= rhs);
}
bool operator>=(SPairSecond lhs, SPairSecond rhs) {
    return !(lhs < rhs);
}
bool operator==(SPairSecond lhs, SPairSecond rhs){
    if (lhs.pairtype   != rhs.pairtype)   return false;
    if (lhs.astring    != rhs.astring)    return false;
    return true;
}
bool operator!=(SPairSecond lhs, SPairSecond rhs) {
    return !(lhs == rhs);
}


// Generated toJsonString / fromJsonString implementation for struct: SPairSecond
std::string toJsonString(SPairSecond *input) {
  jsonxx::Object jsono;
  // FundamentalType      name: [int]                          json_type: Number                            json_type_cast: (int)
  // In the else branch....
  // render_fundamental_to_json: scope:pairtype      object_name: FundamentalType         json_type:number                      comment: Number
  jsono              << "pairtype"                 << (int)input->pairtype;
  // Typedef              name: [string]                       json_type: String                            json_type_cast: (std::string)
  // In the else branch....
  // render_fundamental_to_json: scope:astring       object_name: Typedef                 json_type:string                      comment: String
  jsono              << "astring"                  << (std::string)input->astring;
  return jsono.json();
}


int32_t fromJson(SPairSecond *output, std::string jsondata) {
  jsonxx::Object json;
  if(!json.parse(jsondata))
  {
    return -2048;
  }
  // Return the negative-bitindex 1 of the pairtype-field on error
  // Type is: _1055 ->      [int] -> typeOf: FundamentalType -> parent_type unknown
  // Line 663: Else case json_type: Number json_type_cast: (int)
  if(json.has<jsonxx::Number>("pairtype"))
  {
    output->pairtype = (int)json.get<jsonxx::Number>("pairtype");
  }
  // Return the negative-bitindex 2 of the astring-field on error
  // Type is: _844 ->       [string] -> typeOf: Typedef -> parent_type Class
  // Line 663: Else case json_type: String json_type_cast: (std::string)
  if(json.has<jsonxx::String>("astring"))
  {
    output->astring = (std::string)json.get<jsonxx::String>("astring");
  }
  return 0;
}

// Generated default printers for struct: SPair
std::ostream & operator<<(std::ostream & out, const SPair & spair) {
    out << "an_int:"     << " "       << spair.an_int                  << ", ";
    out << "apair:"      << " first[" << spair.apair.first                   << "] ";
    out                  << " second[" << spair.apair.second                   << "]";
    out << "";
  return out;
}


std::string toString(const SPair & spair) {
    std::stringstream out;
    std::string ret = "";
    out << spair;
    ret = out.str();
    return ret;
}


// struct: SPair compare-functions due to union existance...
// Found Struct->settings.... 0
// Generated default compare implementation for struct: SPair
bool operator<(SPair lhs, SPair rhs) {
    // Type of field _1055     / an_int              resolved_type: FundamentalType
    if (lhs.an_int     < rhs.an_int)     return true;
    if (lhs.an_int     > rhs.an_int)     return false;
    // Type of field _942      / apair               resolved_type: Struct
    if (lhs.apair      < rhs.apair)      return true;
    if (lhs.apair      > rhs.apair)      return false;
    return false;
}
bool operator<=(SPair lhs, SPair rhs) {
    if ((lhs < rhs) || (lhs == rhs)){
        return true;
    } else {
        return false;
    }
}
bool operator>(SPair lhs, SPair rhs) {
    return !(lhs <= rhs);
}
bool operator>=(SPair lhs, SPair rhs) {
    return !(lhs < rhs);
}
bool operator==(SPair lhs, SPair rhs){
    if (lhs.an_int     != rhs.an_int)     return false;
    if (lhs.apair      != rhs.apair)      return false;
    return true;
}
bool operator!=(SPair lhs, SPair rhs) {
    return !(lhs == rhs);
}


// Generated toJsonString / fromJsonString implementation for struct: SPair
std::string toJsonString(SPair *input) {
  jsonxx::Object jsono;
  // FundamentalType      name: [int]                          json_type: Number                            json_type_cast: (int)
  // In the else branch....
  // render_fundamental_to_json: scope:an_int        object_name: FundamentalType         json_type:number                      comment: Number
  jsono              << "an_int"                   << (int)input->an_int;
  // Struct               name: [pair<bool, SPairSecond>]      json_type: Object                            json_type_cast: not-set
  // Pair handling Field->Struct->Field.first && Field.second
  jsonxx::Object apair_pair_object;
  // render_fundamental_to_json: scope:apair         object_name: FundamentalType         json_type:boolean                     comment: Boolean
  apair_pair_object  << "first"                    << (bool)input->apair.first;
  // render_fundamental_to_json: scope:apair         object_name: Struct                  json_type:object                      comment: Object
  jsonxx::Object apair_second_object;
  if(apair_second_object.parse(toJsonString(&input->apair.second))                            != 1)
    return "BROKEN second_object";                   // rftj:Object
  apair_pair_object  << "second"                   << apair_second_object;
  jsono << "apair"      << apair_pair_object;
  return jsono.json();
}


int32_t fromJson(SPair *output, std::string jsondata) {
  jsonxx::Object json;
  if(!json.parse(jsondata))
  {
    return -2048;
  }
  // Return the negative-bitindex 1 of the an_int-field on error
  // Type is: _1055 ->      [int] -> typeOf: FundamentalType -> parent_type unknown
  // Line 663: Else case json_type: Number json_type_cast: (int)
  if(json.has<jsonxx::Number>("an_int"))
  {
    output->an_int = (int)json.get<jsonxx::Number>("an_int");
  }
  // Return the negative-bitindex 2 of the apair-field on error
  // Type is: _942 ->       [pair<bool, SPairSecond>] -> typeOf: Struct -> parent_type unknown
  // Pair-implementation deserializes into an Object.
  if(json.has<jsonxx::Object>("apair"))
  {
    jsonxx::Object apair_object = json.get<jsonxx::Object>("apair");

    // First  is of type bool                 FundamentalType       json_type: Boolean
    // Second is of type SPairSecond Struct json_type: Object
    bool apair_first = apair_object.get<jsonxx::Boolean>("first");
    SPairSecond apair_second;
    if(fromJson(&apair_second, apair_object.get<jsonxx::Object>("second").json()) != 0)
    {
      return -2;
    }
    output->apair = std::make_pair(apair_first,apair_second);
  }
  return 0;
}

// Generated default printers for struct: SMapTest
std::ostream & operator<<(std::ostream & out, const SMapTest & smaptest) {
    out << "amap:"       << " "       << smaptest.amap                 << "";
  return out;
}


std::string toString(const SMapTest & smaptest) {
    std::stringstream out;
    std::string ret = "";
    out << smaptest;
    ret = out.str();
    return ret;
}


// struct: SMapTest compare-functions due to union existance...
// Found Struct->settings.... 0
// Generated default compare implementation for struct: SMapTest
bool operator<(SMapTest lhs, SMapTest rhs) {
    // Type of field _846      / amap                resolved_type: Class
    if (lhs.amap       < rhs.amap)       return true;
    if (lhs.amap       > rhs.amap)       return false;
    return false;
}
bool operator<=(SMapTest lhs, SMapTest rhs) {
    if ((lhs < rhs) || (lhs == rhs)){
        return true;
    } else {
        return false;
    }
}
bool operator>(SMapTest lhs, SMapTest rhs) {
    return !(lhs <= rhs);
}
bool operator>=(SMapTest lhs, SMapTest rhs) {
    return !(lhs < rhs);
}
bool operator==(SMapTest lhs, SMapTest rhs){
    if (lhs.amap       != rhs.amap)       return false;
    return true;
}
bool operator!=(SMapTest lhs, SMapTest rhs) {
    return !(lhs == rhs);
}


// Generated toJsonString / fromJsonString implementation for struct: SMapTest
std::string toJsonString(SMapTest *input) {
  jsonxx::Object jsono;
  // Class                name: [map<bool, SPairSecond, std::less<bool>, std::allocator<std::pair<const bool, SPairSecond> > >] json_type: not-set json_type_cast: not-set
  jsonxx::Array jsonm_amap;
  // Map implementation key  : bool
  // Map implementation value: SPairSecond
  for (std::map<bool, SPairSecond >::iterator it=input->amap.begin();  it != input->amap.end();       ++it)
  {
    jsonxx::Object jsonm_amap_entry;
  // render_fundamental_to_json: scope:MapKey        object_name: FundamentalType         json_type:boolean                     comment: Boolean
    jsonm_amap_entry << "key" << (bool)(bool*)&it->first;
  // render_fundamental_to_json: scope:MapVal        object_name: Struct                  json_type:object                      comment: Object
  jsonxx::Object MapVal_amap_object;
  if(MapVal_amap_object.parse(toJsonString(&it->second))                                      != 1)
    return "BROKEN amap_object";                     // rftj:Object
    jsonm_amap_entry << "val" << MapVal_amap_object;
    jsonm_amap       << jsonm_amap_entry;
  }
  jsono << "amap"       << jsonm_amap;
  return jsono.json();
}


int32_t fromJson(SMapTest *output, std::string jsondata) {
  jsonxx::Object json;
  if(!json.parse(jsondata))
  {
    return -2048;
  }
  // Return the negative-bitindex 1 of the amap-field on error
  // Type is: _846 ->       [map<bool, SPairSecond, std::less<bool>, std::allocator<std::pair<const bool, SPairSecond> > >] -> typeOf: Class -> parent_type unknown
  // Map-implementation deserializes from Array with Object key- and val-attributes.
  if(json.has<jsonxx::Array>("amap"))
  {
    jsonxx::Array amap_map_array = json.get<jsonxx::Array>("amap");
    for(int af = 0; af < amap_map_array.size(); af++)
    {
      jsonxx::Object amap_map_array_entry = amap_map_array.get<jsonxx::Object>(af);
      bool map_key;
      SPairSecond map_val;
      if(amap_map_array_entry.has<jsonxx::Boolean>("key"))
      {
        map_key = amap_map_array_entry.get<jsonxx::Boolean>("key");
      }
      if(amap_map_array_entry.has<jsonxx::Object>("val"))
      {
        if(fromJson(&map_val, amap_map_array_entry.get<jsonxx::Object>("val").json()) != 0)
        {
          return -1;
        }
      }
      output->amap[map_key] = map_val;
    }
  }
  return 0;
}
#endif // ___cplusplus


#endif // __IMPLEMENTATION_PAIR_HPP__
