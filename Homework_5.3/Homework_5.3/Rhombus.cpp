#include "Rhombus.h"

Rhombus::Rhombus(double a, double A, double B) : Quadrilateral(a, a, a, a, A, B, A, B){}

void Rhombus::printInfo() {
	cout << "Ромб:\nСтороны: a=" << a << " b=" << b << " c=" << c << " d=" << d <<
		"\nУглы: A=" << A << " B=" << B << " C=" << C << " D=" << D << endl;
	cout << endl;
}