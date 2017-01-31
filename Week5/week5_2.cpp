// week5_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

void countNegative(int array[]);

int _tmain(int argc, _TCHAR* argv[])
{
	int testArray[] = {-2,0,44,12,-45,17,934,-21,67,88,91,1,0,6};
	int n = 14;

	countNegative(testArray);
	
	system("pause");
	return 0;
}

void countNegative(int bArray[])
{
	int values;
	int count = 0;

	for(int i = 0; i < 14; i++){
		//++count;
		//values = bArray[i];
	}

	cout << sizeof(bArray)/sizeof(bArray[0]) << endl;
}

