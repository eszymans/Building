#ifndef _MIESZKANIE_H
#define _MIESZKANIE_H

#include "venue.h"

class Flat: public Venue
{
public:
    Flat(double areaInMeters, double rate);

    /// Calculates the rent
    /// \return double rent
    double rent() override;

    /// Gives all information about Venue
    /// \return string
    std::string information() override;
};

#endif //_MIESZKANIE_H
