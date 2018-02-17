// DynamicLib.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "DynamicLib.h"

namespace DynamicLib
{
	double Functions::Add(double a, double b)
	{
		return a + b;
	}

	double Functions::Multiply(double a, double b)
	{
		return a * b;
	}

	double Functions::AddMultiply(double a, double b)
	{
		return a + (a * b);
	}
}