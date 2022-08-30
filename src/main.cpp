#include <Currency.h>
#include <Bill.h>
#include <USer.h>

#include <string>
#include <iostream>
#include <map>

int main() {
    // Decorative
    std::cout << "__________" << std::endl;
    // Ask for the number of bill payers
    int nUsers;
    std::cout << "How many bill payers?" << std::endl;
    std::cin >> nUsers;

    // Ask for the number of currencies involved
    int nCurrencies;
    std::cout << "How many different currencies?" << std::endl;
    std::cin >> nCurrencies;

    // Ask for the main currency
    std::map<std::string, Currency> currencies;
    std::string mainName;
    std::cout << "What is the bill currency?" << std::endl;
    std::cin >> mainName;
    ReferenceCurrency billCurrency(mainName);
    currencies[mainName] = billCurrency;

    // Ask for the names and exchange rates to reference currencies, if there is more than 1 currency
    if (nCurrencies > 1) {
        for (int i = 0; i<nCurrencies-1; i++) {
            std::string name;
            double exchangeRate;
            std::cout << "Details for currency " << std::to_string(i+1) << ":\nName?" << std::endl; 
            std::cin >> name;
            std::cout << "Exchange rate? Reference is " << billCurrency.getCurrency() << "." << std::endl;
            std::cin >> exchangeRate;
            OtherCurrency currentCurrency(name, exchangeRate);
            currencies[name] = currentCurrency;
        }
    }

    // Ask for the bill payers' names and currencies (if there is more than 1 currency)
    std::map<std::string, User> users;
    for (int i=0; i<nUsers; i++) {
        std::string userName;
        std::cout << "Who is bill payer " << std::to_string(i+1) << "?" << std::endl;
        std::cin >> userName;
        User currentUser(userName);
        // Warn the user in case there is a duplicate userName, and retry
        while (users.find(userName)!=users.end()) {
            std::cout << "User already exists - give another name." << std::endl;
            std::cin >> userName;
        }
        users[userName] = currentUser; 
        if (nCurrencies > 1) {
            std::string currencyName;
            std::cout << "What currency is " << userName << " going to use?" << std::endl;
            std::cin >> currencyName;
        }
        else {
            
        }
        
       // CALL USER CTOR
    }
    // Ask for the details of the bill

    // Output who owes what in their respective currency
    std::cout << "__________" << std::endl;
    return 0;
}