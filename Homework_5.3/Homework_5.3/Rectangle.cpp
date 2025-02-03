#include "Rectangle.h"

Rectangle::Rectangle(double a, double b) : Quadrilateral(a, b, a, b, 90, 90, 90, 90){}

void Rectangle::printInfo() {
	cout << "Прямоугольник:\nСтороны: a=" << a << " b=" << b << " c=" << c << " d=" << d <<
		"\nУглы: A=" << A << " B=" << B << " C=" << C << " D=" << D << endl;
	cout << endl;
}