#ifndef BILL_H
#define BILL_H

#include "Currency.h"
#include "User.h"
#include <string>
#include <vector>

class Item {
    public:
        std::string _itemName;
        double _itemPrice;
        std::vector<User> _itemUsers;
    private:
        // Constructor
        Item() {};
        Item(std::string name) {_itemName = name;};
        Item(std::string name, double price) {_itemName = name; _itemPrice = price;};
        Item(std::string name, double price, std::vector<User> users) {_itemName = name; _itemPrice = price; _itemUsers = users;};
        // Destructor
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
        Bill(ReferenceCurrency billCurrency) {_billCurrency = billCurrency;};
        Bill(ReferenceCurrency billCurrency, std::vector<Item> itemList) {_billCurrency = billCurrency; _itemList = itemList;};
        // Destructor
        // Getters
        // Setters

};

#endif