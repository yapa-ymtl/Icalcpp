#ifndef ICALCPP_VCALENDER_VCALENDER_HPP
#define ICALCPP_VCALENDER_VCALENDER_HPP

#include "vcalender.h"


namespace Icalcpp {
inline std::string VCalender::version() const noexcept { return _version;}

inline std::string VCalender::prodId() const noexcept { return _prodID;}

inline std::ostream& operator << (std::ostream& os_, const VCalender& vcal_)
{
    os_ << "BEGIN:VCALENDAR\r\n" 
        << "VERSION:" << vcal_._version << "\r\n"
        << "PRODID:" << vcal_._prodID << "\r\n"
        // Vevents
        << "END:VCALENDER\r\n";
    return os_;
}

}

#endif // !ICALCPP_VCALENDER_VCALENDER_HPP
