/*
Write a program to Sum even numbers from 1 to N.

Input
10

Outputs
30
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

void ft_CalcEvenNbrSumUsingWhileLoop(int nbr) {
    int sum = 0;
    int i = 0;
    while (i <= nbr) {
        sum = sum + i;
        i = i+2;
    }
    cout << sum << endl;
}

int main() {
    ft_ask();
    ft_CalcEvenNbrSumUsingWhileLoop(ft_ReadNbr());
    return 0;
}