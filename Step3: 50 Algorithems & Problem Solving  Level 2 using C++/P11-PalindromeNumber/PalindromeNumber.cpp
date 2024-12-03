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

int ft_OrderNumber(int nbr) {
    int remiender;
    int OrderNumber = 0;
    while (nbr > 0) {
        remiender = nbr % 10;
        nbr /= 10;
        OrderNumber = OrderNumber * 10 + remiender;
    }
    return OrderNumber;
}

void ft_chekIsPalindromeNumber(int number) {
    if (ft_ReversOrderOfDigit(number) == ft_OrderNumber(ft_ReversOrderOfDigit(number)))
        cout << "Yes, it is a Palindrom numbers.\n";
    else
        cout << "No, it is not a Palindrom numbers.\n";

}

int main() {
    ft_chekIsPalindromeNumber(ft_readPositifNumber("Please Positif enter number : "));
    return 0;
}