#ifndef PASSENGER_FLIGHT_H
#define PASSENGER_FLIGHT_H

#include "flight.h"

class PassengerFlight : public Flight 
{
public:

private:
    int number_of_passenger_{};
    std::string flight_operator_{};
};
#endif PASSENGER_FLIGHT_H