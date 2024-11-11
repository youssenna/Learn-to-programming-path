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

int ft_ReversNumber(int nbr) {
    int remiender = 0,nbr2 = 0;
    while (nbr > 0) {
        remiender = nbr % 10; 
        nbr /= 10;
        nbr2 = nbr2 * 10 + remiender;
    }
    return nbr2;
}

int main() {
    cout << ft_ReversNumber(ft_readPositifNumber("Plese enter a positif number : ")) << " is the reverse." << endl;
    return 0;
}