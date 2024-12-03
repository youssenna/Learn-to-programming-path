/*
Write a program to ask the user to enter:
    Mark\
Then Print the “PASS” if mark >=50, otherwise print “Fail”

Example Inputs:
45

output =>
Fail
*/
#include <iostream>

using namespace std;

enum en_PassFail {pass = 1, fail = 2};

int ft_readMark() {
    int Mark;
    cout << "enter your Mark : ";
    cin >> Mark;
    return Mark;
}

en_PassFail ft_passOrFail(int Mark) {
    if (Mark >= 50)
        return en_PassFail::pass;
    else 
        return en_PassFail::fail;
}

void ft_printResoult(int mark) {
    if (ft_passOrFail(mark) == en_PassFail::pass)
        cout << "Passed\n";
    else
        cout << "Failed\n";
}
int main() {
    ft_printResoult(ft_readMark());
    return 0;
}