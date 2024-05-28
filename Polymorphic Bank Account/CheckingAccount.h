#pragma once
#include"BaseAccount.h"
class CheckingAccount :public BaseAccount
{
public:
	CheckingAccount(double initialBalance, double checkingFee1);
	virtual void deposit(double amount);
	virtual bool withdraw(double amount);
	double getCheckingFee();
private:
	double checkingFee;

};
