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

int ft_SumOfDigits(int nbr) {
    int remainder = 0;
    int sum = 0;
    while (nbr > 0) {
        remainder =  nbr % 10; 
        nbr /= 10;
        sum += remainder;
    }
    return sum;
}

int main() {
    cout <<
    ft_SumOfDigits(ft_readPositifNumber("Plese enter a positif number : ")) << " = Sum Of digits" <<
    endl;
    return 0;
}