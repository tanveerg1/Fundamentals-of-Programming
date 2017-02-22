// PracticeMidterm_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

struct  Point
{
	double x;
	double y;
};

struct Line
{
	double m;
	double c;
};

struct Rectangle
{
	double x1;
	double y1;
	double x2;
	double y2;
};

void linePoint(Point, Point);
void intersection(Line, Line);
void in_out(Point, Rectangle);

int _tmain(int argc, _TCHAR* argv[])
{
	Point point1, point2;
	Line line1, line2;
	Rectangle rectangle;
	int choice;

	do
	{
		cout << "1: Find the line" << endl;
		cout << "2: Find the intersection between two lines" << endl;
		cout << "3: Find whether the point is inside the rectangle" << endl;
		cout << "4: Quit" << endl;
		cout << "Enter a choice" << endl;
		cin >> choice;

		while (choice > 4)
		{
			cout << "Invalid Input..." << endl;
			cout << "1: Find the line" << endl;
			cout << "2: Find the intersection between two lines" << endl;
			cout << "3: Find whether the point is inside the rectangle" << endl;
			cout << "4: Quit" << endl;
			cout << "Enter a choice" << endl;
			cin >> choice;
		}

		switch (choice)
		{
			case 1: 
				cout << "Enter point1 x value" << endl;
				cin >> point1.x;
				cout <<  "Enter point1 y value" << endl;
				cin >> point1.y;

				cout << "Enter point2 x value" << endl;
				cin >> point2.x;
				cout <<  "Enter point2 y value" << endl;
				cin >> point2.y;

				linePoint(point1, point2);
				break;
			case 2:
				cout << "Enter line1 slope(m) value" << endl;
				cin >> line1.m;
				cout << "Enter line1 intercept(c) value" << endl;
				cin >> line1.c;

				cout << "Enter line2 slope(m) value" << endl;
				cin >> line2.m;
				cout << "Enter line2 intercept(c) value" << endl;
				cin >> line2.c;

				intersection(line1, line2);
				break;
			case 3:
				cout << "Enter point x value" << endl;
				cin >> point1.x;
				cout <<  "Enter point y value" << endl;
				cin >> point1.y;

				cout << "Enter x1 value of Rectangle" << endl;
				cin >> rectangle.x1;
				cout << "Enter x2 value of Rectangle" << endl;
				cin >> rectangle.x2;
				cout << "Enter y1 value of Rectangle" << endl;
				cin >> rectangle.y1;
				cout << "Enter y2 value of Rectangle" << endl;
				cin >> rectangle.y2;

				in_out(point1, rectangle);
				break;
			case 4:
				cout << "The program is Terminating...." << endl;
				break;
		}
	} while (choice != 4);
	
	system("pause");
	return 0;
}

void linePoint(Point point1, Point point2)
{
	Line line;

	line.m = (point2.y - point1.y) / (point2.x - point1.x);

	line.c = point1.y / (line.m * point1.x);

	cout << "y = " << line.m << "x + " << line.c << endl;
}

void intersection(Line line1, Line line2)
{
	Point point;

	point.x = (line2.c - line1.c)/(line1.m - line2.m);

	point.y = (line1.m * point.x) + line1.c;

	cout << "point of intersection between two lines is:" << endl;
	cout << "x: " << point.x << "  y: " << point.y << endl; 
}

void in_out(Point point, Rectangle rectangle)
{
	if (point.x > rectangle.x1 && point.y > rectangle.y1 && point.x < rectangle.x2 && point.y < rectangle.y2)
	{
		cout << "The point is inside the rectangle" << endl;
	}else
	{
		cout << "The point is not inside the rectangle" << endl;
	}
}

