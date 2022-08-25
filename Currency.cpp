#include "Currency.h"

#include <string>
#include <iostream>

// Constructors
ReferenceCurrency::ReferenceCurrency(std::string currency) {
    Currency::setCurrency(currency);
}

OtherCurrency::OtherCurrency(std::string currency, double exchangeRate) {
    Currency::setCurrency(currency);
    _exchangeRate = exchangeRate;
}

// Operators
std::ostream& operator<<(std::ostream& ostream, const ReferenceCurrency& currency) {
    ostream << currency.getCurrency() << " (Reference currency).";
    return ostream;
}

std::ostream& operator<<(std::ostream& ostream, const OtherCurrency& currency) {
    ostream << currency.getCurrency() << " (Exchange rate to reference " << std::to_string(currency.getExchangeRate()) << ").";
    return ostream;
}