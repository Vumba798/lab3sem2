#pragma once
#include "Conductor.h"
class Ball : public Conductor{
private:
	double r;
public:
	inline Ball(double eps, double rad) :  
		r(rad),
		Conductor(eps)
	{
		capacity = calculate();
	};
	double calculate() override final;
	void print() const override final;
};

