#include "Square.h"

Square::Square(double a) : Quadrilateral(a, a, a, a, 90, 90, 90, 90) {}

void Square::printInfo() {
	cout << "�������:\n�������: a=" << a << " b=" << b << " c=" << c << " d=" << d <<
		"\n����: A=" << A << " B=" << B << " C=" << C << " D=" << D << endl;
	cout << endl;
}