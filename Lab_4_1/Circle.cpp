#include "Circle.h"

Circle::Circle()
	: Figure(0)
{}

Circle::Circle(int a)
	: Figure(a)
{}

double Circle::Square()
{
	const double PI = atan(1) * 4;
	double S = PI * GetA() * GetA();
	return S;
}

double Circle::Perimeter()
{
	const double PI = atan(1) * 4;
	double P = 2 * PI * GetA();
	return P;
}

ostream& Circle::Print(ostream& out) const
{
	out << "Radius = " << GetA() << endl;
	out << "Circle is visible" << endl;
	return out;
}