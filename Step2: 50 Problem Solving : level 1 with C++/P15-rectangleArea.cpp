/*
Write a program to calculate rectangle area and print it on the screen.
    Area = a * b

Example Inputs:
10
20

outputs =>
200
*/
#include <iostream>

using namespace std;

void ft_readInfo(int &a, int &b) {
    cout << "entree the long of rectangle : ";
    cin >> a;
    cout << "entree the 3rd of rectangle : ";
    cin >> b;
}

int ft_CalculRectangleArea(int a, int b) {
    return a * b;
}

void ft_printResult(int a, int b) {
    int AreaRectangle = ft_CalculRectangleArea(a, b);
    cout << AreaRectangle << endl;
}

int main()
{
    int a,b;
    ft_readInfo(a, b);
    ft_printResult(a, b);
    return 0;
}