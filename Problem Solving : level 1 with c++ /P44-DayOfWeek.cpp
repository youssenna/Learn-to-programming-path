/*
Write a program to ask the user to enter:
    Day

Then print the day as follows:
    1 Print Sunday
    •2 Print Monday
    •3 Print Tuesday
    •4 Print Wednesday
    •5 Print Thursday
    •6 Print Friday
    •7 Print Saturday
    •Otherwise print “Wrong Day” and ask the use to enter the day again.
Example Inputs:
6

Output =>
its friday
*/
#include <iostream>

using namespace std;

enum en_daysOfWeek {sun = 1, mon = 2, tues = 3, wedn = 4, thur = 5, fri = 6, sat = 7};

void ft_chekMenu() {
    cout << "************************\n";
    cout << "1 : Sunday\n";
    cout << "2 : Monday\n";
    cout << "3 : Tuesday\n";
    cout << "4 : Wensday\n";
    cout << "5 : Thursday\n";
    cout << "6 : Friday\n";
    cout << "7 : Saturday\n";
    cout << "************************\n";
}

en_daysOfWeek readNumberInRange(string Mesage, int from, int to) {
    int nbr;
    while (nbr < from || nbr > to) {
        cout << Mesage;
        cin >> nbr;
    }
    return (en_daysOfWeek)nbr;
}

string ft_WriteDayOfWeek(en_daysOfWeek NameDay) {
    switch (NameDay) {
        case en_daysOfWeek::sun :
            return "Sunday\n";
        case en_daysOfWeek::mon :
            return "Monday\n";
        case en_daysOfWeek::tues :
            return "Tuesday\n";
        case en_daysOfWeek::wedn :
            return "Wensday\n";
        case en_daysOfWeek::thur :
            return "Thursday\n";
        case en_daysOfWeek::fri :
            return "friday\n";
        case en_daysOfWeek::sat :
            return "Satrday\n";
        default :
            return "this day not found it\n";
    }
}

int main() {
    ft_chekMenu();
    cout << ft_WriteDayOfWeek(readNumberInRange("enter nember between 1 and 7\n",1,7));
    return 0; 
}