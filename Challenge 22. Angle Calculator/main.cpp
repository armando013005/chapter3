/*
* name: Armando Orozco
* date: 09/18/23
* description: Chapter3 - Challenge 22. Angle Caculator
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	//declare constants
	double const PI = 3.14159;
	cout << "Chapter3 -  Challenge 22. Angle Caculator by Armando Orozco 09/18/23\n";
	cout << "----------------------------------------------------------------------- ";

	cout << "\n\nEnter the angle in radians: ";

	double radians;
	cin >> radians;

	//this functions take values in radians, no need to convert to angles
	cout << setprecision(4) << fixed << right
		<< "\nsin: " << sin(radians)
		<< "\ncos: " << cos(radians)
		<< "\ntan: " << tan(radians) << '\n';

	return 0;
}