#pragma once
#include "Conductor.h"
class Capacitor : public Conductor {
private:
	double d;
	double s;
public:
	inline Capacitor(double eps, double range, double area) : 
		Conductor(eps),
		d(range),
		s(area)
	{
		capacity = calculate();
	};
	
	double calculate() override final;
	void print() const override final;
};

