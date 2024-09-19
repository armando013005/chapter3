/*
* name: Armando Orozco
* date: 09/18/23
* description: Chapter3 - Challenge 3. Test Average
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Chapter3 - Challenge 3. Test Average by Armando Orozco 09/18/23\n ";
	cout << "----------------------------------------------------------------------- ";

	cout << "\nEnter test score#1 : ";
	double score1;
	cin >> score1;

	cout << "Enter test score#2 : ";
	double score2;
	cin >> score2;

	cout << "Enter test score#3 : ";
	double score3;
	cin >> score3;

	cout << "Enter test score#4 : ";
	double score4;
	cin >> score4;

	cout << "Enter test score#5 : ";
	double score5;
	cin >> score5;

	cout << showpoint << setprecision(2) << fixed;
	cout << "\nAverage test score = " << (score1 + score2 + score3 + score4 + score5) / 5 << '\n';//calculate average

	return 0;
}