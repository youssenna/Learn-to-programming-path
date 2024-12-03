/*
Write a program to read a LoanAmount and Monthly Payment and calculate how many months you need to 
settle the loan.

Input
5000
500

Outputs =>
10 Months
*/
#include <iostream>

using namespace std;

int ft_ReadAbReturnIntVariable(string Message) {
    int nbr;
    cout << Message;
    cin >> nbr;
    return nbr;
}

int ft_CalculeTotalMonthly(int LoanAmount, int MonthlyPayment) {
    return LoanAmount / MonthlyPayment;
}

int main()
{
    int LoanAmount = ft_ReadAbReturnIntVariable("entre loan amount : ");
    int MonthlyPayment = ft_ReadAbReturnIntVariable("entre monthly payment : ");

    cout << " you need : " << ft_CalculeTotalMonthly(LoanAmount, MonthlyPayment) << " month to set your amount" << endl;
    return 0;
}