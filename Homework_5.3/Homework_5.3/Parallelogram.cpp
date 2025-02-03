#include "Parallelogram.h"

Parallelogram::Parallelogram(double a, double b, double A, double B) : Quadrilateral(a, b, a, b, A, B, A, B) {}

void Parallelogram::printInfo() {
	cout << "Параллелограмм:\nСтороны: a=" << a << " b=" << b << " c=" << c << " d=" << d <<
		"\nУглы: A=" << A << " B=" << B << " C=" << C << " D=" << D << endl;
	cout << endl;
}