#ifndef _LOKAL_H
#define _LOKAL_H

#include <string>

class Venue
{
private:
    double areaInMeters;
    double rate;
public:
    Venue(double areaInMeterss, double ratee);

    /// Calculates the rent
    /// \return double rent
    virtual double rent();

    /// Gives all information about Venue
    /// \return string
    virtual std::string information();

    /// Getter for areaInMeters
    /// \return double
    double getAreaInMeters() const;

    /// Getter for rate
    /// \return double
    double getRate() const;

    /// Sets areaInMeters on sth new
    /// \param areaInMeterss
    void setAreaInMeters(double areaInMeterss);

    /// Sets rate for sth new
    /// \param ratee
    void setRate(double ratee);
};

#endif //_LOKAL_H
