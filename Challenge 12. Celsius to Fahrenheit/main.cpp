/*
* name: Armando Orozco
* date: 09/18/23
* description: Chapter3 - Challenge 12. Celcius to Fahrenheit
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Chapter3 - Challenge 12. Celsius to Fahrenheit by Armando Orozco 09/18/23\n ";
	cout << "----------------------------------------------------------------------- ";

	cout << "\nEnter a Celsius temperature: ";

	double celsius;
	cin >> celsius;

	double fahrenheit = (1.8 * celsius) + 32;//calculate farenheit
	
	cout << setprecision(2) << fixed << showpoint
		<< "\nCelsius temperature    : " << celsius << " degree(s)"
		<< "\nFahrenheit temperature = " << fahrenheit << " degree(s)\n";



	return 0;
}