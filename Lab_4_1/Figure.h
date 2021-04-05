#pragma once
#include <iostream>
#include <typeinfo>

using namespace std;

class Figure
{
private:
	int a;
public:
	Figure();
	Figure(int a);

	int GetA()const { return a; } 
	void SetA(int value) { a = value; }

	virtual double Square() = 0;
	virtual double Perimeter() = 0;
	virtual ostream& Print(ostream& out) const = 0;
};