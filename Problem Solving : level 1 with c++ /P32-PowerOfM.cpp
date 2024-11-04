/*
Write a program to ask the user to enter:
    Number
    M
Then Print the Number^M

Example Inputs:
2
4

Outputs =>
16
*/
#include <iostream>
#include <cmath>

using namespace std;

void ft_readNumber(int &num, int &Power) {
    cout << "enter nummber : ";
    cin >> num;
    cout << "enter power you wante : ";
    cin >> Power;
}

int ft_power(int num, int Power) {
    int result = 1;
    if (Power == 0)
        return 1;
    int i = 1;
    do {
        result = result * num;
        i++;
    } while (i <= Power);
    return result;
}

void ft_printResoult(int num, int Power) {

    int result = ft_power(num, Power);
    
    cout << round(result) << endl;
}

int main()
{
    int num, power;
    ft_readNumber(num, power);
    ft_printResoult(num, power);
    return 0;
    
}