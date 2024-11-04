/*
Write a program to ask the user to enter :
    Age
 If age is between 18 and 45print “Valid Age” otherwise print “Invalid Age”   
*/
#include <iostream>

using namespace std;

enum enValidInvalid {validAge = 1, invalidAge = 2};

int ft_readAge(int &age)
{

    cout << "enter your age : ";
    cin >> age;
    return age;

}

enValidInvalid ft_chekAge(int age, int from, int to)
{

    if ((age >= from) && (age <= to)) {
        return enValidInvalid::validAge;
    }
    else
        return enValidInvalid::invalidAge;

}

void ft_PrintResoult(enValidInvalid chekAge)
{

    if (chekAge == enValidInvalid::validAge)
        cout << "Valid Age\n";
    else
        cout << "Invalid age\n";

}

int main()
{

    int age;
    ft_readAge(age);
    ft_PrintResoult(ft_chekAge(age, 18, 45));
    return 0;
    
}