#ifndef USER_H
#define USER_H

#include <string>
#include "Currency.h"

class User {
    private:
        std::string _name;
        Currency _currency;
        double _total;
    public:
        // Constructor
        User() {};
        User(std::string name): _name(name) {};
        User(std::string name, Currency currency): _name(name), _currency(currency) {};
        // Destructor
        ~User() {};
        // Getters
        std::string getName() const {return _name;};
        Currency getCurrency() const {return _currency;};
        double getTotal() const {return _total;};
        // Setters
        void setName(std::string name) {_name = name;};
        void setCurrency(Currency currency) {_currency = currency;};
        void setTotal(double total) {_total = total;};
};

#endif