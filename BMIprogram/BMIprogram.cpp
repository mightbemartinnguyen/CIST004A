// Martin Nguyen  9-07-2022

#include <iostream>
#include <string>
using namespace std;

int main()
{
	std::cout << "Martin Nguyen	CIST 004A	9-07-2022\n" << endl;
	
	// Height and weight and bmi variables
	float bmi_1, height_1, weight_1;
	float bmi_2, height_2, weight_2;
	string name_1, name_2;

	cout << "Enter person one's name: " ;
	getline(cin, name_1);

	cout << "Enter person one's height in inches: ";
	cin >> height_1;

	while (height_1 < 50.0f || height_1 >150.0f) {
		cout << "Look here we have a funny guy!\n";
		cout << "Please enter a valid height.\n";
		cout << "Enter a height: ";
		cin >> height_1;
	}


	cout << "Enter person one's weight in pounds: " ;
	cin >> weight_1;

	while (weight_1 < 80.0f || weight_1 >400.0f) {
		cout << "Sigh, you wanna do this again?\n";
		cout << "Please try a valid weight \n";
		cout << "Enter a weight: ";
		cin >> weight_1;
	}



	cout << "\nEnter person two's name: ";
	cin.ignore();
	getline(cin, name_2);

	cout << "\nEnter person two's height in inches: ";
	cin >> height_2;

	while (height_2 < 50.0f || height_2 >150.0f) {
		cout << "Look here we have a funny guy!\n";
		cout << "Please enter a valid height.\n";
		cout << "Enter a height: ";
		cin >> height_2;
	}

	cout << "Enter person two's weight in pounds: ";
	cin >> weight_2;

	while (weight_2 < 80.0f || weight_2 >400.0f) {
		cout << "Sigh, you wanna do this again?\n";
		cout << "Please try a valid weight \n";
		cout << "Enter a weight: ";
		cin >> weight_2;
	}

	//  Convert both to metric (2.540cm is 1 Inch, 100.0cm is 1.0 Meter, 1.0 Kilogram is 2.20462 Pounds) Hint: Uses these constants as provided...no precomputed values!
	height_1 = height_1 * 2.54f;
	height_1 = height_1 / 100;

	height_2 = height_2 * 2.54f;
	height_2 = height_2 / 100;

	weight_1 = weight_1 / 2.20462f;

	weight_2 = weight_2 / 2.20462f;


	// BMI
	bmi_1 = weight_1 / (height_1 * height_1);
	bmi_2 = weight_2 / (height_2 * height_2);
	
	cout << "\n" << name_1 << "'s BMI is: " << bmi_1 << endl;
	cout << name_2 << "'s BMI is: " << bmi_2 << endl;

	if (bmi_1 > bmi_2) {
		cout << name_1 << " is Healthier than " << name_2;
	}
	else {
		cout << name_2 << " is Healthier than " << name_1;
	}
	return 0; 
}

