#include <iostream>
#include "../include/icalcpp/icalcpp.h"
// #include "icalcpp/vcalender/date.h"

int main () {

    Icalcpp::VCalender newObj = Icalcpp::VCalender("prod_id", "3.0");
    // std::cout << newObj.version();
    std::cout << newObj;
    // std::string method = newObj.version();

    return 0;
}
