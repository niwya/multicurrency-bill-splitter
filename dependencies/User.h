#ifndef USER_H
#define USER_H

#include <string>
#include "Currency.h"
#include <memory>

class User {
    private:
        std::string _name;
        std::shared_ptr<Currency> _p_currency; // declare a null pointer to a Currency obj
        double _total;
    public:
        // Constructor
        User() {};
        User(std::string name): _name(name) {};
        User(std::string name, Currency currency): _name(name), _p_currency(&currency) {};
        // Destructor
        ~User() {};
        // Getters
        std::string getName() const {return _name;};
        std::shared_ptr<Currency> getCurrency() const {return _p_currency;};
        double getTotal() const {return _total;};
        // Setters
        void setName(std::string name) {_name = name;};
        void setCurrency(std::shared_ptr<Currency> p_currency) {_p_currency = p_currency;}; // modify this?
        void setTotal(double total) {_total = total;};
};

#endif