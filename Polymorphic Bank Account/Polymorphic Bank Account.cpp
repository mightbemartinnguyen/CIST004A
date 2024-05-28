#include"BaseAccount.h"
#include"CheckingAccount.h"
#include "SavingsAccount.h"
#include "OverdraftCheckingAccount.h"
#include <iostream>
#include<vector>
#include <iomanip>
using namespace std;
int main(){

	vector<BaseAccount*> accounts(4);
	SavingsAccount* savingsPtr;
	accounts[0] = new SavingsAccount(25.0, 3.00);
	accounts[1] = new CheckingAccount(80.0, 2.0);
	accounts[2] = new SavingsAccount(200.0, 1.50);
	savingsPtr = dynamic_cast<SavingsAccount*>( accounts[2]);
	accounts[3] = new OverdraftCheckingAccount(400.0, 1.50, 35.00, savingsPtr);
	cout << fixed << setprecision(2);
	for (size_t i = 0; i < accounts.size(); i++)
	{
		cout << "Account " << i + 1 << " balance: $ " << accounts[i]->getBalance() << "\n";
		double withdrawalAmount{ 0 };
		double depositAmount{ 0 };
		
		cout << "Enter an amount to withdraw from account " << i + 1 << " : ";
		cin >> withdrawalAmount;
		
		while (withdrawalAmount < 0){
			cout << "Enter an amount (greater than 0) to withdraw from account " << i + 1 << " : ";
			cin >> withdrawalAmount;
		}
		accounts[i]->withdraw(withdrawalAmount);
	
		cout << "Enter an amount to deposit into account " << i + 1 << " : ";
		cin >> depositAmount;
		
		while (depositAmount < 0)
		{
			cout << "Enter an amount (greater than 0) to deposit into account " << i + 1 << " : ";
			cin >> depositAmount;
		}
		accounts[i]->deposit(depositAmount);
		
		
		SavingsAccount* savingsAccountPtr = dynamic_cast<SavingsAccount*>(accounts[i]);
		
		if (savingsAccountPtr != NULL)
		{
			double interestEarned = savingsAccountPtr->computeInterest();
			cout << "Adding $ " << interestEarned << " interest to account " << i + 1 << " (A SavingsAccount) " << endl;
			savingsAccountPtr->deposit(interestEarned);
		}
		cout << "Updated Account " << i + 1 << " balance : $ " << accounts[i]->getBalance() << "\n\n";
	}
	return 0;
}