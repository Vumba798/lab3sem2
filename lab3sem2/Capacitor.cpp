#include "Capacitor.h"

using std::endl;
using std::cin;
using std::cout;

double Capacitor::calculate() {
	return e * e0 * s / d;
}

void Capacitor::print() const {
	cout << endl << "CAPACITOR PRINT" << endl;
	cout << "Eps0 = \t\t\t\t\t" << e0 << endl;
	cout << "Eps = \t\t\t\t\t" << e << endl;
	cout << "Range between capacitor plate = \t" << d << endl;
	cout << "Area of capacitor plate = \t\t" << capacity << endl;
}