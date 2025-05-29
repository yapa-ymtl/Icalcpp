#ifndef INCLUDE_UTILITY_H
#define INCLUDE_UTILITY_H

// #include <string>

namespace Icalcpp {
enum class CUTYPE {
    INDIVIDUAL,   // An individual
    GROUP,        // A group of individuals
    RESOURCE,     // A physical resource
    ROOM,         // A room resource
    UNKNOWN,      // Otherwise not known
    x_name,       // Experimental type
    iana_token   // Other IANA-registered
};

// std::string 
}

#endif // !INCLUDE_UTILITY_H
