#ifndef __IMPLEMENTATION_SIMPLE_H__
#define __IMPLEMENTATION_SIMPLE_H__
#include "Simple.generated.h"
#include <stdio.h>
#include <string.h>
#include "jsonxx.h"


// Generated default printers for struct: Simple
std::ostream & operator<<(std::ostream & out, const Simple & simple) {
    out << "a:"          << " "       << simple.a                      << ", ";
    out << "uint8:"      << " "       << simple.uint8                  << ", ";
    out << "string_attribute:" << " " << simple.string_attribute       << ", ";
    out << "b:"          << " "       << simple.b                      << ", ";
    out << "c:"          << " "       << simple.c                      << ", ";
    out << "d:"          << " "       << simple.d                      << ", ";
    out << "va:"         << " "       << simple.va                     << ", ";
    out << "vb:"         << " "       << simple.vb                     << ", ";
    out << "vc:"         << " "       << simple.vc                     << ", ";
    out << "vd:"         << " "       << simple.vd                     << ", ";
    out << "la:"         << " "       << simple.la                     << ", ";
    out << "lb:"         << " "       << simple.lb                     << ", ";
    out << "lc:"         << " "       << simple.lc                     << ", ";
    out << "ld:"         << " "       << simple.ld                     << "";
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
    // Type of field _1301     / a                   resolved_type: FundamentalType
    if (lhs.a          < rhs.a)          return true;
    if (lhs.a          > rhs.a)          return false;
    // Type of field _559      / uint8               resolved_type: Typedef
    if (lhs.uint8      < rhs.uint8)      return true;
    if (lhs.uint8      > rhs.uint8)      return false;
    // Type of field _839      / string_attribute    resolved_type: Typedef
    if (lhs.string_attribute < rhs.string_attribute) return true;
    if (lhs.string_attribute > rhs.string_attribute) return false;
    // Type of field _751      / b                   resolved_type: PointerType
    // Char / String compare....
    int b_compare          = strcmp(lhs.b,rhs.b);
    if (b_compare          < 0) return true;
    if (b_compare          > 0) return false;
    // Type of field _1348     / c                   resolved_type: FundamentalType
    if (lhs.c          < rhs.c)          return true;
    if (lhs.c          > rhs.c)          return false;
    // Type of field _1350     / d                   resolved_type: FundamentalType
    if (lhs.d          < rhs.d)          return true;
    if (lhs.d          > rhs.d)          return false;
    // Type of field _877      / va                  resolved_type: Class
    if (lhs.va         < rhs.va)         return true;
    if (lhs.va         > rhs.va)         return false;
    // Type of field _878      / vb                  resolved_type: Class
    if (lhs.vb         < rhs.vb)         return true;
    if (lhs.vb         > rhs.vb)         return false;
    // Type of field _879      / vc                  resolved_type: Class
    if (lhs.vc         < rhs.vc)         return true;
    if (lhs.vc         > rhs.vc)         return false;
    // Type of field _880      / vd                  resolved_type: Class
    if (lhs.vd         < rhs.vd)         return true;
    if (lhs.vd         > rhs.vd)         return false;
    // Type of field _858      / la                  resolved_type: Class
    if (lhs.la         < rhs.la)         return true;
    if (lhs.la         > rhs.la)         return false;
    // Type of field _859      / lb                  resolved_type: Class
    if (lhs.lb         < rhs.lb)         return true;
    if (lhs.lb         > rhs.lb)         return false;
    // Type of field _860      / lc                  resolved_type: Class
    if (lhs.lc         < rhs.lc)         return true;
    if (lhs.lc         > rhs.lc)         return false;
    // Type of field _861      / ld                  resolved_type: Class
    if (lhs.ld         < rhs.ld)         return true;
    if (lhs.ld         > rhs.ld)         return false;
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
    if (lhs.a          != rhs.a)          return false;
    if (lhs.uint8      != rhs.uint8)      return false;
    if (lhs.string_attribute != rhs.string_attribute) return false;
    if (lhs.b          == NULL && rhs.b          != NULL) return false;
    if (lhs.b          != NULL && rhs.b          == NULL) return false;
    if (strcmp(lhs.b,lhs.b)                   != 0) return false;
    if (lhs.c          != rhs.c)          return false;
    if (lhs.d          != rhs.d)          return false;
    if (lhs.va         != rhs.va)         return false;
    if (lhs.vb         != rhs.vb)         return false;
    if (lhs.vc         != rhs.vc)         return false;
    if (lhs.vd         != rhs.vd)         return false;
    if (lhs.la         != rhs.la)         return false;
    if (lhs.lb         != rhs.lb)         return false;
    if (lhs.lc         != rhs.lc)         return false;
    if (lhs.ld         != rhs.ld)         return false;
    return true;
}
bool operator!=(Simple lhs, Simple rhs) {
    return !(lhs == rhs);
}


