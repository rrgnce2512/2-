#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>
#include "point.h"

using namespace std;

std::ostream& operator<< (std::ostream& out, Point& c) {
	out << c.getX() << ' ' << c.getY();
	return out;
}

std::istream& operator>>(std::istream& in, Point& c)
{
	in >> c.x;
	in >> c.y;
	return in;
}


int main()
{
	setlocale(LC_ALL, "Russian");
	Point a(2, 2);
	cout << "Âûâîæó òî÷êó À: " << a << endl;
	a = a + Point(2, 3);
	cout << "A + (2, 3) = " << a << endl;
	a = a - Point(3, 3);
	cout << "A - (3, 3) = " << a << endl;
	a *= 4;
	cout << "A * 4 = " << a << endl;
	a /= 2; 
	cout << "A / 2 = " << a << endl;
	a += Point(4, 4);
	cout << "A += (4, 4) = " << a << endl;
	a -= Point(2, 1);
	cout << "A -= (2, 1) = " << a << endl;

	cout << "Òî÷êà À == (5, 5)? – ";
	if (a == Point(5, 5)) {
		cout << "yes";
	}
	else {
		cout << "no";
	}
	cout << endl << "Òî÷êà À == (4, 4)? – ";
	if (a == Point(4, 4)) {
		cout << "yes";
	}
	else {
		cout << "no";
	}
}
