#include "BaseAccount.h"
#include "CheckingAccount.h"
#include <iostream>
CheckingAccount::CheckingAccount(double initialBalance, double checkingFee1) :BaseAccount(initialBalance) {
	checkingFee = checkingFee1;
}
void CheckingAccount::deposit(double amount) {
	BaseAccount::deposit(amount-checkingFee);
	std::cout << "$" << checkingFee << " transaction fee charged." << "\n\n";
}
bool CheckingAccount::withdraw(double amount) {
	if (BaseAccount::getBalance() > amount) {
		BaseAccount::withdraw(amount+checkingFee);
		std::cout << "$" << checkingFee << " transaction fee charged." << "\n\n";
		return true;
	}
	else {
		return false;
	}
}