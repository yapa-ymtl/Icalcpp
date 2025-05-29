#include <iostream>
#include "../include/icalcpp/icalcpp.h"
#include "icalcpp/vcalender/vcalender.h"

int main () {

    Icalcpp::VCalender newObj = Icalcpp::VCalender("prod_id");
    newObj.prodId();

    return 0;
}
