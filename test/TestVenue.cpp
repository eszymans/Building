#include <boost/test/unit_test.hpp>

#include "venue.h"
#include "flat.h"
#include "office.h"
#include "building.h"

BOOST_AUTO_TEST_SUITE(VenueTest)

/// test whether the rent Profit is calculated correctly
BOOST_AUTO_TEST_CASE(testBuildingFullRent_FiveVenues_CalculatedAndExpectedRent) {
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

    BOOST_CHECK_EQUAL(building.totalRent(), 6000);
}

/// test whether the profit is calculated correctly
BOOST_AUTO_TEST_CASE(testBuildingFullRent_FiveVenues_CalculatedAndExpectedProfit) {
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

        BOOST_CHECK_EQUAL(building.profit(8.0), 3600);
}

BOOST_AUTO_TEST_SUITE_END()
