#pragma once
#include"BaseAccount.h"
#include"CheckingAccount.h"
#include "SavingsAccount.h"
#include <iostream>
class OverdraftCheckingAccount :public CheckingAccount
{
public:
	OverdraftCheckingAccount(double initialBalance, double initialCheckingFee, double initialOverdraftFee, SavingsAccount* initialPtr);
	bool withdraw(double amount) override;
private:
	double overdraftFee;
	SavingsAccount* ptrSavings;
};
