#include "Triangle.h"

Triangle::Triangle(double aS, double bS, double cS, double AA, double BA, double CA) : a{ aS }, b{ bS }, c{ cS }, A{ AA }, B{ BA }, C{ CA } {}

void Triangle::printInfo() {
	cout << "�����������:\n�������: a=" << a << " b=" << b << " c=" << c
		<< "\n����: A=" << A << " B=" << B << " C=" << C << "\n\n";
};