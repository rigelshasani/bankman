#include "bankman.h"
#include <iostream>
#include <iomanip>
using namespace std;

namespace sdds{
    //correct member variable initialization
    size_t Account::nextNo = 100000;

    Account::Account(double amount, string name){
        this->c_balance = amount;
        this->c_name  = name;
        this->c_no = nextNo+=1;
    }
    void Account::addAmount(double amount){
        c_balance += amount;
    }
    void Account::decAmount(double amount){
        c_balance -= amount;
    }

    std::string Account::getName(){
        return c_name;
    }

    double Account::getBalance(){
        return c_balance;
    }
    size_t Account::getAccNo(){
        return c_no;
    }

    void displayAccount(std::ostream& os, Account& acc){
        os << "Account holder: " << setw(16) << acc.getName() << endl;
        os << "Account balance:" << setw(16) << acc.getBalance() << endl;
        os << "Account number: " << setw(16) << setfill('0') << acc.getAccNo() << endl;
    }
    void displayMenu(std::ostream& os){
        os << "+------------------------------+"<< endl;
        os << "|-----WELCOME TO BANKMAN!------|"<< endl;
        os << "+------------------------------+"<< endl;
        os << "|-INPUT A NUMBER FROM THE LIST-|"<< endl;
        os << "|---------1.Balance------------|" << endl;
        os << "|---------2.Deposit------------|" << endl;
        os << "|---------3.Withdraw-----------|" << endl;
        os << "|-------4.Coming soon...-------|" << endl;
        os << "|-------5.Coming soon...-------|" << endl;
        os << "|-------6.Coming soon...-------|" << endl;
        os << "|----PRESS 0 TO END PROGRAM----|" << endl;
        os << "+------------------------------+" << endl;
    }
}