// Generated toJsonString / fromJsonString implementation for struct: Simple
std::string toJsonString(Simple *input) {
  jsonxx::Object jsono;
  // FundamentalType      name: [int]
  jsono << "a"          << (int)input->a;
  // Typedef              name: [uint8_t]
  jsono << "uint8"      << (int)input->uint8;
  // Typedef              name: [string]
  jsono << "string_attribute" << input->string_attribute;
  // PointerType          name: [no-name]
  if(input->b          != NULL)
    jsono << "b"          << (std::string)input->b;
  else
    jsono << "b"          << jsonxx::Null();
  // FundamentalType      name: [float]
  jsono << "c"          << (float)input->c;
  // FundamentalType      name: [long int]
  jsono << "d"          << (long)input->d;
  // Class                name: [vector<int, std::allocator<int> >]
  jsonxx::Array jsona_va;           
  for (std::vector<int>::const_iterator it=input->va.begin();     it != input->va.end();         ++it)
  {
    jsona_va         << *it;
  }
  jsono << "va"         << jsona_va;

  // Class                name: [vector<char *, std::allocator<char *> >]
  jsonxx::Array jsona_vb;           
  for (std::vector<char *>::const_iterator it=input->vb.begin();  it != input->vb.end();         ++it)
  {
    jsona_vb         << (std::string)*it;
  }
  jsono << "vb"         << jsona_vb;

  // Class                name: [vector<float, std::allocator<float> >]
  jsonxx::Array jsona_vc;           
  for (std::vector<float>::const_iterator it=input->vc.begin();   it != input->vc.end();         ++it)
  {
    jsona_vc         << *it;
  }
  jsono << "vc"         << jsona_vc;

  // Class                name: [vector<long, std::allocator<long> >]
  jsonxx::Array jsona_vd;           
  for (std::vector<long>::const_iterator it=input->vd.begin();    it != input->vd.end();         ++it)
  {
    jsona_vd         << *it;
  }
  jsono << "vd"         << jsona_vd;

  // Class                name: [list<int, std::allocator<int> >]
  jsonxx::Array jsona_la;           
  for (std::list<int>::const_iterator it=input->la.begin();       it != input->la.end();         ++it)
  {
    jsona_la         << *it;
  }
  jsono << "la"         << jsona_la;

  // Class                name: [list<char *, std::allocator<char *> >]
  jsonxx::Array jsona_lb;           
  for (std::list<char *>::const_iterator it=input->lb.begin();    it != input->lb.end();         ++it)
  {
    jsona_lb         << (std::string)*it;
  }
  jsono << "lb"         << jsona_lb;

  // Class                name: [list<float, std::allocator<float> >]
  jsonxx::Array jsona_lc;           
  for (std::list<float>::const_iterator it=input->lc.begin();     it != input->lc.end();         ++it)
  {
    jsona_lc         << *it;
  }
  jsono << "lc"         << jsona_lc;

  // Class                name: [list<long, std::allocator<long> >]
  jsonxx::Array jsona_ld;           
  for (std::list<long>::const_iterator it=input->ld.begin();      it != input->ld.end();         ++it)
  {
    jsona_ld         << *it;
  }
  jsono << "ld"         << jsona_ld;

  return jsono.json();
}


