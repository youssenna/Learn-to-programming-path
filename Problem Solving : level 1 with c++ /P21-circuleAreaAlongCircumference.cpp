/*
Write a program to calculate circle area along the circumference, then print it on the screen.

The use should enter:
L

Example Inputs:
20

Outputs =>
31.831
*/
#include <iostream>
#include <cmath>

using namespace std;

float ft_readLoangOfCircule(float &Long) {
    cout << "entree the long of cicule: ";
    cin >> Long;
    return Long;
}

float ft_circulAreaalculation(float Long) {
    const float PI = 3.14;
    return pow(Long,2) / ( 4 * PI );
}

void ft_printAreaOfCircule(float area) {
    cout << "the area of circule is : " << area << endl;
}

int main()
{
    float area;
    ft_printAreaOfCircule(ft_circulAreaalculation(ft_readLoangOfCircule(area)));
    return 0;
}