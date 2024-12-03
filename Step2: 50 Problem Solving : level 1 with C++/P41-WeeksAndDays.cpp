/*
Write a program to read a NumberOfHours and calculates the number of weeks, and days included in that 
number

Input
365

Outputs =>
2.17 Weeks
15.20 Days
*/
#include <iostream>

using namespace std;

int ft_ReadNumberOfHours() {
    int Hours;
    cout << "Please enter number of hours : ";
    cin >> Hours;
    return Hours;
}

int ft_HoursToDays(int Hours) {
    return Hours / 24;
}

int main() {
    int Hours = ft_ReadNumberOfHours();
    cout << "number of Days is :" << ft_HoursToDays(Hours) << endl;
    cout << "number of week is :" << ft_HoursToDays(Hours) / 7 << endl;
    return 0;
}