#ifndef AIRPORT_H
#define AIRPORT_H

#include <string>
#include <memory>

class Runway
{
public:

private:
    int runway_distance_{};
    bool runway_availability_{};
};

class Airport
{
public:

private:
    int parking_gate_number_{};
    std::string airport_code_{};
    std::string airport_terminal_{};
    std::unique_ptr<Runway> runway_{};
};
#endif AIRPORT_H