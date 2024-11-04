/*
Write a program to Sum odd numbers from 1 to N.

Input
10

Outputs =>
25
*/
#include <iostream>

using namespace std;

void ft_ask() {
    cout << "please enter number \n";
}

int ft_ReadNbr() {
    int nbr;
    cin >> nbr;
    return nbr;
}

void ft_CalcOddNbrSumUsingWhileLoop(int nbr) {
    int sum = 0;
    int i = 1;
    while (i <= nbr)  {
        sum = sum + i;
        i = i+2;
    }
    cout << sum << endl;
}

int main() {
    ft_ask();
    ft_CalcOddNbrSumUsingWhileLoop(ft_ReadNbr());
    return 0;
}