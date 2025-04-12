#include "vcalender.h"

inline Icalcpp::VCalender::VCalender(const std::string& prodID_)
                            : _prodID(prodID_)  {}

Icalcpp::VCalender::VCalender(   const std::string& prodID_,
                                    const std::string& version_)
                                    // std::optional<std::string> calscale = std::nullopt,
                                    // std::optional<std::string> method = std::nullopt)
                                :
                                _version(version_), _prodID(prodID_) {}
