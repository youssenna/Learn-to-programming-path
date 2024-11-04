/*
Write a program to read numbers from user and sum them, keep reading until the user enters -99 then print 
the Sum on screen.

Input
10
20
30
40
-99

Outputs =>
100
*/
#include <iostream>

using namespace std;

int ft_readNum()
{
    int num;
    cin >> num;
    return num;
}

int ft_sum99(int nbr) 
{
    int sum = 0;
    int count = 0;
    while (nbr != -99)
    {
        sum += nbr;
        cin >> nbr;
        count ++;

    }
    return sum;
}

void ft_printSum(int sum) {
    cout << sum << endl;
}
int main()
{
    cout << "enter numbers if you finish enter -99 to calculat sum of all : \n";
    ft_printSum(ft_sum99(ft_readNum()));
}