#include <iostream>
#include <string>

using namespace std;

void ft_form() {
	string name;
	int age;
	string city;
	string contry;

	cout << "enter your Name : ";
	getline(cin, name);
	cout << "enter your Age : ";
	cin >> age;
	cout << "enter your Contry : ";
	cin.ignore(1, '\n');
	getline(cin, contry);
	cout << "enter your City : ";
	cin.ignore(1, '\n');
	getline(cin, city);
	cout << "*********************************\n";
	cout << "*    Name : " << name << "                *\n";
	cout << "*    Age : " << age << "                    *\n";
	cout << "*    City : " << city << "                   *\n";
	cout << "*    Contry : " << contry << "                 *" << endl;
	cout << "*********************************\n";
};
void ft_squar() {
	cout << "********\n";
	cout << "********\n";
	cout << "********\n";
	cout << "********\n";
	cout << "********\n";
};

void ft_h() {
	cout << "*      *\n";
	cout << "*      *\n";
	cout << "********\n";
	cout << "*      *\n";
	cout << "*      *\n";
};

void ft_loveprog() {
	cout << "I Love Programming!\n\nI promise to be the best developwer in the world!\n\nI know it will take some time to practice, but I will achieve my gool\n\nBest Regards." << endl << "YOUSSEF ENNAJAR" << "\n";
};

int main()
{
	ft_form();
	ft_squar();
	ft_loveprog();
	ft_h();
	return 0;
}
