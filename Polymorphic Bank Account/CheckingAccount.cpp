#include"BaseAccount.h"
#include"CheckingAccount.h"
#include<iostream>


CheckingAccount::CheckingAccount(double initialBalance, double checkingFee1) :BaseAccount(initialBalance)
{
	checkingFee = checkingFee1;
}
void CheckingAccount::deposit(double amount)
{
	if (amount > 0)
	{
		BaseAccount::deposit(amount - checkingFee);
		std::cout << "$" << checkingFee << " Transaction Fee Charged" << "\n";
	}
}
bool CheckingAccount::withdraw(double amount)
{
		if (amount > 0)
		{
			BaseAccount::withdraw(amount + checkingFee);
			std::cout << "$" << checkingFee << " Transaction Fee Charged" << "\n";
		}
		return true;
}
double CheckingAccount::getCheckingFee()
{
	return checkingFee;
}
