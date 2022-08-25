#ifndef BILL_H
#define BILL_H

#include "Currency.h"
#include <string>
#include <vector>

class Item {
    public:
        std::string _itemName;
        double _itemPrice;
    private:
        // Constructor
        // Getters
        // Setters

};

class Bill {
    public:
        std::vector<Item> _itemList;
        double _billTotal;
        ReferenceCurrency _billCurrency;
    private:
        // Constructor
        // Getters
        // Setters

};

#endif