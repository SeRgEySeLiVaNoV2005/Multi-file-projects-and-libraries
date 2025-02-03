#pragma once

#include "Quadrilateral.h"

class Square : public Quadrilateral {
public:
	Square(double a);
	void printInfo() override;
};