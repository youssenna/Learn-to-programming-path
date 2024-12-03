/*
Write a program to print numbers from 1 to N.

Input
10

Outputs =>
1
2
3
4
5
6
7
8
9
10
*/
#include <iostream>
// #include <stdio.h>
using namespace std;

void ft_ask() {
    cout << "please enter number\n";
}

int ft_readNbr() {
    int nbr;
    cin >> nbr;
    return nbr;
}

void ft_forloop(int number) {
    int i = 1;
    while (i <= number) {
        // printf("%d\n",i);
        cout << i << endl;
        i++;
    }
}

int main() {
    ft_ask();
    ft_forloop(ft_readNbr());
}