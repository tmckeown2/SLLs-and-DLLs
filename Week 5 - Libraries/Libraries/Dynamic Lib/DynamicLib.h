#pragma once

#ifdef DYNAMICLIB_EXPORTS  
#define DYNAMICLIB_API __declspec(dllexport)   
#else  
#define DYNAMICLIB_API __declspec(dllimport)   
#endif  

namespace DynamicLib
{
	// This class is exported from the DynamicLib.dll  
	class Functions
	{
	public:
		// Returns a + b  
		static DYNAMICLIB_API double Add(double a, double b);

		// Returns a * b  
		static DYNAMICLIB_API double Multiply(double a, double b);

		// Returns a + (a * b)  
		static DYNAMICLIB_API double AddMultiply(double a, double b);
	};
}