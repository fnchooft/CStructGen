#include "Simple.h"

std::string toString(const struct in_addr data)  {
    std::string ret = "";
    char str[INET_ADDRSTRLEN];
    inet_ntop(AF_INET, &data, str, INET_ADDRSTRLEN);
    return std::string(str);
}


bool fromString(std::string str, struct in_addr *ip)
{
  // store this IP address in sa:
  int retval = inet_pton(AF_INET, str.c_str(), ip);
  return (retval == 0);
}


std::ostream & operator<<(std::ostream & out, const struct in_addr data) {
    out << toString(data);
    return out;
}




bool operator<(struct in_addr lhs, struct in_addr rhs) {
    if (lhs.s_addr < rhs.s_addr) {
        return true;
    } else if (lhs.s_addr > rhs.s_addr) {
        return false;
    }

    // They are equal
    return false;
}

bool operator==(struct in_addr lhs, struct in_addr rhs) {
    return (lhs.s_addr == rhs.s_addr);
}

bool operator<=(struct in_addr lhs, struct in_addr rhs) {
    if ((lhs < rhs) || (lhs == rhs)){
        return true;
    } else {
        return false;
    }
}

bool operator>(struct in_addr lhs, struct in_addr rhs) {
    return !(lhs <= rhs);
}

bool operator>=(struct in_addr lhs, struct in_addr rhs) {
    return !(lhs < rhs);
}

bool operator!=(struct in_addr lhs, struct in_addr rhs) {
    return !(lhs == rhs);
}
