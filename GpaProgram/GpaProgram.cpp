// GpaProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int studentNumber, loopCounter{0};
	float studentGrade, totalSum{0.0F}, minGPA{4.0F}, maxGPA{0.0F}, average{0.0F};

	cout << "Martin Nguyen	CIST 004A	9-19-2022\n" << endl;

	cout << "How many student GPA  would you like to input?: ";
	cin >> studentNumber;

	while (studentNumber > 0) {
		cout << "Please enter student GPA " << ++loopCounter << ": ";
		cin >> studentGrade;
		
		// valid gpa parameters
		while (studentGrade < 0.0F || studentGrade >4.0F) {
			cout << "\nRenter a valid GPA (0.0 to 4.0) for student #" << loopCounter  << ": ";
			cin >> studentGrade;
		}

		--studentNumber;
		
		totalSum = totalSum + studentGrade;

		average = totalSum / loopCounter;

		// max and min
		if (studentGrade <= minGPA)
		{
			minGPA = studentGrade;
		}
	
		if (studentGrade >= maxGPA)
		{
			maxGPA = studentGrade;
		}
	
	
	}

	// Results to 3 decimal points
	cout << fixed;
	cout << setprecision(3);


	cout << "\nThe Minimum GPA entered was " << minGPA << "\n";
	cout << "\nThe Maximum GPA entered was " << maxGPA << "\n";
	cout << "\nThe Average of all GPAs was " << average << endl;

	return 0;









}
	

