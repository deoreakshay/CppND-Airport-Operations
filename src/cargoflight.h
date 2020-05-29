#ifndef CARGO_FLIGHT_H
#define CARGO_FLIGHT_H

#include "flight.h"

class Cargo : public Flight
{
public:

private:
    double flight_load_{};
    std::string flight_operator_{};
    
};
#endif CARGO_FLIGHT_H