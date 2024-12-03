/*
Write a program to calculate circle area Inscribed in an Isosceles Triangle, 
then print it on the screen.

then print it on the screen.
a
b

Example Inputs:
20
10

Outputs =>
47.124
*/
#include <iostream>
#include <cmath>

using namespace std;

struct st_InfoTtriangle {
    float a;
    float b;
};

st_InfoTtriangle ft_ReadAandBOftriangle() {
    st_InfoTtriangle a_b;
    cout << "entre a of triangle : ";
    cin >> a_b.a;
    cout << "entre b of tringle : ";
    cin >> a_b.b;
    return a_b;
}

float ft_circularea(st_InfoTtriangle a_b) {
    const float PI = 3.14;
    return float((PI * pow(a_b.b,2) / 4) * ( 2 * a_b.a - a_b.b) / (2 * a_b.a + a_b.b));
}

void ft_printAreaOfCircule(float area) {

    cout << "the area of circule is : " <<  area << endl;
}

int main()
{
    ft_printAreaOfCircule(ft_circularea(ft_ReadAandBOftriangle()));
    return 0;
}