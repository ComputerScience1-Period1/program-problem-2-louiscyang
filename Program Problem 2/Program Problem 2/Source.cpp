/*
Louis Yang - 9/26 1st
Program Problem 2: Take_in_Data
Create and store data in appropriate variables
*/

// Libraries
#include <iostream> // cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // _kbhit() and _getch() for pause()

// Namespaces
using namespace std; //*

//Functions()
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

//MAIN
void main() {
	// Variables
	int pie;
	float cake;
	double cakes;
	bool tart = false;
	char trat;
	int calc_1, calc_2, calc_3;

	// User Queries
	cout << "How many pies did you make? ";
	cin >> pie; //int
	cout << "How many cakes do you have supplies for? ";
	cin >> cake; //float
	cout << "How many cakes did you acutally make? ";
	cin >> cakes; //double
	cout << "Did you get tart? : Y/N ";
	cin >> trat;
	if (trat == 'Y' || trat == 'y') {
		tart = true;
	}

	//Print stored data
	cout << " You have " << pie << " pie(s). \n"; // \n creates new line
	cout << " You have supplies for " << cake << " cake(s)." << endl;
	cout << " You made " << cakes << " cakes." << '\n';
	cout << boolalpha << "The answer to if you have tart is " << tart << ". " << endl;

	//Change values
	cout << " " << endl;
	cout << "Enter a number for x : ";
	cin >> calc_1;
	cout << "Enter another number for y : ";
	cin >> calc_2;
	cout << " x + y = x + y " << endl;
	cout << " x * y = ? " << endl;
	pause();
	cout << calc_1 << " + " << calc_2 << " = " << calc_1 + calc_2 << endl;
	calc_3 = calc_1 * calc_2;
	cout << calc_1 << " * " << calc_2 << " = " << calc_3 << endl;

	pause();
}