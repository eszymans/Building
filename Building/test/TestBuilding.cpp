#include <boost/test/unit_test.hpp>

#include "venue.h"
#include "building.h"

BOOST_AUTO_TEST_SUITE(BuildingTest)

/// test whether the lack of premises means no profit
BOOST_AUTO_TEST_CASE(testBuilding_NoVenues_ZeroRent) {
    Building b;
    BOOST_CHECK_EQUAL(b.totalRent(), 0.0);
}

// test whether the lack of premises and low costs result in zero profit
BOOST_AUTO_TEST_CASE(testBuilding_NoVenuesAndLowCosts_ZeroRent) {
    Building b;
    BOOST_CHECK_EQUAL(b.profit(1.0), 0.0);
}

// test whether lack of premises and lack of costs result in zero profit
BOOST_AUTO_TEST_CASE(testBuilding_NoVenuesAndNoCosts_ZeroRent) {
    Building b;
    BOOST_CHECK_EQUAL(b.profit(0.0), 0.0);
}

BOOST_AUTO_TEST_SUITE_END()
