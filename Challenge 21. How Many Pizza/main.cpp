/*
* name: Armando Orozco
* date: 09/18/23
* description: Chapter3 - Challenge 21. How Many Pizza - Pizza Pi
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	//declare constant
	const double PI = 3.14159;
	const double EACH_SLIDE = 14.125;
	const int SLIDES_PER_PEOPLE = 4;

	cout << "Chapter3 -  Challenge 21. How many Pizza by Armando Orozco 09/18/23\n";
	cout << "----------------------------------------------------------------------- ";

	cout << "\n\nEnter the number of people: ";
	
	int people;
	cin >> people;

	cout << "Enter the diameter of the pizza in inches : ";

	double diameter;
	cin >> diameter;

	double area = PI * pow(diameter / 2, 2);//calculate area

	double numberOfSlices = area / EACH_SLIDE;//calculate the slides in each pizza

	double slicesNeeded = people * SLIDES_PER_PEOPLE;//calculate the slide we need to meet the requirements 

	double numberOfPizza = numberOfSlices / slicesNeeded;//calculate the number of pizzas we need to order

	cout << showpoint << fixed << setprecision(2);

	cout << "\nThe number of slice(s) per pizza: " << numberOfSlices << "\n"
		<< "The number of pizza(s) to order : " << numberOfPizza << '\n';

	return 0;
}