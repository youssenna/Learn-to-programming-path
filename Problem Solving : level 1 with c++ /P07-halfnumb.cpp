/*
Write a program to ask the user to enter
    Number

Then Print the “Half of the <Number> is <???>”.

Example Inputs:
60
50

outputs =>
Half of 60 is 30
Half of 50 is 25\

*/
#include <iostream>

using namespace std;

int ft_readnumber() {
    int num;
    cout << "please enter number : ";
    cin >> num;
    return num;
}

float ft_calculateHalfOfNumber(int num) {
    return (float)num / 2;
}

void ft_PrintHalfOfNumber(int num) {
    string resoult = "half of number " + to_string(num) + " is " + to_string(ft_calculateHalfOfNumber(num));
    cout << resoult << endl;
}

int main() {
    ft_PrintHalfOfNumber(ft_readnumber());
    return 0;
}