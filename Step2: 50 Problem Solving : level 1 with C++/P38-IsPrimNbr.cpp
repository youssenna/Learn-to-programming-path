/*
Write a program to read a number and check if it is a prime number or not.
Note: Prime number can only divide on one and on itself.

Input
5
6
3

Outputs =>
Prime
Not Prime
Prime
*/
#include <iostream>

using namespace std;

enum en_IsPrimeNummber {Prime = 1,NotPrime = 2 };
int ft_readNumber() {
    int nbr;
    cout << "enter number great than 0 : ";
    cin >> nbr;
    return nbr;
}

int ft_chekNumberIsGreatThan0(int nbr) {
    int i = 0;
    while (nbr <= 0) {
        nbr = ft_readNumber();
        i++;
    }
    return nbr;
}

en_IsPrimeNummber ft_chekIfPrimerNumber(int nbr) {
    int i = 1;
    while (i < nbr / 2 )
    {
        i++;
        if (nbr % i == 0)
            return en_IsPrimeNummber::NotPrime;
    }
    return en_IsPrimeNummber::Prime;
}

string ft_verifiedAndPrintResoult(en_IsPrimeNummber isPrimer) {
    if (isPrimer == en_IsPrimeNummber::Prime)
        return " this number is Primer\n";
    else 
        return " this number is not Primer\n";
}

int main() {
    cout << ft_verifiedAndPrintResoult(ft_chekIfPrimerNumber(ft_chekNumberIsGreatThan0(ft_readNumber())));
    return 0;
}