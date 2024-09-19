/*
* name: Armando Orozco
* date: 09/18/23
* description: Chapter3 - Challenge 25. Word game
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	cout << "Chapter3 -  Challenge 25. Word game by Armando Orozco 09/18/23\n";
	cout << "----------------------------------------------------------------------- ";

	cout << "\n\nEnter your name : ";

	string name;
	getline(cin, name);

	cout << "Enter your age : ";
	
	int age;
	cin>>age;
	cin.ignore();//ignore next input to avoid colliding with the net line

	cout << "Enter the name of your city : ";

	string city;
	getline(cin, city);

	cout << "Enter the name of your college : ";

	string college;
	getline(cin, college);

	cout << "Enter your profession : ";

	string profession;
	getline(cin, profession);

	cout << "Enter the type of your pet : ";

	string animal;
	getline(cin, animal);

	cout << "Enter your pet's name: ";

	string petName;
	getline(cin, petName);

	cout << "\nThere once was a person named " << name << " who live in " << city << '.'
		<< " At the age of " << age << ", " << name << " went to college at " << college << "."
		<< name << " graduated and went to work as a " << profession << "."
		<< " Then, " << name << " adopted a(n) " << animal << " named " << petName << "."
		<< " They both lived happily ever after!\n";

	return 0;
}