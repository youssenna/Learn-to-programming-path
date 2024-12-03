/*
Write a program to ask the user to enter:
    Number1
    Number2

Then print the two numbers , then Swap the two numbers and print them

Example Inputs:
10
20

outputs =>
10
20

20
10
*/
#include <iostream>

using namespace std;

void ft_ReadNumbers(int &num1, int &num2)  {
    cout << "enter number 1 ";
    cin >> num1;
    cout << "enter number 2 ";
    cin >> num2;
}
void ft_swap(int &num1, int &num2) {
    int num3;
    num3 = num1;
    num1 = num2;
    num2 = num3;
}

void ft_printNumberAfterSwap(int num1, int num2) {

    ft_swap(num1, num2);
    cout << "number 1 = " << num1 << "\nnumber 2 = " << num2 << endl;
}

int main()
{
    int nbr1, nbr2;
    ft_ReadNumbers(nbr1, nbr2);
    ft_printNumberAfterSwap(nbr1, nbr2);
    return 0;
}