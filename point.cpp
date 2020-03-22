#include <iostream>
#include "point.h"

using namespace std;

double Point::getX() {
	return x;
}
double Point::getY() {
	return y;
}

void Point::setX(double X) {
	x = X;
}
void Point::setY(double Y) {
	y = Y;
}

Point::Point() {
	setX(0);
	setY(0);
}

Point::Point(double x, double y) {
	setX(x);
	setY(y);
}

Point::Point(const Point& a) {
	setX(a.x);
	setY(a.y);
}

void Point::Print() {
	cout << getX() << ' ' << getY() << endl;
}

bool Point::operator==(const Point& b)
{
	if (x == b.x && y == b.y) {
		return true;
	}
	else {
		return false;
	}
}

const Point Point::operator+(const Point& b) const
{
	return Point(x + b.x, y + b.y);
}

const Point Point::operator-(const Point& b) const
{
	return Point(x - b.x, y - b.y);
}

Point& Point::operator+=(const Point& b)
{
	x += b.x;
	return *this;
}

Point& Point::operator-=(const Point& b) 
{
	x -= b.x;
	return *this;
}

Point& Point::operator*=(double c) 
{
	x *= c;
	y *= c;
	return *this;
}

Point& Point::operator/=(double c) 
{
	x /= c;
	y /= c;
	return *this;
}


Point::~Point() {
	//cout << "Done\n";
}
