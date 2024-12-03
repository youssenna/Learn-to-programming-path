/*
Write a program that inputs the number of seconds and changes it to days, hours, minutes, and seconds

Input
193535

Output =>
2:5:45:35
*/
#include <iostream>
#include <cmath>

using namespace std;

int ft_readSecand(string Messages) {
    int nbr;
    cout << Messages;
    cin >> nbr;
    return nbr;
}

int ft_secandToDay(int secand) {
    return secand / (pow(60,2) * 24);
}

int ft_remiderSecandAfterKnowDay(int secand) {
    return secand % (60 * 60 * 24);
}

int ft_remiderSecandToHours(int reminder) {
    return reminder / pow(60,2);
}

int ft_remiderSecandAfterKnowHours(int reminder) {
    return reminder % (60 * 60);
}

int ft_remiderSecandToMinute (int reminder) {
    return reminder / 60;
}

int ft_remiderSecand(int reminder) {
return reminder % 60;
}

void ft_PrintSecandToD_H_M_S() {

    int secand = ft_readSecand("enter number of secand to transfer to day hours munutes secands\n");

    int day = ft_secandToDay(secand);

    int hours = ft_remiderSecandToHours(ft_remiderSecandAfterKnowDay(secand));
    int reminder = ft_remiderSecandAfterKnowHours(secand);
    int minute = ft_remiderSecandToMinute(ft_remiderSecandAfterKnowHours(reminder));
    reminder = ft_remiderSecandToMinute(minute);
    int secands = ft_remiderSecand(secand);

    cout << round(day) << "D:" << round(hours) << "h:" << round(minute) << "m:" << round(secands) << "s" << endl;
};

int main()
{
    ft_PrintSecandToD_H_M_S();
    return 0;
}