#ifndef BILL_H
#define BILL_H

#include "Currency.h"
#include "User.h"
#include <string>
#include <vector>

class Item {
    private:
        std::string _itemName;
        double _itemPrice;
        std::vector<User> _itemUsers;
    public:
        // Constructor
        Item() {};
        Item(std::string name) {_itemName = name;};
        Item(std::string name, double price) {_itemName = name; _itemPrice = price;};
        Item(std::string name, double price, std::vector<User> users) {_itemName = name; _itemPrice = price; _itemUsers = users;};
        // Destructor
        // Getters
        double getPrice() const {return _itemPrice;};
        // Setters

};

class Bill {
    private:
        std::vector<Item> _itemList;
        double _billTotal;
        double _tax;
        double _tip;
        ReferenceCurrency _billCurrency;
    public:
        // Constructor
        Bill(ReferenceCurrency billCurrency) {_billCurrency = billCurrency; _billTotal = 0.0; _tax = 0.0; _tip = 0.0;};
        Bill(ReferenceCurrency billCurrency, std::vector<Item> itemList) {_billCurrency = billCurrency; _itemList = itemList; _billTotal = 0.0; _tax = 0.0; _tip = 0.0;};
        // Destructor
        // Getters
        double getTotal() const {return _billTotal;};
        ReferenceCurrency getCurrency() const {return _billCurrency;};
        std::vector<Item> getItems() const {return _itemList;};
        // Setters
        void resetTotal() {_billTotal = 0.0;};
        void setTaxAmount(double tax) {_tax = tax;}
        void setTipAmount(double tip) {_tip = tip;};
        void setTaxPercentage(double taxPercentage); // add catch error when perc not b/w 0 and 1
        void setTipPercentage(double tipPercentage); // add catch error when perc not b/w 0 and 1
        // Other
        void computeTotal();
        void addItem(Item newItem);
        friend std::ostream& operator<<(std::ostream& ostream, const Bill& bill); // NYE

};

#endif