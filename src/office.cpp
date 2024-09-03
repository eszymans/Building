#include "office.h"

double Office::rent() {
    double rent;
    rent = Venue::rent();
    rent = rent + additionalCosts;
    return rent;
}

std::string Office::information() {
std::string text;
text = "Office : ";
text = text + Venue::information();
text = text + ", additional costs: " + std::to_string(additionalCosts) + "PLN";
return text;
}

double Office::getAdditionalCosts() const {
    return additionalCosts;
}

void Office::setAdditionalCosts(double additionalCostss) {
    additionalCosts = additionalCostss;
}

Office::Office(double areaInMeterss, double rateee, double additionalCostss) : Venue(areaInMeterss, rateee),
                                                                               additionalCosts(additionalCostss) {}
