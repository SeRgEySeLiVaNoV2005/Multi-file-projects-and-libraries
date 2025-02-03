#include "Header.h"

int main() {
	setlocale(LC_ALL, "Rus");
	RightTriangle rt(3, 4, 5, 30, 60);
	printInfo(&rt);

	IsoscelesTriangle it(5, 6, 50, 60);
	printInfo(&it);

	EquilateralTriangle et(7);
	printInfo(&et);

	Rectangle rect(4, 6);
	printInfo(&rect);

	Square sq(5);
	printInfo(&sq);

	Parallelogram par(4, 5, 60, 120);
	printInfo(&par);

	Rhombus rh(6, 60, 120);
	printInfo(&rh);
}