#include<iostream>
using std::cout;
using std::cin;
using std::endl;

double add(double a, double b) {
	return a + b;
}

double add(double a, double b, double c) {
	return a + b + c;

}

bool test(bool a) {
	return a;
}

bool test(double x) {
	return x > 0;

}

int main() {
	double total = add(3.5, 4.4);
	cout << " 3.5 + 4.4 is " << total << endl;

	auto totalThree = add(3.5, 5, 4.5);
	cout << " 3.5 + 5 + 4.5 is " << totalThree << endl;

	if (test(true) == true) {
		cout << " True passes the test " << endl;
			
	}
	if (test(3.8)) {
		cout << "3.8 passes the test " << endl;
	}

	return 0;
}