/******************************************************************************

  date.h
  Header for date  class

  Copyright (c) 2025 yapa-ymtl

  This file is part of the Icalcpp project (https://github.com/yapa-ymtl/Icalcpp)

  Licensed under the MIT License. You may obtain a copy of the License at:

      https://opensource.org/licenses/MIT

******************************************************************************/

#ifndef ICALCPP_VCALENDER_DATE_H
#define ICALCPP_VCALENDER_DATE_H

#include <string>
#include <string_view>

namespace Icalcpp {
class Date {
public:
    Date() = delete;
    
    /**
     * @brief Create new Date object.
     * @param Represents July 14, 1997 as 19970714
     */
    Date(const std::string_view date_){
        _date.reserve(STANDARD_DATE_LENGTH);
        _date = date_;
    }

    std::string date() {return _date;}
    // Date(Date &&) = default;
    // Date(const Date &) = default;
    // // Date &operator=(Date &&) = default;
    // // Date &operator=(const Date &) = default;
    // ~Date();

private:
    std::string _date;
    const unsigned int STANDARD_DATE_LENGTH = 8;
    
};
}

#endif
