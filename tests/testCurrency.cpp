// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include "../include/catch.hpp"
#include "../dependencies/Currency.h"

TEST_CASE("Main currency has exchange rate 1.0 with itself and is USD by default") {
    ReferenceCurrency mainCurrency;
    REQUIRE(mainCurrency.getCurrency() == "USD");
    REQUIRE(mainCurrency.getExchangeRate() == 1.0);
}

// Compile & run:
// g++ -std=c++11 -Wall -o testCurrency testCurrency.cpp
// then run testCurrency
// FROM WITHIN THE TEST FOLDER > does not work with CMake yet