/*
Write a program to ask the user to enter:
    Mark1, Mark2, Mark3

Then Print the Average of entered Marks, and print “PASS” if average>=50, otherwise print “FAIL”

Example Inputs:
90
80
70

outputs =>
80
Pass
*/
#include <iostream>

using namespace std;

enum en_PassFail {pass = 1, fail = 2};

void ft_readMarks(int &Mark1, int &Mark2, int &Mark3) {
    cout << "enter your Mark1 : ";
    cin >> Mark1;
    cout << "enter your Mark 2 : ";
    cin >> Mark2;
    cout << "enter your Mark 3 : ";
    cin >> Mark3;
}

en_PassFail ft_chekFailOrPass(float Mark) {
    if (Mark >= 50)
        return en_PassFail::pass;
    else 
        return en_PassFail::fail;
}

float ft_SumOf3Mark(int Mark1, int Mark2, int Mark3) {
    return Mark1 + Mark2 + Mark3;
}

float ft_average3mark(int Mark1, int Mark2, int Mark3)
{
    return ft_SumOf3Mark(Mark1, Mark2, Mark3) / 3;
}

void ft_printresult(int Mark1, int Mark2, int Mark3) {
    float average = ft_average3mark(Mark1, Mark2, Mark3);
    cout << "average = " << average << "\n";
    if (ft_chekFailOrPass(average) == en_PassFail::pass)
        cout << "you are pass\n";
    else
        cout << "you are failed\n";
}

int main() {
    int mark1, mark2, mark3;
    ft_readMarks(mark1, mark2, mark3);
    ft_printresult(mark1, mark2, mark3);
    return 0;
}