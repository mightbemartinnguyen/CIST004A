#include"SavingsAccount.h"
#include"BaseAccount.h"
#include<iostream>

SavingsAccount::SavingsAccount(double initialBalance, double initialRate) :BaseAccount(initialBalance)
{
	interestRate = initialRate;
}
double SavingsAccount::computeInterest()
{
	return getBalance() * (interestRate / 100);
}