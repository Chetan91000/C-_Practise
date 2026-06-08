#include<stdio.h>
#include<iostream>
using namespace std;
int main() {
	[[maybe_unused]] double pi { 3.144674 };
	[[maybe_unused]] double gravity { 9.8 };
	[[maybe_unused]] double phi  {1.61803};

	cout << pi << '\n';
	cout << gravity << '\n';
}