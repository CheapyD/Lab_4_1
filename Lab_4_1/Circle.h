#pragma once
#include "Figure.h"

class Circle : public Figure
{
public:
	Circle();
	Circle(int a);

	virtual double Square();
	virtual double Perimeter();
	virtual ostream& Print(ostream& out) const;
};