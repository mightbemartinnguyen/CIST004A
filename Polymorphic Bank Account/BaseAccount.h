#pragma once
class BaseAccount
{
public:
	BaseAccount(double initialBalance = 0);
	double getBalance();
	virtual void deposit(double amount);
	virtual bool withdraw(double amount);
private:
	long int balanceInPennies;
};