#include <iostream>
#include <string>

using namespace std;

int main() {
	string name;
	string num1;
	string num2;

	cout << "Please enter string 1 ?\n";
	getline( cin, name);
	cout << "Please enter string 2 ?\n";
	getline(cin, num1);
	cout << "Please enter string 3 ?\n";
	getline(cin, num2);
	cout << "************************\n";
	cout << "the lengh of string 1 is " << name.length() << "\n";
	cout << "caracter at 0, 2, 4, 7 are : " << name[0] << " " << name[2] << " " << name[4] << " " << name[7] << " " << "\n";
	cout << "concatenating string 2 and string 3 is : " << num1 + num2 << "\n";
	cout << num1 << " * " << num2 << " = " << stoi(num1) * stoi(num2) << endl;

}