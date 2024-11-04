/*
Write a program to calculate circle area then print it on the screen.

The use should enter:
r

Example Inputs:
5

Outputs =>
78.54
*/
#include <iostream>
#include <cmath>

using namespace std;

float ft_circularea(int r) {
    const float PI = 3.14;
    return PI * pow(r, 2);
}

int ft_readReduisOfCircul() {
    int reduis;

    cout << "enter the redus of curcule : ";
    cin >> reduis;
    return reduis;
}

void ft_printAreaOfCircule(int reduis) {


    float Area = ft_circularea(reduis);

    cout << "area of circule = " << ceil(Area) << endl;
};
int main()
{
    ft_printAreaOfCircule(ft_readReduisOfCircul());
    return 0;
}