#include <string>
#include <iostream>

namespace Icalcpp {

class Event {
public:
    Event() = delete;
    Event(const std::string& enventName_,const std::string& start_, const std::string& end_)
        :eventName(enventName_), start(start_), end(end_){}
    void pirntEvent(){
        std::cout << "Event " << eventName << " from : " << start << " to " << end << std::endl;
    }
private:
    std::string eventName;
    std::string start;
    std::string end;
};

}
