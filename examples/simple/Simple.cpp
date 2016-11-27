#include "Simple.h"

std::string toString(const struct in_addr data)  {
    std::string ret = "";
    ret = inet_ntoa(data);
    return ret;
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
