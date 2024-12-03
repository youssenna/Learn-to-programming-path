/*
Write a program to calculate circle area through diameter, then print it on the screen.

the relation you can find it in code

The use should enter:
D

Example Inputs:
10

output =>
78.54
*/
#include <iostream>
#include <cmath>

using namespace std;

float ft_circularea(int Diametr) {
    const float PI = 3.14;
    return ( PI * pow(Diametr,2)) / 4;
}

int ft_readDiametrOfCircule() {
    float Diametr;

    cout << "entree the diametr of circule : ";
    cin >> Diametr;
    return Diametr;
}

void ft_printAreaOfCircule(float Diametr) {

    float AreaCircle = ft_circularea(Diametr);
    cout << "the area of circule is : " << ceil(AreaCircle) << endl;

}
int main()
{
    ft_printAreaOfCircule(ft_readDiametrOfCircule());
    return 0;
}