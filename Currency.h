#ifndef CURRENCY_H
#define CURRENCY_H

#include <string>

class Currency {
    // Abstract class
    private:
        std::string _currency;

    public:
        // Constructor
        Currency() {};
        // Destructor
        virtual ~Currency() = 0;
        // Getters
        std::string getCurrency() {return _currency;};
        // Setters
        void setCurrency(std::string currency) {_currency = currency;};
};

class ReferenceCurrency: public Currency {
    // Singleton (not yet implemented)
    private:
        // Does not have an exchange rate since it will be the reference (1.0)
    public:
        // Constructor
        ReferenceCurrency(std::string currency);
        // Destructor
        ~ReferenceCurrency() {};
        // Setter
        // Getter

};

class OtherCurrency: public Currency {
    private:
        double _exchangeRate;
    public:
        // Constructor
        OtherCurrency(std::string currency, double exchangeRate);
        // Destructor
        ~OtherCurrency() {};
        // Setter
        void setExchangeRate(double exchangeRate) {_exchangeRate = exchangeRate;};
        // Getter
        double getExchangeRate() {return _exchangeRate;};

};



#endif