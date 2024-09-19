/*
* name: Armando Orozco
* date: 09/18/23
* description: Chapter3 - Challenge 7 Box office
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Chapter3 - Challenge 3. Test Average by Armando Orozco 09/18/23\n ";
	cout << "----------------------------------------------------------------------- ";
	
	cout << "\nEnter the name of the movie: ";

	string movie;
	getline(cin, movie); // ask for the movie

	cout << "Enter the number of adult tickets sold: ";

	int adultTickets;
	cin >> adultTickets;

	cout << "Enter the number of child tickets sold: ";

	int childTickets;
	cin >> childTickets;

	const double ADULT_PRICE = 10;
	const double CHILD_PRICE = 6;
	const double PROFIT_PERCENTAGE = .20; // already divided by 100

	double grossProfit = (ADULT_PRICE * adultTickets) + (CHILD_PRICE * childTickets);

	double netProfit = grossProfit *  PROFIT_PERCENTAGE;

	double amoutToDistributor = grossProfit - netProfit;
	

	cout << setprecision(2) << fixed << showpoint << right;

	cout << "\nMovie Name                 : " << movie << '\n'
		 << "Adult Tickets Sold         : " << adultTickets << '\n';
	cout << "Child Tickets Sold         : " << childTickets << '\n';

	cout << "Gross Box Office Profit    : $" << setw(9) << grossProfit;
	cout << "\nNet Box Office Profit      : $" << setw(9) << netProfit;
	cout << "\nAmount Paid to Distributor : $" << setw(9) << amoutToDistributor << '\n';

	return 0;
}