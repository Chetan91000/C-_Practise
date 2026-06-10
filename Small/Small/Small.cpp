#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() {
	string s1{}, s2{};
	cout << "Enter a name whose lenght you want o compare :" << endl;
	/*cin >> s1;*/
	getline(cin, s1);
	cout << "Enter another name whose lenght you want o compare :" << endl;
	/*cin >> s2*/;
	getline(cin, s2);
	int len1{}, len2{};
	len1 = s1.length();
	len2 = s2.length();

	if (len1 == len2) {
		cout << s1 << " and " << s2 << " are of equal lengths " << endl;
	}
	else if(len1>len2){
		cout << "The first Line is longer" << endl;
	}
	else {
		cout << " the Second Line is longer" << endl;
	}





	return 0;

}