/*
Write a program to ask the user to enter:
    Grade
Then print the grade as follows:
    90 – 100 Print A
    80 –89 Print B
    70 –79 Print C
    60 –69 Print D
    50 –59 Print E
    Otherwise Print F
Example Inputs:
95
Outputs =>
A
*/
#include <iostream>

using namespace std;

int ft_readGrad(int from, int to) {
    int grad;
    int i = 0;
    do {
        cout << "please enter your grade between 0 and 100 " << '\n';
        cin >> grad;
        i++;
    } while (grad < from || grad > to);
    return grad;
}

string ft_cheakGrade(int grad) {
    if ((grad <= 100) & (grad >= 90))
        return "A";
    else if ((grad < 90) && (grad >= 80))
        return "B";
    else if ((grad < 80) && (grad >= 70))
        return "C";
    else if ((grad < 70) && (grad >= 60))
        return "D";
    else if ((grad < 60) && (grad >= 50))
        return "E";
    else if (grad < 50)
        return "F";
    else
        return "wrong";
}

int main() {
    int grad;
    cout << ft_cheakGrade(ft_readGrad(0, 100)) << endl;
    return 0;
}