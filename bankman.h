#pragma once
#include <iostream>

namespace sdds{

class Account{
        std::string c_name;
        double c_balance;
        size_t c_no;
        static size_t nextNo;

    public:
        Account(double amount, std::string name);
        void addAmount(double amount);
        void decAmount(double amount);
        std::string getName();
        double getBalance();
        size_t getAccNo();
    };

    void displayAccount(std::ostream& os, Account& acc);
    void displayMenu(std::ostream& os);
}