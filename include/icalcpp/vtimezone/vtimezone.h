/******************************************************************************
  vTimeZone.h
  Header for VTimeZone class - Represents an iCalendar VTIMEZONE component

  Copyright (c) 2025 yapa-ymtl
  This file is part of the Icalcpp project
******************************************************************************/

#ifndef ICALCPP_VTIMEZONE_VTIMEZONE_H
#define ICALCPP_VTIMEZONE_VTIMEZONE_H

// #include <string>
// #include <vector>
// #include <chrono>
// #include "../core/error_types.hpp"

namespace Icalcpp {

// Forward declarations
class VTimeZoneObservance;

class VTimeZone {
// public:
//     // Required Properties
//     [[nodiscard]] std::string tzid() const;                // TZID
//
//     // Optional but common properties
//     [[nodiscard]] std::string tzUrl() const;              // TZURL
//     [[nodiscard]] std::string lastModified() const;       // LAST-MODIFIED
//     
//     // Time zone rules
//     [[nodiscard]] const std::vector<VTimeZoneObservance>& standardRules() const;
//     [[nodiscard]] const std::vector<VTimeZoneObservance>& daylightRules() const;
//     
//     // Status and validation
//     [[nodiscard]] bool isValid() const noexcept;
//     // [[nodiscard]] ErrorCode validate() const noexcept;
//
//     // Setters
//     void setTzid(std::string tzid);
//     void setTzUrl(std::string url);
//     void setLastModified(std::string lastMod);
//     
//     // Rule management
//     void addStandardRule(const VTimeZoneObservance& rule);
//     void addDaylightRule(const VTimeZoneObservance& rule);
//
// private:
//     // Required properties
//     std::string tzid_;
//
//     // Optional properties
//     std::string tz_url_;
//     std::string last_modified_;
//     
//     // Time zone rules
//     std::vector<VTimeZoneObservance> standard_rules_;
//     std::vector<VTimeZoneObservance> daylight_rules_;
};

// Helper class for STANDARD and DAYLIGHT components
class VTimeZoneObservance {
public:
    [[nodiscard]] std::chrono::system_clock::time_point dtstart() const;  // DTSTART
    [[nodiscard]] std::string tzOffsetTo() const;                        // TZOFFSETTO
    [[nodiscard]] std::string tzOffsetFrom() const;                      // TZOFFSETFROM
    [[nodiscard]] std::string rrule() const;                            // RRULE (optional)
};

}

#endif
