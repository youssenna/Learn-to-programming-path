/*
Write a program to calculate Circle area inscribed in a square, then print it on the screen.

The use should enter:
A

Example Inputs:
10

Outputs =>
78.54
*/
#include <iostream>
#include <cmath>

using namespace std;

float ft_circularea(int Diametr) {
    const float PI = 3.14;
    return ( PI * pow(Diametr,2) ) / 2;
}

int ft_ReadAOfSquar() {

    int A;

    cout << "entree the A of square : ";
    cin >> A;
    return A;
}

void ft_printAreaOfCircle(int A) {

    float AreaCircle = ft_circularea(A);
    cout << "the area of circule is : " << ceil(AreaCircle) << endl;
}

int main()
{
    ft_printAreaOfCircle(ft_ReadAOfSquar());
    return 0;
}