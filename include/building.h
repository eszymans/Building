#ifndef _BUDYNEK_H
#define _BUDYNEK_H

#include <vector>
#include <memory>

class Venue;

class Building {
private:
    std::vector <std::shared_ptr<Venue>> venues;
public:
    /// Add new venue to the building
    /// \param venue
    void addVenue(std::shared_ptr<Venue> venue);

    /// Calculates rent from all Venues
    /// \return double
    double totalRent();

    /// Calculates profit from the building
    /// \param expensesPerMeter
    /// \return double
    double profit (double expensesPerMeter);

    /// Gives back all information about all Venues
    /// \return string
    std::string fullInformation();

    /// Gives back venues
    /// \return vector
    const std::vector<std::shared_ptr<Venue>> &getVenues() const;


};

#endif //_BUDYNEK_H
