#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Func.h"



int main() {
	double total = add(3.5, 4.4);
	cout << " 3.5 + 4.4 is " << total << endl;

	auto totalThree = add(3.5, 5, 4.5);
	cout << " 3.5 + 5 + 4.5 is " << totalThree << endl;

	if (test(true) == true) {
		cout << " True passes the test " << endl;
			
	}
	if (test(3.8)) {
		cout << " 3.8 passes the test " << endl;
	}

	return 0;
}