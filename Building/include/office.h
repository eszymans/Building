#ifndef _BIURO_H
#define _BIURO_H

#include "venue.h"

class Office: public Venue
{
private:
    double additionalCosts;
public:
    Office(double areaInMeterss, double rateee, double additionalCostss);

    /// Calculates the rent
    /// \return double rent
    double rent() override;

    /// Gives all information about Venue
    /// \return string
    std::string information() override;

    /// Getter of additionCosts
    /// \return double
    double getAdditionalCosts() const;

    /// Setter of additionCosts
    /// \param additionalCostss
    void setAdditionalCosts(double additionalCostss);
};

#endif //_BIURO_H