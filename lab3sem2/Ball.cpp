#include "Ball.h"
#define pi 3.141592

using std::endl;
using std::cin;
using std::cout;

double Ball::calculate() {
	return 4 * pi * e * e0 * r;
}

void Ball::print() const {
	cout << endl << "BALL PRINT" << endl;
	cout << "Eps0 = \t\t" << e0 << endl;
	cout << "Eps = \t\t" << e << endl;
	cout << "Radius = \t" << r << endl;
	cout << "Capacity = \t" << capacity << endl;
}