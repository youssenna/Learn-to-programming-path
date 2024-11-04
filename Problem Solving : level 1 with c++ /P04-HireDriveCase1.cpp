/*
Write a program to ask the user to enter his/her:
    •Age
    •Driver license
Then Print“Hired” if his\her age is grater than 21 and s/he has a driver license, otherwise Print “Rejected”
*/
#include <iostream>

using namespace std;

struct stinfo {
    int age;
    bool HasDriverLicence;
};

stinfo ft_stReadInfo() {
    stinfo info;
    cout << "please enter your age : ";
    cin >> info.age;
    cin.ignore (1, '\n');
    cout << "Are you has driver licence (y=>1 ; n=>0)";
    cin >> info.HasDriverLicence;
    return info;
}

bool ft_IsAccept(stinfo info) {
    return (info.age > 21 && info.HasDriverLicence == 1);
}

void ft_printResult() {
    stinfo info;
    if (ft_IsAccept(info))
        cout << "Hired\n";
    else cout << "Rejected";
}

int main() {
    ft_stReadInfo();
    ft_printResult();
    return 0;
}