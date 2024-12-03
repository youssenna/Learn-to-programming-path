/*
Write a program to ask the user to enter:
    Month
Then print the day as follows:
    •1 Print January
    •2 Print February
    •3 Print March
    •4 Print April
    •5 Print May
    •6 Print June
    •7 Print July
    •8 Print August
    •9 Print September
    •10 Print October
    •11 Print November
    •12 December
    •Otherwise print “Wrong Month” and ask the use to enter the Month again
Example Inputs:
11

output =>
Nevember
*/
#include <iostream>

using namespace std;

enum en_MonthName {jan = 1, feb = 2, mar = 3, apr = 4, may = 5, jun = 6, july = 7, aug = 8, sep = 9, oct = 10, nov = 11, dec = 12};

void ft_MenuOfMonth() {
    cout << "//>> chose one of this number >>\\\\\n";
    cout << "*********************\n";
    cout << "* 1  : January      *\n";
    cout << "* 2  : Febrary      *\n";
    cout << "* 3  : March        *\n";
    cout << "* 4  : April        *\n";
    cout << "* 5  : May          *\n";
    cout << "* 6  : June         *\n";
    cout << "* 7  : July         *\n";
    cout << "* 8  : August       *\n";
    cout << "* 9  : September    *\n";
    cout << "* 10 : October      *\n";
    cout << "* 11 : Novomber     *\n";
    cout << "* 12 : December     *\n";
    cout << "*********************\n";
}
en_MonthName ft_readNumberInRange(string Mesage, int from, int to) {
    int nbr;
    while (nbr < from || nbr > to) {
        cout << Mesage;
        cin >> nbr;
    }
    return (en_MonthName)nbr;
}


string ft_chekMonth(en_MonthName Month) {
    switch (Month) {
        case en_MonthName::jan :
            return "January\n";
        case en_MonthName::feb :
            return "February\n";
        case en_MonthName::mar :
            return "March\n";
        case en_MonthName::apr :
            return "April\n";
        case en_MonthName::may :
            return "May\n";
        case en_MonthName::jun :
            return "June\n";
        case en_MonthName::july :
            return "July\n";
        case en_MonthName::aug :
            return "August\n";
        case en_MonthName::sep :
            return "September\n";
        case en_MonthName::oct :
            return "October\n";
        case en_MonthName::nov :
            return "November\n";
        case en_MonthName::dec :
            return "December\n";
        default :
            return "Wrang Month\n";
    }
}
int main() {
    ft_MenuOfMonth();
    cout << "your chois is " << ft_chekMonth(ft_readNumberInRange("please select number of monrh betwen 1 and 12\n" ,1,12));
    return 0;
}