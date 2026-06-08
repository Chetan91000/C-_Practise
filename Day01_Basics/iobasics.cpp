#include<iostream>
int main() {
	int x{}, y{};
	std::cout << "Enter two Numbers: ";
	std::cin >> x >> y;
	int sum{};
	sum = x + y;
	std::cout << "The sum of " << x << " and " << y << " is " << sum << '\n';
	return 0;
}