/*
Problem #3
Write a program to ask the user to enter a number, then Print“ODD” 
if its odd, Or “Even” if its even
*/
#include <iostream>

using namespace std;

int ft_readNbr() {
    int nbr;
    cout << "enter number \n";
    cin >> nbr;
    return nbr;
}
string ft_OddOrEvennbr(int nbr) {
    int chek = nbr % 2;
    if (chek == 0) return "Even number\n";
    else return "Odd number\n";
}

int main() {
    cout << ft_OddOrEvennbr(ft_readNbr());
    return 0;
}