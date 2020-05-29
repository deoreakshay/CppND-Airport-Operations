#ifndef BUISNESS_JET_H
#define BUISNESS_JET_H

#include "flight.h"

class BuisnessJet : public Flight
{
public:

private:
    std::string owner_name_{};
    int num_of_people_{};
    std::string priority_status_{};
};
#endif BUISNESS_JET_H