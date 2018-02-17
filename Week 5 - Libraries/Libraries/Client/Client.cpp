// Client.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "DynamicLib.h"

using namespace std;

int main()
{
	double a = 7.4;
	int b = 99;

	cout << "a + b = "       << DynamicLib::Functions::Add        (a, b) << endl;
	cout << "a * b = "       << DynamicLib::Functions::Multiply   (a, b) << endl;
	cout << "a + (a * b) = " << DynamicLib::Functions::AddMultiply(a, b) << endl;

	system("pause");

    return 0;
}

