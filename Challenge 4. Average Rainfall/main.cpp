/*
* name: Armando Orozco
* date: 09/18/23
* description: Chapter3 - Challenge 4. Average Rainfall
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Chapter3 - Challenge 4. Average Rainfall by Armando Orozco 09/18/23\n ";
	cout << "----------------------------------------------------------------------- ";

	cout << "\nEnter the month name: ";

	string month1;
	cin >> month1;

	cout << "Enter the amount of rain(in inches) that fell on " << month1 << ": ";

	double rainfallMonth1;
	cin >> rainfallMonth1;

	cout << "\nEnter the month name: ";

	string month2;
	cin >> month2;

	cout << "Enter the amount of rain(in inches) that fell on " << month2 << ": ";

	double rainfallMonth2;
	cin >> rainfallMonth2;

	cout << "\nEnter the month name: ";

	string month3;
	cin >> month3;

	cout << "Enter the amount of rain(in inches) that fell on " << month3 << ": ";

	double rainfallMonth3;
	cin >> rainfallMonth3;



	cout << showpoint << setprecision(2) << fixed;
	cout << "\nAverage rainfall for " << month1 << ", " << month2 << " and " << month3
		<< " = " << (rainfallMonth1 + rainfallMonth2 + rainfallMonth3) / 3 << " inch(es) \n";//calculate the average

	return 0;
}