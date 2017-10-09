// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int x;
	int y;

	cout << "Enter x: ";
	cin >> x;


	cout << "Enter y: ";
	cin >> y;

	cout << "x: " << x << endl;
	cout<< "y: " << y << endl << endl;

	cout << "Sum: " << x + y << endl;
	cout << "Odds: " << x - y << endl;
	cout << "Composition: " << x * y << endl;
	cout << "Division: " << x / y << " , " << x % y << endl << endl;
	_getch();
	return 0;

}

