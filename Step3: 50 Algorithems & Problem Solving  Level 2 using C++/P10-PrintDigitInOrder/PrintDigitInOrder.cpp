#include <iostream>

using namespace std;

int ft_readPositifNumber(string message) {
    int nbr;
    while (nbr <= 0) {
        cout << message;
        cin >> nbr;
    }
    return nbr;
}

int ft_ReversOrderOfDigit(int nbr) {
    int ReversedNumber = 0;
    int remiender = 0;
    while (nbr > 0) {
        remiender = nbr % 10; 
        nbr /= 10;
        ReversedNumber = ReversedNumber * 10 + remiender;
    }
    return ReversedNumber;
}

void ft_OrderNumber(int nbr) {
    while (nbr > 0) {
        cout << nbr % 10 << endl; 
        nbr /= 10;
    }
}

int main() {
    ft_OrderNumber(ft_ReversOrderOfDigit(ft_readPositifNumber("Plese enter a positif number : ")));
    return 0;
}