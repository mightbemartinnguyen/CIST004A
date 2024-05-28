// Prime Factor Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

void primeFactor(unsigned int num, unsigned int div = 2)
{
	if (num == div) { // It's Prime
		std::cout << div << " ";
		return;
	}
	if (num % div == 0) { // div is a factor
		std::cout << div << " ";
		primeFactor(num / div, div);
	}
	else {
		primeFactor(num, div + 1);
	}
	return;
}

int main() {
	unsigned int number;
	std::cout << "Enter a number to factor: ";
	std::cin >> number;
	std::cout << "The prime factors are: ";
	primeFactor(number);
	std::cout << std::endl;

	return 0;
}
