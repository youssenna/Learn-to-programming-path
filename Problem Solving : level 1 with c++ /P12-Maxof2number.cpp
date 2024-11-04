/*
Write a program to ask the user to enter:
    Number1 , Number2

Then Print the Max Number
Example Inputs:
10
20

outputs =>
20
*/
#include <iostream>

using namespace std;

void ft_readnumbers(int &num1,int &num2) {
    
    cout << "please enter first number : ";
    cin >> num1;
    cout << "please enter first number : ";
    cin >> num2;
}

int ft_chekMaxNumber(int nbr1, int nbr2) {
    int max;
    if (nbr1 > nbr2) {
        max = nbr1;
        return max;
    }
    max = nbr2;
    return max;
}

void ft_printMaxNbr(int Max) {
    cout << "max = " << Max << endl;
}
int main() {
    int num1, num2;
    ft_readnumbers(num1, num2);
    ft_printMaxNbr(ft_chekMaxNumber(num1, num2));
    return 0;
}