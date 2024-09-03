#include <string>
#include "building.h"
#include "venue.h"

void Building::addVenue(std::shared_ptr<Venue> venue) {
    venues.push_back(venue);
}

double Building::totalRent() {
    double fullRent = 0;
    for(auto & i : venues)
    {
        fullRent = i->rent() + fullRent;
    }
    return fullRent;
}

double Building::profit(double expensesPerMeter) {
   double profit;
    profit = totalRent();
    for(auto & i : venues)
    {
        profit = profit - i->getAreaInMeters() * expensesPerMeter;
    }
    return profit;
}

std::string Building::fullInformation() {
    std::string text;
    text.clear();
    for(auto & i : venues)
    {
        text = text + i->information() + "\n";
    }
    return text;
}


const std::vector<std::shared_ptr<Venue>> &Building::getVenues() const {
    return venues;
}
