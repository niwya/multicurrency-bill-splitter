#ifndef CURRENCY_H
#define CURRENCY_H

#include <string>

class Currency {
    private:
        std::string _currency;
        float _exchangeRate; // reference is USD

    public:
        // Constructor
        Currency(std::string currency, float exchangeRate);
        // Getters
        float getExchangeRate() {return exchangeRate};
        std::string getCurrency() {return currency};
        // Setters
        void setExchangeRate(float exchangeRate);
};

#endif