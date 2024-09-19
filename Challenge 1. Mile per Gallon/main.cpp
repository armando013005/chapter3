/*
* name: Armando Orozco
* date: 09/18/23
* description: Chapter3 - Challenge 1. Mile per Gallon
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Chapter3 - Challenge 1. Mile per Gallon by Armando Orozco 09/18/23\n ";
	cout << "----------------------------------------------------------------------- ";

	cout << "\n\nEnter the number of gallons of gas the car can hold: ";

	double gallonsOfGas;
	cin >> gallonsOfGas;

	cout << "Enter the number of miles the car can be driven on a full tank: ";
	
	double miles;
	cin >> miles;

	cout << "\ntank of gas can hold               : " << gallonsOfGas << " gallon(s)";
	cout << "\nmiles can be driven on a full tank : " << miles << " mile(s)";

	double mpg = miles / gallonsOfGas; // mpg - miles per gallon

	cout << "\n\nMPG (miles per gallon) = " << mpg << "\n";

	
	return 0;
}