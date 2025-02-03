#pragma once

#include "Quadrilateral.h"

class Rhombus : public Quadrilateral {
public:
	Rhombus(double a, double A, double B);
	void printInfo() override;
};