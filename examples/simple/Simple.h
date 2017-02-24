#ifndef SIMPLE_STRUCT
#define SIMPLE_STRUCT

#include <vector>
#include <list>
#include <set>
#include <map>
#include <string>
#include <stdint.h>
#include <arpa/inet.h>

std::string toString(const struct in_addr data);
std::ostream & operator<<(std::ostream & out, const struct in_addr data);
bool operator<(struct in_addr lhs, struct in_addr rhs);
bool operator<=(struct in_addr lhs, struct in_addr rhs);
bool operator>(struct in_addr lhs, struct in_addr rhs);
bool operator>=(struct in_addr lhs, struct in_addr rhs);
bool operator==(struct in_addr lhs, struct in_addr rhs);
bool operator!=(struct in_addr lhs, struct in_addr rhs);


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


//typedef std::vector<AddDrop> TAddDropList;

typedef struct Simple {
  Simple():
    is_on(false),
    var_uint08(0x00),var_uint16(0x00),var_uint32(0x00),var_uint64(0x00),
    var_int08(0x00),var_int16(0x00),var_int32(0x00),var_int64(0x00),
    var_string("TestString"),var_float(3.14f),var_double(2.2),var_long(0)
    { var_in_addr.s_addr = 0; }

  bool is_on;
  std::vector<bool> var_vector_of_bool;                  // _884

  std::vector<int> var_vector_of_int;                  // _884

  uint8_t  var_uint08;
  uint16_t var_uint16;
  uint32_t var_uint32;
  uint64_t var_uint64;

  std::vector<uint8_t>  vector_of_uint08;  // _885 unsigned char
  std::vector<uint16_t> vector_of_uint16;  // _886 unsigned short
  std::vector<uint32_t> vector_of_uint32;  // _887 unsigned int
  std::vector<uint64_t> vector_of_uint64;  // _888 unsigned long

  std::list<uint8_t>  list_of_uint08;  // _885 unsigned char
  std::list<uint16_t> list_of_uint16;  // _886 unsigned short
  std::list<uint32_t> list_of_uint32;  // _887 unsigned int
  std::list<uint64_t> list_of_uint64;  // _888 unsigned long


  int8_t   var_int08;
  int16_t  var_int16;
  int32_t  var_int32;
  int64_t  var_int64;

  std::vector<int8_t>  vector_of_int8;     // _889 signed char
  std::vector<int16_t> vector_of_int16;    // _890 short
  std::vector<int32_t> vector_of_int32;    // _884 int
  std::vector<int64_t> vector_of_int64;    // _891 long

  std::list<int8_t>  list_of_int8;     // _889 signed char
  std::list<int16_t> list_of_int16;    // _890 short
  std::list<int32_t> list_of_int32;    // _884 int
  std::list<int64_t> list_of_int64;    // _891 long

  std::string var_string;
  //char* var_char;
  float var_float;
  double var_double;
  long var_long;


  struct in_addr var_in_addr;
  std::vector<struct in_addr> vector_of_in_addr;
  std::list<struct in_addr> list_of_in_addr;



  //td::vector<char*> vb;                // as-is
  std::vector<float> vc;                // as-is
  //std::vector<long int> vd;             // _891 long

  //std::list<int> la;                    // int32_t
  //std::list<char*> lb;                  // as-is
  //std::list<float> lc;                  // as-is
  //std::list<long int> ld;               // int32_t

  std::map<uint8_t,std::string> map_uint8_t_string_map;
  std::map<uint8_t,AddDrop>     map_uint8_t_add_drop_map;

  //std::map<std::string,TAddDropList> map_string_tadd_drop_map;

  // Do strings,vectors and lists of strings....
  std::vector<std::string> vector_of_string;
  std::list<std::string>   list_of_string;


  std::vector<AddDropType> vector_of_enum_adddrop_type;
  std::list<AddDropType> list_of_enum_adddrop_type;
  std::set<AddDropType> set_of_enum_adddrop_type;

} Simple;


//=============================================================
// OSPF
//=============================================================
typedef struct SOspfInterface {
    struct in_addr localIp;                    //!< Ip address
    struct in_addr netmask;                    //!< Network mask
    struct in_addr area;                       //!< Area
    uint16_t cost;                             //!< Cost
    uint8_t priority;                          //!< Priority
    //OspfInterfaceState state;                  //!< State
    uint16_t helloInterval;                    //!< Hello Interval
    uint16_t deadInterval;                     //!< Dead Interval
    uint16_t mtu;                              //!< MTU
    //OspfInterfaceSubnetType subnetType;        //!< Type of subnetwork

    //Constructor / Destructor
    SOspfInterface() {
        localIp.s_addr = 0;
        netmask.s_addr = 0;
        area.s_addr = 0;
        cost = 0;
        priority = 0;
        //state = OSPF_INTERFACE_STATE_DOWN;
        helloInterval = 0;
        deadInterval = 0;
        mtu = 0;
        //subnetType = OSPF_INTERFACE_SUBNET_TYPE_BROADCAST;
    }
    //~SOspfInterface() {}
} OspfInterface;


typedef struct SOspfNeighbor {
    struct in_addr routerId;               //!< Neighbor's Router ID
    struct in_addr ipAddress;              //!< Neighbor's IP address
    //OspfNeighborState state;               //!< Current neighbor relationship state
    struct in_addr designatedRouter;       //!< Current designated router selected by the neighbor
    struct in_addr backupDesignatedRouter; //!< Current backup designated router selected by the neighbor

    //Constructor / Destructor
    SOspfNeighbor() {
        routerId.s_addr = 0;
        ipAddress.s_addr = 0;
        //state = OSPF_NEIGHBOR_STATE_DOWN;
        designatedRouter.s_addr = 0;
        backupDesignatedRouter.s_addr = 0;
    }
    //~SNeighbor() {}
} OspfNeighbor;

typedef struct SOspf {
    struct in_addr routerId;                //!< router identifier <key>
    bool enabled;                           //!< enabled?
    std::vector<struct in_addr> areas;      //!< areas
    std::vector<OspfInterface> interfaces;  //!< interfaces

    //Constructor / Destructor
    SOspf() {
        routerId.s_addr = 0;
        enabled = false;
    }
    //~Ospf() {}
} Ospf;


#endif /* SIMPLE_STRUCT */
