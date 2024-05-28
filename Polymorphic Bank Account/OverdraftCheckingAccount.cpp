#include"BaseAccount.h"
#include"CheckingAccount.h"
#include "SavingsAccount.h"
#include "OverdraftCheckingAccount.h"
#include <iostream>
#include <iomanip>

OverdraftCheckingAccount::OverdraftCheckingAccount(double initialBalance, double initialCheckingFee, double initialOverdraftFee, SavingsAccount* initialPtr) :CheckingAccount(initialBalance, initialCheckingFee)
{
	overdraftFee = initialOverdraftFee;
	ptrSavings = initialPtr;
}
bool OverdraftCheckingAccount::withdraw(double amount)
{

	if (BaseAccount::getBalance() < CheckingAccount::getCheckingFee() + overdraftFee + amount)
	{
		std::cout << "Debit amount exceeded account balance \n";
		std::cout << "Using Overdraft Protection (Legal money extraction rip-off)\n";
		double checkingBalance = CheckingAccount::getBalance();
		double savingsBalance = ptrSavings->getBalance();
		savingsBalance += checkingBalance;

		if (savingsBalance >= CheckingAccount::getCheckingFee() + overdraftFee + amount)
		{
			double baseAmount = CheckingAccount::getBalance();
			BaseAccount::withdraw(baseAmount);
			double savingsAmount;
			savingsAmount = amount - baseAmount;
			ptrSavings->withdraw( savingsAmount + overdraftFee + CheckingAccount::getCheckingFee());
			std::cout << "$" << CheckingAccount::getCheckingFee() << " transaction Fee Charged \n";
			std::cout << "$" << overdraftFee << " Overdraft transaction Fee Charged" << "\n\n";
			std::cout << "Updated overdraft Savings Account Balance : " << ptrSavings->getBalance() << std::endl;
			return false;
		}
	}
	else
	{
		CheckingAccount::withdraw(amount);
		return true;;
	}
}
