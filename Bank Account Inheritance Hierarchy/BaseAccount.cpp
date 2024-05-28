#include "BaseAccount.h"
#include <iostream>
using namespace std;


BaseAccount::BaseAccount(double initialBalance) {
	balanceInPennies = lround(initialBalance * 100.0);

	if (balanceInPennies <= 0) {
		cout << "Invalid initial balance, it cannot be negative";
		balanceInPennies = 0L;
	}
}

void BaseAccount::deposit(double amount) {
	balanceInPennies += lround(amount * 100.0);;
	return;
}

bool BaseAccount::withdraw(double amount) {
	long int withdrawCount{ 0 };
	withdrawCount = lround(amount * 100.0);;
	if (withdrawCount > balanceInPennies) {
		cout << "Insufficient funds to honor the withdrawal request.\n";
		return false;
	}
	else {
		balanceInPennies -= withdrawCount;
		return true;
	}
}

double BaseAccount::getBalance() {
	return static_cast<double>(balanceInPennies / 100.0);
}