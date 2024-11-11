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

void ft_ReversOrderOfDigit(int nbr) {
    while (nbr > 0) {
        cout << nbr % 10 << endl; 
        nbr /= 10;
    }
}

int main() {
    ft_ReversOrderOfDigit(ft_readPositifNumber("Plese enter a positif number : "));
    return 0;
}