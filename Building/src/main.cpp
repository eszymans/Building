#include <iostream>
#include <memory>

#include "flat.h"
#include "building.h"
#include "office.h"

using namespace std;

int main() {
    cout << "Venues" << endl;

    Building building;
    std::shared_ptr<Venue> flat60 = std::make_shared<Flat>(60, 15);
    std::shared_ptr<Venue> flat90 = std::make_shared<Flat>(90, 14);
    std::shared_ptr<Venue> flat40 = std::make_shared<Flat>(40, 10);
    std::shared_ptr<Venue> office20 = std::make_shared<Office>(20, 20, 140);
    std::shared_ptr<Venue> office90 = std::make_shared<Office>(90, 30, 200);

    building.addVenue(flat60);
    building.addVenue(flat90);
    building.addVenue(flat40);
    building.addVenue(office20);
    building.addVenue(office90);

    cout << building.fullInformation();

    return 0;
}
