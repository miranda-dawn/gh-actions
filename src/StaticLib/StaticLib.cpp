// StaticLib.cpp : Defines the entry point for the application.
//

#include "StaticLib.h"
#include <iostream>
#include <vector>

using namespace std;

void helloWorld()
{
	// Use some C++20 features so I know it's honoring the C++ standard variable in CMake cross-platform
	vector< int > ints = { 5, 4, 3, 2, 1 };
	ints.clear();
	for ([[maybe_unused]] auto n : ints)
	{
		cout << "...";
	}
	cout << "Hello world!" << endl;
	
}
