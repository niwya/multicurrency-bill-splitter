#ifndef BILL_H
#define BILL_H

#include <string>
#include <vector>

class Item {
    public:
        std::string _itemName;
        float _itemPrice;
        float _itemCurrency;
    private:
        // Constructor
        // Getters
        // Setters

};

class Bill {
    public:
        std::vector<Item> _itemList;
        float _billTotal;
    private:
        // Constructor
        // Getters
        // Setters

};

#endif