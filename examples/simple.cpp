#include "../include/icalcpp/icalcpp.h"

int main (int argc, char *argv[]) {
    Icalcpp::Event ev1("meeting 1", "1", "3");
    ev1.pirntEvent();

    return 0;
}
