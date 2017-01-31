// week5_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//const int NUMBER = 100;

	double array[100];
	double sum = 0;
	double average;
	int index;

	srand(time(NULL));
	//cout << rand() % 100 + 100<< endl;

	for(int i = 0; i<100; i++){

		array[i] = rand() % 100 + 100;

		//cout << i << array[i] << endl;

		sum += array[i];
		
	}

	cout << "Total is " << sum <<  endl;

	average = sum/100;
	cout << "Average is " << average <<  endl;
	
	for(int i = 0;i < 100;i++){
		if(array[0] < array[i]){
			array[0] = array[i];
			index = i;
		}
	}
	cout << "Index " << index << " Maximum value is " << array[0] << endl;

	system("pause");
	return 0;
}

