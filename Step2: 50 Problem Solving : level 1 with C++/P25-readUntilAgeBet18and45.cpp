/*
Write a program to ask the user to enter :
    Age
If age is between 18 and 45 print “Valid Age” otherwise print “Invalid Age” and re-ask user to enter a valid age.

Note: You should keep asking user to enter a valid age until s/she enters it.
*/
#include <iostream>

using namespace std;

enum enValidInvalid {validAge = 1, invalidAge = 2};

int ft_readAge() {
    int age;
    cout << "enter your age : ";
    cin >> age;
    return age;
}

enValidInvalid ft_chekAge(int age, int from, int to) {
    if ((age >= from) && (age <= to)) {
        return enValidInvalid::validAge;
    }
    else
        return enValidInvalid::invalidAge;
}

void ft_PrintResoult(enValidInvalid chekAge,int from, int to) {
    int i = 0;
    while (chekAge == enValidInvalid::invalidAge) {
        cout << "Invalid age\n";
        chekAge = ft_chekAge(ft_readAge(), from, to);
        i++;
    }
    cout << "valid age\n";
}
int main() {
    
    ft_PrintResoult(ft_chekAge(ft_readAge(), 18, 45),18, 45);
    return 0;
}