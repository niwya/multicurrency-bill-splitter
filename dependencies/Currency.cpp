#include "Currency.h"

#include <string>
#include <iostream>

// Operators
std::ostream& operator<<(std::ostream& ostream, const ReferenceCurrency& currency) {
    ostream << currency.getCurrency() << " (Reference currency).";
    return ostream;
}

std::ostream& operator<<(std::ostream& ostream, const OtherCurrency& currency) {
    ostream << currency.getCurrency() << " (Exchange rate to reference " << std::to_string(currency.getExchangeRate()) << ").";
    return ostream;
}

// Others
double Currency::convertTo(const Currency& currency) const {
    return currency.getExchangeRate() / this->getExchangeRate();
}