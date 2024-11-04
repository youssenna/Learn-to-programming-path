/*
Write a program to ask the user to enter:

•First Name
•Last Name

Then Print Full Name on screen

Example Input:
MohammedAbu Hadhoud

Output=>
Mohammed Abu-Hadhoud

*/
#include <iostream>

using namespace std;

struct stinfo {
    string FirstName;
    string LastName;
};
stinfo ft_readFullName() {
    stinfo info;
    cout << "enter your first name\n";
    cin >> info.FirstName;
    cout << "enter your last name\n";
    cin >> info.LastName;
    return info;
}

string ft_getName(stinfo info) {
    return info.FirstName + ' ' + info.LastName;
}
void ft_PrintName(string fullname) {
    cout << "your name is " << fullname << endl;
}

int main() {
    ft_PrintName(ft_getName(ft_readFullName()));
    return 0;
}