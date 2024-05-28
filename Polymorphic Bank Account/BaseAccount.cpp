#include"BaseAccount.h"
#include<iostream>

BaseAccount::BaseAccount(double initialBalance)
{
	balanceInPennies = lround(initialBalance * 100.0);
	if (balanceInPennies <= 0)
	{
		std::cout << "Invalid Initial Balance It can't be nagative ";
		balanceInPennies = 0L;
	}
}
double BaseAccount::getBalance()
{
	return static_cast<double>(balanceInPennies / 100.0);
}
void BaseAccount::deposit(double amount)
{
	balanceInPennies += lround(amount * 100.0);
	return;
}
bool BaseAccount::withdraw(double amount)
{
	long int withDrawCount = lround(amount * 100.0);
	if (withDrawCount > balanceInPennies)
	{
		std::cout << "Debit amount exceeded account balance.\n";
		return false;
	}
	else
	{
		balanceInPennies -= withDrawCount;
		return true;
	}
}