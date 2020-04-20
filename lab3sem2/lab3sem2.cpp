#include <iostream>
#include <vector>
#include "Ball.h"
#include "Capacitor.h"

using std::endl;
using std::cin;
using std::cout;

int main(){
	std::vector<Conductor*> conductorVec;

	conductorVec.push_back(new Capacitor(5.135, 0.505, 0.3333));
	conductorVec.push_back(new Capacitor(1.00005, 0.3, 24.75));
	conductorVec.push_back(new Capacitor(500, 0.32, 0.456));
	conductorVec.push_back(new Ball(3.45, 10));
	conductorVec.push_back(new Ball(4.56, 20.5));
	conductorVec.push_back(new Ball(2.5, 5.5555));

	for (auto* p : conductorVec) {
		p->print();
	}

	double x, y, z;
	x = 1;
	y = 2;
	z = 3;
	cout << x << y << z;
}
