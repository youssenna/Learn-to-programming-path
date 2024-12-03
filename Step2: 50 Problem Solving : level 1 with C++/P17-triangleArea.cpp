/*
Write a program to calculate triangle area then print it on the screen.
The user should enter:
a
h
you can find rolation in code

Example Inputs:
10
8

Outputs =>
40
*/
#include <iostream>

using namespace std;

void ft_ReadTriangleInfo(float &a, float &haute) {
    cout << "entree the 9a3ida of triangle : ";
    cin >> a;
    cout << "entree the haut of triangle : ";
    cin >> haute;
}

float ft_calculeTriangleArea(int a, int haute) {
    return float(a / 2 * haute);
}

void ft_printresoult(int area) {
    cout << "the area of rectangle is : " << area << endl;
}
int main()
{
    float a,haute;
    ft_ReadTriangleInfo(a, haute);
    ft_printresoult(ft_calculeTriangleArea(a, haute));
    return 0;
}