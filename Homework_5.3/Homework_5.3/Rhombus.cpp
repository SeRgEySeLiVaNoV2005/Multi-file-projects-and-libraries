#include "Rhombus.h"

Rhombus::Rhombus(double a, double A, double B) : Quadrilateral(a, a, a, a, A, B, A, B){}

void Rhombus::printInfo() {
	cout << "����:\n�������: a=" << a << " b=" << b << " c=" << c << " d=" << d <<
		"\n����: A=" << A << " B=" << B << " C=" << C << " D=" << D << endl;
	cout << endl;
}