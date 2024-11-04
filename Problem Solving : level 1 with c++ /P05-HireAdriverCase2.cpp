/*
Write a program to ask the user to enter his/her:
•Age
•Driver license
•Has Recommendation!
*/

#include <iostream>

using namespace std;

struct stinfo {
    int age;
    bool HasDriverLicence;
    bool HasRecomandation;
};

stinfo ft_stReadInfo() {
    stinfo info;
    cout << "please enter your age : ";
    cin >> info.age;
    cin.ignore (1, '\n');
    cout << "Are you has driver licence (y=>1 ; n=>0)";
    cin >> info.HasDriverLicence;
    cout << "do you has recomendation (y=>1 ; n=>0)";
    cin >> info.HasRecomandation;
    return info;
}

bool ft_IsAccept(stinfo info) {
    if (info.HasRecomandation) return true;
    else return (info.age > 21 && info.HasDriverLicence == true);
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