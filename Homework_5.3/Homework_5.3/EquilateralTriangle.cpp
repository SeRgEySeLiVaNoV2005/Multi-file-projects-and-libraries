#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(double a) : Triangle(a, a, a, 60, 60, 60) {}

void EquilateralTriangle::printInfo() {
	cout << "Правильный треугольник:\nСтороны: a=" << a << " b=" << b << " c=" << c
		<< "\nУглы: A=" << A << " B=" << B << " C=" << C << "\n\n";
}