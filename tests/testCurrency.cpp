// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include "../include/catch.hpp" // actually need to include the header file to the build, else it fails, FIND BETTER ALTERNATIVE
#include <Currency.h>

#include <string>

TEST_CASE("Reference currency has exchange rate 1.0 with itself and is USD by default") {
    ReferenceCurrency mainCurrency;
    REQUIRE(mainCurrency.getCurrency() == "USD");
    REQUIRE(mainCurrency.getExchangeRate() == 1.0);
}

TEST_CASE("Reference currency has exchange rate 1.0 with itself and can be other than USD") {
    std::string name("EUR");
    ReferenceCurrency mainCurrency(name);
    REQUIRE(mainCurrency.getCurrency() == "EUR");
    REQUIRE(mainCurrency.getExchangeRate() == 1.0);
}

TEST_CASE("Other currency has name and exchange rate to reference currency declared by user") {
    std::string name("EUR");
    double exchangeRate(.99);
    OtherCurrency otherCurrency(name, exchangeRate);
    REQUIRE(otherCurrency.getCurrency() == "EUR");
    REQUIRE(otherCurrency.getExchangeRate() == .99);
}