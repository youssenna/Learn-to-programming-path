/*
Write a program to ask the user to enter:
    Number

Then Print the Number^2 , Number^3 , Number^4

Example Inputs:
3

outputs =>
9
27
81
*/
#include <iostream>
#include <cmath>

using namespace std;

int ft_readNumber() {
    int num;
    cout << "enter a number : ";
    cin >> num;
    return num;
}
int ft_power2(int num) {
    return pow(num, 2);
};

int ft_power3(int num) {
    return pow(num, 3);
};

int ft_power4(int num) {
    return pow(num, 4);
};

void ft_printResoult(int num) {
    int PowerTwo = ft_power2(num), PowerThree = ft_power3(num), Powerfour = ft_power4(num);
    cout << round(PowerTwo) << "\n" << round(PowerThree) << "\n" << round(Powerfour) << endl;
};
int main()
{
    ft_printResoult(ft_readNumber());
    return 0;
}