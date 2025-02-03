#include "Square.h"

Square::Square(double a) : Quadrilateral(a, a, a, a, 90, 90, 90, 90) {}

void Square::printInfo() {
	cout << "Квадрат:\nСтороны: a=" << a << " b=" << b << " c=" << c << " d=" << d <<
		"\nУглы: A=" << A << " B=" << B << " C=" << C << " D=" << D << endl;
	cout << endl;
}