#include <iostream>

using namespace std;

enum enIsPrime{Prime = 1, NotPrime = 2};
int ft_ReadNbr(string Message) {
    int nbr;
    int i = 0;
    while(nbr <= 0) {
        cout << Message;
        cin >> nbr;
        i++;
    }
    return nbr;
}

enIsPrime ft_chekIsPrimeNbr(int nbr) {
    int i = 2;
    while(i <= nbr/2){
        if (nbr % i == 0)
            return enIsPrime::NotPrime;
        i++;
    }
    return enIsPrime::Prime;
}

void ft_printPrimerNumberFrom1ToN(int nbr) {
    int integers[nbr];
    int i = 1;
    cout << "this is the Primer number  from 1 to " << nbr << endl;
    while(i <= nbr) {
        if (ft_chekIsPrimeNbr(i) == enIsPrime::Prime)
            cout << i << endl;
        i++;
    }
}

int main() {
    ft_printPrimerNumberFrom1ToN(ft_ReadNbr("enter number : "));
}