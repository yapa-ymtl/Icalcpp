/******************************************************************************
  vtodo.h
  Header for VTodo class - Represents an iCalendar VTODO component

  Copyright (c) 2025 yapa-ymtl
  This file is part of the Icalcpp project
******************************************************************************/

#ifndef ICALCPP_VTODO_VTODO_H
#define ICALCPP_VTODO_VTODO_H

// #include <string>
// #include <chrono>
// #include <optional>
// #include "../core/error_types.hpp"

namespace Icalcpp {

class VTodo {
// public:
//     // Status enums for TODO items
//     enum class Status {
//         NEEDS_ACTION,
//         COMPLETED,
//         IN_PROCESS,
//         CANCELLED
//     };
//
//     // Required Properties
//     [[nodiscard]] std::string uid() const;                                // UID
//     [[nodiscard]] std::chrono::system_clock::time_point dtstamp() const;  // DTSTAMP
//
//     // Optional but common properties
//     [[nodiscard]] std::string summary() const;                            // SUMMARY
//     [[nodiscard]] std::string description() const;                        // DESCRIPTION
//     [[nodiscard]] Status status() const;                                  // STATUS
//     [[nodiscard]] int priority() const;                                   // PRIORITY (0-9)
//     [[nodiscard]] std::chrono::system_clock::time_point due() const;      // DUE
//     [[nodiscard]] std::chrono::system_clock::time_point completed() const; // COMPLETED
//     
//     // Status and validation
//     [[nodiscard]] bool isValid() const noexcept;
//     // [[nodiscard]] ErrorCode validate() const noexcept;
//
//     // Setters
//     void setSummary(std::string summary);
//     void setDescription(std::string description);
//     void setStatus(Status status);
//     void setPriority(int priority);  // 0-9, 0=undefined, 1=highest, 9=lowest
//     void setDue(const std::chrono::system_clock::time_point& due);
//     void setCompleted(const std::chrono::system_clock::time_point& completed);
//
// private:
//     // Required properties
//     std::string uid_;
//     std::chrono::system_clock::time_point dtstamp_;
//
//     // Optional properties
//     std::string summary_;
//     std::string description_;
//     Status status_{Status::NEEDS_ACTION};
//     int priority_{0};  // 0 = undefined
//     std::chrono::system_clock::time_point due_;
//     std::chrono::system_clock::time_point completed_;
//     
//     // Helper functions
//     void generateUid();
};

} // namespace Icalcpp

#endif // ICALCPP_VTODO_VTODO_H
