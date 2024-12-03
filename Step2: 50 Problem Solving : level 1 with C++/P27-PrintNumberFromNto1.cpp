/*
Write a program to print numbers from 1 to N.

Input
10

outputs =>
10
9
8
7
6
5
4
3
2
1
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
    int i = number;
    while (i >= 1) {
        // printf("%d\n",i);
        cout << i << endl;
        i--;
    }
}

int main() {
    ft_ask();
    ft_forloop(ft_readNbr());
}