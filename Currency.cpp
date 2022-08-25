#include "Currency.h"
#include <string>

Currency::~Currency() {
}

ReferenceCurrency::ReferenceCurrency(std::string currency) {
    Currency::setCurrency(currency);
}

OtherCurrency::OtherCurrency(std::string currency, double exchangeRate) {
    Currency::setCurrency(currency);
    _exchangeRate = exchangeRate;
}