/*
Write a program to ask the user to enter:
    Number1
    •Number 2
    •OperationType
Then perform the calculation according to the Operation Type as follows:
    “+” : add the two numbers.
    •“-” : Subtract the two numbers.
    •“*” : Multiply the two numbers.
    •“/” : Divide the two numbers
Example Inputs:
10
20
*
Output =>
200
*/
#include <iostream>

using namespace std;

enum en_OperatorType {Addition = '+', Substraction = '-',
                        Multiplication = '*', Device = '/'};
void ft_readNumbers(int &num1, int &num2) {
    cout << "please enter number 1 \n";
    cin >> num1;
    cout << "please enter number 2 \n";
    cin >> num2;
}

en_OperatorType ft_operationType() {
    char OpearationType = '+';
    cout << "Please enter operation type (+ - / *) \n";
    cin >> OpearationType;
    return (en_OperatorType)OpearationType;
}

float chekoperator(int num1, int num2, en_OperatorType OperatorType) {
    switch (OperatorType)
    {
        case en_OperatorType::Addition:
            cout << num1 << " " << (char)OperatorType << " " << num2 << " = " ;
            return num1 + num2;
        case en_OperatorType::Substraction:
            cout << num1 << " " << (char)OperatorType << " " << num2 << " = " ;
            return num1 - num2;
        case en_OperatorType::Multiplication:
            cout << num1 << " " << (char)OperatorType << " " << num2 << " = " ;
            return num1 * num2;
        case en_OperatorType::Device:
            cout << num1 << " " << (char)OperatorType << " " << num2 << " = " ;
            return float(num1 / num2);
        default :
            cout << "operateur not support it or syntax error default is \n";
            return num1 + num2;
    }
}

void ft_printResult(float resoult) {
    cout << resoult << endl;
}

int main() {
    int num1, num2;
    ft_readNumbers(num1, num2);
    en_OperatorType OperatorType = ft_operationType();
    ft_printResult(chekoperator(num1, num2, OperatorType));
    return 0;
}