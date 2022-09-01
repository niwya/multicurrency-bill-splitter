#include "Bill.h"

// Setters
void Bill::setTaxPercentage(double taxPercentage) {
    _tax = this->getTotal()*taxPercentage;
}
void Bill::setTipPercentage(double tipPercentage) {
    _tip = this->getTotal()*tipPercentage;
}

// Other
void Bill::computeTotal() {
    // Reset the total to 0 to avoid any issue
    this->resetTotal();
    // And add the price to each item
    for (auto it = _itemList.begin(); it != _itemList.end(); it++) {
        _billTotal += it->getPrice();
    }
} 
void Bill::addItem(Item newItem) {
    this->_itemList.push_back(newItem);
}
std::ostream& operator<<(std::ostream& ostream, const Bill& bill) {
    // do
}