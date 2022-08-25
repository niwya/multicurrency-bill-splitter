#include "Currency.h"
#include "User.h"
#include "Bill.h"
#include <string>
#include <iostream>
#include <map>

int main() {
    // Ask for the number of bill payers
    int nUsers;
    std::cout << "How many bill payers?" << std::endl;
    std::cin >> nUsers;

    // Ask for the number of currencies involved
    int nCurrencies;
    std::cout << "How many different currencies?" << std::endl;
    std::cin >> nCurrencies;

    // Ask for the main currency
    std::string mainName;
    std::cout << "What is the bill currency?" << std::endl;
    std::cin >> mainName;
    ReferenceCurrency billCurrency {mainName};
    
    // Ask for the names and exchange rates to reference currencies
    std::map<std::string, OtherCurrency> currencies;
    for (int i = 0; i<nCurrencies-1; i++) {
        std::string name;
        float exchangeRate;
        std::cout << "Details for currency " << std::to_string(i+1) << ":\nName?" << std::endl; 
        std::cin >> name;
        std::cout << "Exchange rate? Reference is USD." << std::endl;
        std::cin >> exchangeRate;
        OtherCurrency currentCurrency {name, exchangeRate};
    }
    // Ask for the bill payers' names and currencies
    // std::map<std::string, User> users;
    // for (int i=0; i<nUsers; i++) {
    //     std::string userName;
    //     std::string currencyName;
    //     std::cout << "Who is bill payer " << std::to_string(i+1) << "?" << std::endl;
    //     std::cin >> userName;
    //     std::cout << "What currency is " << userName << " going to use?" << std::endl;
    //     std::cin >> currencyName;
    //    // CALL USER CTOR
    // }
    // Ask for the details of the bill

    // Output who owes what in their respective currency
    std::cout << "__________" << std::endl;

}