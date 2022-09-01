#ifndef CURRENCY_H
#define CURRENCY_H

#include <string>
#include <iostream>

class Currency {
    // Abstract class (/!\ is actually not bc no pure virtual function)
    private:
        std::string _currency;

    public:
        // Constructor
        Currency() {};
        // Destructor
        virtual ~Currency() {};
        // Getters
        std::string getCurrency() const {return _currency;};
        virtual double getExchangeRate() const {return -1.0;}; // does not work as pure virtual (as it should) bc _currency member of User (-> need to force the instanciation with name + currency!!)
        // Setters
        void setCurrency(std::string currency) {_currency = currency;};
        // Others
        double convertTo(const Currency& currency) const;
        
};

class ReferenceCurrency: public Currency {
    // Singleton (not yet implemented)
    private:
        // Does not have an exchange rate since it will be the reference (1.0)
    public:
        // Constructor
        ReferenceCurrency() {this->setCurrency("USD");}; // DEFAULT IS USD -> HARDCODED /!\ 
        ReferenceCurrency(std::string currency);
        // Destructor
        ~ReferenceCurrency() {};
        // Setters
        // Getters
        double getExchangeRate() const {return 1.0;};
        // Others
        // Operators
        friend std::ostream& operator<<(std::ostream& ostream, const ReferenceCurrency& currency);
};

class OtherCurrency: public Currency {
    private:
        double _exchangeRate;
    public:
        // Constructor
        OtherCurrency(std::string currency, double exchangeRate);
        // Destructor
        ~OtherCurrency() {};
        // Setters
        void setExchangeRate(double exchangeRate) {_exchangeRate = exchangeRate;};
        // Getters
        double getExchangeRate() const {return _exchangeRate;};
        // Others
        // Operators
        friend std::ostream& operator<<(std::ostream& ostream, const OtherCurrency& currency);

};

#endif