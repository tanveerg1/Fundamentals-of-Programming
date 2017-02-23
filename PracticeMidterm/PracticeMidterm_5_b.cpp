// PracticeMidterm_5_b.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x, y;
	int count = 0;
	ifstream inFile;
	ofstream outFile;
	outFile.open("dice.txt");

	for (int i = 0; i < 3000; i++)
	{
		outFile << rand()%6+1 << "  " << rand()%6+1 << endl;
	}

	inFile.open("dice.txt");

	for (int i = 0; i < 3000; i++)
	{
		inFile >> x >> y;

		if (x == y && y == x)
		{
			count++;
		}
	}

	cout << "Doubles rolled: " << count << endl;
	inFile.close();
	outFile.close();
	system("pause");
	return 0;
}

