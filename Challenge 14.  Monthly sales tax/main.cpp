/*
* name: Armando Orozco
* date: 09/18/23
* description: Chapter3 - Challenge 14. Monthly sales tax
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//declare constants
	const double COUNTY_TAX = .02;
	const double STATE_TAX = .04;

	cout << "Chapter3 - - Challenge 14. Monthly sales tax by Armando Orozco 09/18/23\n ";
	cout << "----------------------------------------------------------------------- ";

	cout << "\n\nEnter the month: ";

	string month;
	cin >> month;

	cout << "\nEnter the total amount collected : $";
	
	double moneyCollected;
	cin >> moneyCollected;

	double product_sales = moneyCollected / 1.06;//calculate the productlases
	double totalCountyTax = product_sales * COUNTY_TAX;//calculate the total percentage of county tax
	double totalStateTax = product_sales * STATE_TAX;//calculate the total percentage of state tax

	cout << setprecision(2) << fixed << showpoint
		<< "\nMonth: " << month << '\n'
		<< "--------------------------------------------"
		<< "\nTotal Collected  : $ " << setw(10) << right << moneyCollected
		<< "\nSales            : $ " << setw(10) << right << product_sales
		<< "\nCounty Sales Tax : $ " << setw(10) << right << totalCountyTax
		<< "\nState Sales Tax  : $ " << setw(10) << right << totalStateTax
		<< "\nTotal Sales Tax  : $ " << setw(10) << right << totalCountyTax + totalStateTax;

	return 0;
}