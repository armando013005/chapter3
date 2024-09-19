/*
* name: Armando Orozco
* date: 09/18/23
* description: Chapter3 -  Challenge 17. Math Tutor
*/

#include <iostream>
#include <iomanip>
#include <random>

using namespace std;

int main()
{

	srand(time(0));

	cout << "Chapter3 - Challenge 17. Math Tutor \n";
	cout << "----------------------------------------------------------------------- \n";

	int number1 = rand() % 100 + 1;// random number from 1...100
	int number2 = rand() % 100 + 1;

	cout << setw(12) << right << number1 << '\n';
	cout << setw(9) << "+";
	cout << setw(3) << right << number2 << '\n';
	cout << setw(14) << "------\n";
	cout << setw(13) << " ? ";

	cout << "\nPlease work on the problem. When ready press a key to check your answer... ";
	
	char ch;
	cin.get(ch);

	cout << "\nthe correct answer is : " << number1 + number2 << '\n';
	
	return 0;
}