#pragma once
class CheckingAccount:public BaseAccount {
public:
	CheckingAccount(double initialBalance, double checkingFee1);
	void deposit(double amount);
	bool withdraw(double amount);
private:
	double checkingFee;
};