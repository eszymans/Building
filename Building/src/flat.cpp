#include "flat.h"

double Flat::rent() {
    return Venue::rent();
}

std::string Flat::information() {
    std::string text;
    text = "Flat : ";
    text = text + Venue::information();
    return text;
}

Flat::Flat(double areaInMeters, double rate) : Venue(areaInMeters, rate) {}
