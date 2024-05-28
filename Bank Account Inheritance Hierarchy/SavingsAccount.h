#pragma once
class SavingsAccount: public BaseAccount {
public:
	SavingsAccount(double initialBalance, double initialRate);
	double computeInterest();
private:
	double interestRate;
};