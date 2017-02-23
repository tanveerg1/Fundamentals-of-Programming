// PracticeMidterm_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x, y;
	int count_1 = 0;
	int count_2 = 0;
	int count_3 = 0;
	int count_4 = 0;
	int count_5 = 0;
	ifstream inFile;
	ofstream outFile;
	outFile.open("plane.txt");
	srand(time(NULL));
	
	
	for (int i = 0; i < 1000; i++)
	{

		outFile << rand()%201-100 << "  " << rand()%201-100 << endl;
	}
	//cout << x << "     " << y << endl;
	
	inFile.open("plane.txt");

	for (int i = 0; i < 1000; i++)
	{
		inFile >> x >> y;
		if (x > 0 && y > 0)
		{
			count_1++;
		}
		if (x < 0 && y > 0)
		{
			count_2++;
		}
		if (x < 0 && y < 0)
		{
			count_3++;
		}
		if (x > 0 && y < 0)
		{
			count_4++;
		}
		if (x == 0 && y == 0)
		{
			count_5++;
		}
		if (x == 0 || y == 0)
		{
			count_5++;
		}
	}
	cout << "Quadrant 1: " << count_1 << endl;
	cout << "Quadrant 2: " << count_2 << endl;
	cout << "Quadrant 3: " << count_3 << endl;
	cout << "Quadrant 4: " << count_4 << endl;
	cout << "Quadrant 5: " << count_5 << endl;

	inFile.close();
	outFile.close();
	system("pause");
	return 0;
}

