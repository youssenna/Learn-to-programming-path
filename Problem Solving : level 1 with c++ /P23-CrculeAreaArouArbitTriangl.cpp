/*
Write a program to calculate circle area circle described around an arbitrary triangle, 
then print it on the screen.

The use should enter:
a
b
c

Example Inputs:
5
6
7

Outputs =>
40.088
*/
#include <iostream>
#include <cmath>

using namespace std;

int* ft_readInfoOfTriangle(int legsOfTriangle[3]) {
    cout << "notes : leg 3 > leg 1 > leg 2\n";
    int i = 0;
    while (i <= 2) {
        cout << "entre leg " << i+1 << " of triangle : ";
        cin >> legsOfTriangle[i];
        i++;
    }
    return legsOfTriangle;
}

float ft_circulAreaCalculation(int LegsOfTriangle[3]) {
    const float PI = 3.14;
    float Ex1 = float((LegsOfTriangle[0] + LegsOfTriangle[1] + LegsOfTriangle[2]) / 2);
    float Ex2 = float((LegsOfTriangle[0] * LegsOfTriangle[1] * LegsOfTriangle[2]) / (4 * sqrt(Ex1 * (Ex1 - LegsOfTriangle[0]) * (Ex1 - LegsOfTriangle[1]) * (Ex1 - LegsOfTriangle[2]))));
    return PI * pow(Ex2, 2);
}

void ft_printCirculeArea(float AreaCircle) {
    cout << "the area of circule is : " << round(AreaCircle) << endl;

};
int main()
{
    int LegsOfTriangle[3];
    ft_readInfoOfTriangle(LegsOfTriangle);
    ft_printCirculeArea(ft_circulAreaCalculation(LegsOfTriangle));
    return 0;
}