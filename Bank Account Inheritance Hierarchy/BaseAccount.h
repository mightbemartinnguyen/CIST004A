#pragma once

class BaseAccount {
public:
	BaseAccount(double initialBalance);
	double getBalance();
	void deposit(double amount);
	bool withdraw(double amount);
private:
	long int balanceInPennies;
};