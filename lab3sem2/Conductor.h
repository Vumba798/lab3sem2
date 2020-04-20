#pragma once
#include <iostream>

class Conductor
{
protected:
	double e0 = 8.85e-12;
	double e;
	double capacity;
public:
	explicit Conductor(double eps) : //модификатор explicit является излишним, ведь мы не можем создать объект абстрактного класса
		e(eps) {};
	virtual double calculate() = 0;
	virtual void print() const = 0;
};

