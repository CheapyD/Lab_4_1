#pragma once
#include "Figure.h"

class Rectangle : public Figure
{
private:
	int b;

public:
	Rectangle();
	Rectangle(int a, int b);

	int GetB() { return b; }
	void SetB(int value) { b = value; }

	virtual double Square();
	virtual double Perimeter();
	virtual ostream& Print(ostream& out) const;
};