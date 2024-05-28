#include "BaseAccount.h"
#include "SavingsAccount.h"
#include <iostream>
using namespace std;
SavingsAccount::SavingsAccount(double initialBalance, double initialRate):BaseAccount(initialBalance) {
	interestRate = initialRate;
}

double SavingsAccount::computeInterest() {
	return getBalance() * interestRate/100.0;
}