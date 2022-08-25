#ifndef CURRENCY_H
#define CURRENCY_H

#include <string>

class Currency {
    // Abstract class
    private:
        std::string _currency;

    protected:
        // Constructor
        Currency();
        Currency(std::string currency) {_currency = currency;};

    public:
        // Destructor
        virtual ~Currency() = 0;
        // Getters
        std::string getCurrency() {return _currency;};
        // Setters
        void setCurrency(std::string currency) {_currency = currency;};
};

class ReferenceCurrency: public Currency {
    // Singleton 
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
        float _exchangeRate;
    public:
        // Constructor
        OtherCurrency(std::string currency, float exchangeRate);
        // Destructor
        ~OtherCurrency() {};
        // Setter
        void setExchangeRate(float exchangeRate) {_exchangeRate = exchangeRate;};
        // Getter
        float getExchangeRate() {return _exchangeRate;};

};



#endif