#include <iostream>
#include <climits>

using namespace std;

int main()
{
    short int age;
    short int num1 = 20, num2 = 30, num3 = 10;
    cout << "Enter 3 number to see the sum\n";
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cout << "_________________\n\n";
    cout << "Total = " << num1 + num2 + num3 << endl;
    cout << "\nenter your age\n";
    cin >> age;
    cout << "after 5 years you will be " << age + 5 << " years old\n";
    cout << "************************************";
    cout << "range of char" << CHAR_MIN << "  " << CHAR_MAX << endl;
    cout << "range of int" << INT_MIN << "  " << INT_MAX << endl;
    cout << "range of short" << SHRT_MIN << "  " << SHRT_MAX << endl;
    cout << "range of LONG long" << LLONG_MIN << "  " << LLONG_MAX << endl;
    cout << "range of char" << CHAR_MIN << "  " << CHAR_MAX << "\n";
    return 0;

}