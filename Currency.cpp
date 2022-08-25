#include "Currency.h"
#include <string>

Currency::Currency(std::string currency, float exchangeRate) {
    _currency = currency;
    _exchangeRate = exchangeRate;
};

void Currency::setExchangeRate(float exchangeRate) {
    _exchangeRate = exchangeRate;
};