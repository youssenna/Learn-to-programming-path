/*
Write a program to calculate the task duration in seconds and print it on screen
==>Given the time duration of a task in the number of days, hours, minutes, and seconds,.

Input 2
5
45
35

outputs =>
193535 Secand
*/
#include <iostream>
#include <cmath>

using namespace std;

int ft_readValue(string Message) {
    int nbr;
    int i = 0;
    cout << Message;
    cin >> nbr;
    return nbr;
}

int ft_totalsecand(int d, int h, int m, int s) {
    return d * 24 * pow(60,2) + h * pow(60,2) + m * 60 + s;
}

int main()
{
    int NumberOfDays = ft_readValue("enter number of days : ");
    int NumberOfHours = ft_readValue("enter number of hours : ");
    int NumberOfMunites = ft_readValue("enter number of munites : ");
    int NumberOfSecand = ft_readValue("enter number of secand : ");
    cout << "number of secand  = " << ft_totalsecand(NumberOfDays, NumberOfHours, NumberOfMunites, NumberOfSecand) << endl;
    return 0;
}