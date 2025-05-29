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

#include <memory>
#include <string>
#include <ostream>
#include <optional>
#include <ostream>
#include <unordered_set>

#include "../vevent/vevent.h"
#include "../vtodo/vtodo.h"
#include "../vtimezone/vtimezone.h"
#include "../utility/utility.h"

namespace Icalcpp {

class VCalender {
public:
    VCalender() = delete;

    [[nodiscard]]
    explicit VCalender(const std::string& prodID_)
                            : _prodID(prodID_)  {}

    [[nodiscard]]
    explicit VCalender(const std::string& prodID_, const std::string& version_)
                            : _prodID(prodID_), _version(version_) {}

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

    friend std::ostream& operator<<(std::ostream& os_, const VCalender& vcal_);
    
private:
    struct ProductID;
    std::string _prodID;
    std::string _version{"2.0"};  // Default version

    std::unordered_set<std::unique_ptr<VEvent>> _events;
    std::unordered_set<std::unique_ptr<VTodo>> _todos;
    // Other components will be added
};

} // namespace Icalcpp

#endif // !ICALCPP_VCALENDER_VCALENDER_H
