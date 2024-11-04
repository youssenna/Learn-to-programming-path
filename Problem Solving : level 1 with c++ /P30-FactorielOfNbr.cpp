/*
Write a program to calculate factorial of N!

Example: factorial of 6 => 6 x 5 x 4 x 3 x 2 x 1 = 720

Note: User should only enter positive number, other wise reject it and ask to enter again

Input
6

Outputs =>
720
*/
#include <iostream>

using namespace std;

void ft_ask() {
    cout << "please enter nomber\n";
}

int ft_readnbr() {
    int nbr;
    cin >> nbr;
    return nbr;
}

void ft_CalcFactorielOfNbr(int nbr) {
    int fac;
    if (nbr < 0)
    {
        int i = 0;
        while (nbr < 0) {
            cout << "please entree nomber great than 0\n";
            nbr = ft_readnbr();
            i++;
        }
    }
    if (nbr == 0)
        fac = 0;
    else
    {
        fac = 1;
        int i = 1;
        do {
            fac = fac * i;
            i++;
        } while (i <= nbr);
    }
    cout << "fac = " << fac << endl;
}

int main() {
    ft_ask();
    ft_CalcFactorielOfNbr(ft_readnbr());
    return 0;
}