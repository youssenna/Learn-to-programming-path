/*
Write a program to calculate rectangle area through diagonal and side area of rectangle and print it on the screen
    Area = a * squar(pow(d,2) - pow(a,2))

Then use should enter:
a
d

Example Inputs:
5
40

outputs =>
198.431
*/
#include <iostream>
#include <cmath>

using namespace std;

float ft_rectanglearea(int a, int d) {
    return float(a * sqrt(pow(d,2) - pow(a,2)));
}

void ft_ReadInfo(int &a, int d) {

    cout << " ____________\n";
    cout << " |\\         |\n ";
    cout << "|  \\       |\n";
    cout << "a|    \\d    |\n";
    cout << " |      \\   |\n";
    cout << " |         \\|\n";
    cout << "--------------\n";
    cout << "enter a of rectangle : ";
    cin >> a;
    cout << "enter d of rectangle : ";
    cin >> d;
}

void ft_printResoult(int a, int d) {
    float area;
    area = ft_rectanglearea(a, d);
    cout << "area == " << area << endl;
}

int main()
{
    int a, d;
    ft_ReadInfo(a, d);
    ft_printResoult(a,d);
    return 0;
}