int32_t fromJson(Simple *output, std::string jsondata) {
  jsonxx::Object json;
  if(!json.parse(jsondata))
  {
    return -2048;
  }
  // Return the negative-bitindex 1 of the a-field on error
  // Type is: _1301 ->      [int] -> typeOf: FundamentalType -> parent_type unknown
  if(json.has<jsonxx::Number>("a"))
  {
    output->a = (int)json.get<jsonxx::Number>("a");
  }
  // Return the negative-bitindex 2 of the uint8-field on error
  // Type is: _559 ->       [uint8_t] -> typeOf: Typedef -> parent_type FundamentalType
  if(json.has<jsonxx::Number>("uint8"))
  {
    output->uint8 = (int)json.get<jsonxx::Number>("uint8");
    //return -2;
  }
  // Return the negative-bitindex 3 of the string_attribute-field on error
  // Type is: _839 ->       [string] -> typeOf: Typedef -> parent_type Class
  if(json.has<jsonxx::String>("string_attribute"))
  {
    output->string_attribute = json.get<jsonxx::String>("string_attribute");
    //return -3;
  }
  // Return the negative-bitindex 4 of the b-field on error
  // Type is: _751 ->       [oopsie] -> typeOf: PointerType -> parent_type unknown
  if(json.has<jsonxx::String>("b"))
  {
    output->b = strdup(json.get<jsonxx::String>("b").c_str());
  }
  // Return the negative-bitindex 5 of the c-field on error
  // Type is: _1348 ->      [float] -> typeOf: FundamentalType -> parent_type unknown
  if(json.has<jsonxx::Number>("c"))
  {
    output->c = (float)json.get<jsonxx::Number>("c");
  }
  // Return the negative-bitindex 6 of the d-field on error
  // Type is: _1350 ->      [long int] -> typeOf: FundamentalType -> parent_type unknown
  if(json.has<jsonxx::Number>("d"))
  {
    output->d = (long)json.get<jsonxx::Number>("d");
  }
  // Return the negative-bitindex 7 of the va-field on error
  // Type is: _877 ->       [vector<int, std::allocator<int> >] -> typeOf: Class -> parent_type unknown
  // vector-container implementation...
  if(json.has<jsonxx::Array>("va"))
  {
    jsonxx::Array va_array = json.get<jsonxx::Array>("va");
    for(int af = 0; af < va_array.size(); af++)
    {
      int va_af = va_array.get<jsonxx::Number>(af);
      output->va.push_back(va_af);
    }
  }
  // Return the negative-bitindex 8 of the vb-field on error
  // Type is: _878 ->       [vector<char *, std::allocator<char *> >] -> typeOf: Class -> parent_type unknown
  // vector-container implementation...
  if(json.has<jsonxx::Array>("vb"))
  {
    jsonxx::Array vb_array = json.get<jsonxx::Array>("vb");
    for(int af = 0; af < vb_array.size(); af++)
    {
      char * vb_af = strdup(vb_array.get<jsonxx::String>(af).c_str());
      output->vb.push_back(vb_af);
    }
  }
  // Return the negative-bitindex 9 of the vc-field on error
  // Type is: _879 ->       [vector<float, std::allocator<float> >] -> typeOf: Class -> parent_type unknown
  // vector-container implementation...
  if(json.has<jsonxx::Array>("vc"))
  {
    jsonxx::Array vc_array = json.get<jsonxx::Array>("vc");
    for(int af = 0; af < vc_array.size(); af++)
    {
      float vc_af = vc_array.get<jsonxx::Number>(af);
      output->vc.push_back(vc_af);
    }
  }
  // Return the negative-bitindex 10 of the vd-field on error
  // Type is: _880 ->       [vector<long, std::allocator<long> >] -> typeOf: Class -> parent_type unknown
  // vector-container implementation...
  if(json.has<jsonxx::Array>("vd"))
  {
    jsonxx::Array vd_array = json.get<jsonxx::Array>("vd");
    for(int af = 0; af < vd_array.size(); af++)
    {
      long vd_af = vd_array.get<jsonxx::Number>(af);
      output->vd.push_back(vd_af);
    }
  }
  // Return the negative-bitindex 11 of the la-field on error
  // Type is: _858 ->       [list<int, std::allocator<int> >] -> typeOf: Class -> parent_type unknown
  // list-container implementation...
  if(json.has<jsonxx::Array>("la"))
  {
    jsonxx::Array la_array = json.get<jsonxx::Array>("la");
    for(int af = 0; af < la_array.size(); af++)
    {
      int la_af = la_array.get<jsonxx::Number>(af);
      output->la.push_back(la_af);
    }
  }
  // Return the negative-bitindex 12 of the lb-field on error
  // Type is: _859 ->       [list<char *, std::allocator<char *> >] -> typeOf: Class -> parent_type unknown
  // list-container implementation...
  if(json.has<jsonxx::Array>("lb"))
  {
    jsonxx::Array lb_array = json.get<jsonxx::Array>("lb");
    for(int af = 0; af < lb_array.size(); af++)
    {
      char * lb_af = strdup(lb_array.get<jsonxx::String>(af).c_str());
      output->lb.push_back(lb_af);
    }
  }
  // Return the negative-bitindex 13 of the lc-field on error
  // Type is: _860 ->       [list<float, std::allocator<float> >] -> typeOf: Class -> parent_type unknown
  // list-container implementation...
  if(json.has<jsonxx::Array>("lc"))
  {
    jsonxx::Array lc_array = json.get<jsonxx::Array>("lc");
    for(int af = 0; af < lc_array.size(); af++)
    {
      float lc_af = lc_array.get<jsonxx::Number>(af);
      output->lc.push_back(lc_af);
    }
  }
  // Return the negative-bitindex 14 of the ld-field on error
  // Type is: _861 ->       [list<long, std::allocator<long> >] -> typeOf: Class -> parent_type unknown
  // list-container implementation...
  if(json.has<jsonxx::Array>("ld"))
  {
    jsonxx::Array ld_array = json.get<jsonxx::Array>("ld");
    for(int af = 0; af < ld_array.size(); af++)
    {
      long ld_af = ld_array.get<jsonxx::Number>(af);
      output->ld.push_back(ld_af);
    }
  }
  return 0;
}

#endif // __IMPLEMENTATION_SIMPLE_H__
