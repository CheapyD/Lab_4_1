#include "Rectangle.h"

Rectangle::Rectangle()
	: Figure(0), b(0)
{}

Rectangle::Rectangle(int a, int b)
	: Figure(a), b(b)
{}

double Rectangle::Square()
{
	double S = 1.0 * GetA() * b;
	return S;
}

double Rectangle::Perimeter()
{
	double P = 2 * (GetA() + b * 1.0);
	return P;
}

ostream& Rectangle::Print(ostream& out) const
{
	out << "Wide = " << GetA() << endl;
	out << "Length = " << b << endl;
	out << "Rectangle is visible" << endl;
	return out;
}