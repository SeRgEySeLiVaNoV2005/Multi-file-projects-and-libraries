#include "RightTriangle.h"

RightTriangle::RightTriangle(double a, double b, double c, double A, double B) : Triangle(a, b, c, A, B, 90) {}

void RightTriangle::printInfo() {
	cout << "������������� �����������:\n�������: a=" << a << " b=" << b << " c=" << c
		<< "\n����: A=" << A << " B=" << B << " C=" << C << "\n\n";
}