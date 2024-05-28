// Bank Account Inheritance Hierarchy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BaseAccount.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include <iomanip>

using namespace std;


int main()
{
    cout << "Creating 3 Test Bank Accounts:\n";
    cout << "Account 1 (Base) balance: $50.01\n";
    BaseAccount Account1(50.01);
    cout << "Account 2 (Savings) balance: $25.02\n";
    SavingsAccount Account2(25.02, 5);
    cout << "Account 3 (Checking) balance: $80.03\n\n";
    CheckingAccount Account3(80.03, 1.00);
    cout << fixed << setprecision(2);
    
    cout << "Bank Account Withdrawal tests: \n";
    cout << "Now withdrawing $25.00 from account 1.\n";
    Account1.withdraw(25.00);
    cout << "Now withdrawing $30.00 from account 2.\n";
    Account2.withdraw(30.00);
    cout << "Now withdrawing $40.00 from account 3.\n";
    Account3.withdraw(40.00);
   

    cout << "Account 1 balance: $" << Account1.getBalance() << "\n";
    cout << "Account 2 balance: $" << Account2.getBalance() << "\n";
    cout << "Account 3 balance: $" << Account3.getBalance() << "\n\n";

    cout << "Bank Account Deposit tests:\n";
    cout << "Now depositing $40.23 to account 1.\n";
    Account1.deposit(40.23);
    cout << "Now depositing $65.99 to account 2.\n";
    Account2.deposit(65.99);
    cout << "Now depositing $20.01 to account 3.\n";
    Account3.deposit(20.01);
   

    cout << "Account 1 balance: $" << Account1.getBalance() << "\n";
    cout << "Account 2 balance: $" << Account2.getBalance() << "\n";
    cout << "Account 3 balance: $" << Account3.getBalance() << "\n\n";

    cout << "Bank Account Interest test:\n";
    cout << "Adding $" << Account2.computeInterest() << " interest to  account 2." << "\n";
    Account2.deposit(Account2.computeInterest());
    cout << "The new account 2 balance is: $" << Account2.getBalance() << "\n";

    return 0; 
}


