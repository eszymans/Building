#include "venue.h"

Venue::Venue(double areaInMeterss, double ratee) : areaInMeters(areaInMeterss),
                                                   rate(ratee) {}

double Venue::getAreaInMeters() const {
    return areaInMeters;
}

double Venue::getRate() const {
    return rate;
}

void Venue::setRate(double ratee) {
    Venue::rate = ratee;
}

std::string Venue::information() {
    std::string text;
    text = "rate for m^2: " + std::to_string(rate) + " PLN, area: " + std::to_string(areaInMeters);
    text = text + " m^2";
    return text;
}

double Venue::rent() {
    double rent;
    rent = rate * areaInMeters;
    return rent;
}

void Venue::setAreaInMeters(double areaInMeterss) {
    areaInMeters = areaInMeterss;
}
