/******************************************************************************
  vevent.h
  Header for VEvent class - Represents an iCalendar VEVENT component

  Copyright (c) 2025 yapa-ymtl
  This file is part of the Icalcpp project
******************************************************************************/

#ifndef ICALCPP_VEVENT_VEVENT_H
#define ICALCPP_VEVENT_VEVENT_H

// #include <string>
// #include <chrono>
// #include <vector>
// #include "../core/error_types.hpp"

namespace Icalcpp {

class VEvent {
// public:
//     // Required Properties
//     [[nodiscard]] std::chrono::system_clock::time_point dtstart() const;  // DTSTART
//     [[nodiscard]] std::string uid() const;                                // UID
//
//     // Optional but common properties
//     [[nodiscard]] std::chrono::system_clock::time_point dtend() const;    // DTEND
//     [[nodiscard]] std::string summary() const;                            // SUMMARY
//     [[nodiscard]] std::string description() const;                        // DESCRIPTION
//     [[nodiscard]] std::string location() const;                          // LOCATION
//     
//     // Status and validation
//     [[nodiscard]] bool isValid() const noexcept;
//     // [[nodiscard]] ErrorCode validate() const noexcept;
//
//     // Setters
//     void setDtStart(const std::chrono::system_clock::time_point& start);
//     void setDtEnd(const std::chrono::system_clock::time_point& end);
//     void setSummary(std::string summary);
//     void setDescription(std::string description);
//     void setLocation(std::string location);
//
// private:
//     // Required properties
//     std::chrono::system_clock::time_point dtstart_;
//     std::string uid_;
//
//     // Optional properties
//     std::chrono::system_clock::time_point dtend_;
//     std::string summary_;
//     std::string description_;
//     std::string location_;
//     
//     // Helper functions
//     void generateUid();  // Generate a unique identifier
};

} // namespace Icalcpp

#endif // ICALCPP_VEVENT_VEVENT_H
