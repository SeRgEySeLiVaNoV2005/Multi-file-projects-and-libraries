#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(double a) : Triangle(a, a, a, 60, 60, 60) {}

void EquilateralTriangle::printInfo() {
	cout << "���������� �����������:\n�������: a=" << a << " b=" << b << " c=" << c
		<< "\n����: A=" << A << " B=" << B << " C=" << C << "\n\n";
}