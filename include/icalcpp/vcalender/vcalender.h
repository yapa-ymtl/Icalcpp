/******************************************************************************

  vcalender.h
  Header for vcalender  class

  Copyright (c) 2025 yapa-ymtl

  This file is part of the Icalcpp project (https://github.com/yapa-ymtl/Icalcpp)

  Licensed under the MIT License. You may obtain a copy of the License at:

      https://opensource.org/licenses/MIT

******************************************************************************/

#ifndef ICALCPP_VCALENDER_VCALENDER_H
#define ICALCPP_VCALENDER_VCALENDER_H

#include <string>
#include <optional>

#include "../vevent/vevent.h"
#include "../vtodo/vtodo.h"
#include "../vtimezone/vtimezone.h"

namespace Icalcpp {

class VCalender {
public:
    VCalender() = delete;

    [[nodiscard]] explicit VCalender(const std::string& prodID_);
                            // : _prodID(prodID_)  {}

    [[nodiscard]] explicit VCalender(const std::string& prodID_, const std::string& version_);

    // Required properties
    std::string version() const noexcept;
    std::string prodId() const noexcept;
    
    // Calendar components
    std::vector<VEvent>         events() const noexcept;
    std::vector<VTodo>          todos() const noexcept;
    std::optional<VTimeZone>    timezone() const noexcept;
    
    // Calendar properties
    std::optional<std::string> calscale() const noexcept;
    std::optional<std::string> method() const noexcept;
    
private:
    struct ProductID;
    std::string _version{"2.0"};  // Default version
    std::string _prodID;
    // Other components will be added
};

} // namespace Icalcpp

#endif // !ICALCPP_VCALENDER_VCALENDER_H
