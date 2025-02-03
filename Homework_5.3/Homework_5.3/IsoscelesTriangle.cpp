#include "IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(double a, double b, double A, double B) : Triangle(a, b, a, A, B, A) {}

void IsoscelesTriangle::printInfo() {
	cout << "Равнобедренный треугольник:\nСтороны: a=" << a << " b=" << b << " c=" << c
		<< "\nУглы: A=" << A << " B=" << B << " C=" << C << "\n\n";
}