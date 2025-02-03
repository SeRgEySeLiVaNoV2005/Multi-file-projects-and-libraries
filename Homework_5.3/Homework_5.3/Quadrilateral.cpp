#include "Quadrilateral.h"

Quadrilateral::Quadrilateral(double aS, double bS, double cS, double dS, double AA, double BA, double CA, double DA) :
	a{ aS }, b{ bS }, c{ cS }, d{ dS }, A{ AA }, B{ BA }, C{ CA }, D{ DA } {}

void Quadrilateral::printInfo() {
	cout << "Четырёхугольник:\nСтороны: a=" << a << " b=" << b << " c=" << c << " d=" << d <<
		"\nУглы: A=" << A << " B=" << B << " C=" << C << " D=" << D << endl;
	cout << endl;
}