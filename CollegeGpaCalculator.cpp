#include <iostream>
#include <iomanip>
using namespace std;



int main()
{
	char letterGrade{}, sign{};
	float gpa{ 0 }, totalSum {0}, totalUnits{0}, endingGrade{0}, courseUnits{ 0 };
	int numberGrades{0}, loopCounter{1};

	cout << "Martin Nguyen	CIST 004A	9-19-2022\n" << endl;

	cout << "Simple GPA Calculator Program\n" << endl;

	cout << "To calculate your GPA, enter each letter grade with an optional + or -. Or enter E to exit the program. \n";

	cout << "\nNext enter the number of units for the course follow by the [Return] key.\n";

	do {
		cout << "\nPlease enter a letter grade: for student #" << loopCounter  << ": ";
		cin >> letterGrade;
	
		cin.get(sign);
		if (sign != '\n')
			cin.ignore(1000, '\n');


		letterGrade = toupper(letterGrade);

		switch (letterGrade) {
		case 'A':
			gpa = 4.0F;
			break;
		case'B':
			gpa = 3.0F;
			break;
		case'C':
			gpa = 2.0F;
			break;
		case'D':
			gpa = 1.0F;
			break;
		case'F':
			gpa = 0.0F;
			break;
		case 'E':
			loopCounter--;
			continue;
		default:
			cout << "You entered a invalid letter please reenter";
			continue;
		}

		switch (sign) {
		case '+':
			if (letterGrade == 'A')
				cout << "A+ count only as A\n";
			else
				gpa += 0.3F;
			break;
		case '-':
			if (letterGrade == 'F')
				cout << "F- count only as F\n";
			else
				gpa -= 0.3F;
		case '\n':
			break;
		default:
			cout << "Invalid sign";
			continue;
		}



		do {
			cout << "Please enter a unit value for course " << loopCounter << " between 0.5 and 45: ";
			cin >> courseUnits;
		} while (courseUnits < 0.5 || courseUnits > 45);
		

	

		totalSum += gpa * courseUnits;
		totalUnits += courseUnits;


		loopCounter++;

	} while (letterGrade != 'E');

	endingGrade = totalSum / totalUnits;


	cout << setprecision(3) << fixed;
	cout << "Your GPA for the " << loopCounter << " valid courses entered is: " << endingGrade;
	return 0;
}

