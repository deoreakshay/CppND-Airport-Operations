#ifndef FLIGHT_H
#define FLIGHT_H

#include <string>

class Flight
{
public:
    Flight(std::string origin, std::string destination, double);

private:
    std::string origin_city_;
    std::string destination_city_;
    double expected_time_arrival_;
    double expected_time_departure_;
};
#endif FLIGHT_H