#include "Rectangle.h"

Rectangle::Rectangle(double a, double b) : Quadrilateral(a, b, a, b, 90, 90, 90, 90){}

void Rectangle::printInfo() {
	cout << "�������������:\n�������: a=" << a << " b=" << b << " c=" << c << " d=" << d <<
		"\n����: A=" << A << " B=" << B << " C=" << C << " D=" << D << endl;
	cout << endl;
}