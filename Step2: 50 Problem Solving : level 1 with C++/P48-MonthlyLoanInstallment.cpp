/*
Write a program to read a LoanAmount and ask you how many months you need to settle the loan, then 
calculate the monthly installment amount.

Inputs
5000
10

Outputs =>
500
*/
#include <iostream>

using namespace std;

int ft_ReadAbReturnIntVariable(string Message) {
    int nbr;
    cout << Message;
    cin >> nbr;
    return nbr;
}

int ft_CalculeMonthlyPayment(int LoanAmount, int TotalMonthly) {
    return LoanAmount / TotalMonthly;
}

int main()
{
    int LoanAmount = ft_ReadAbReturnIntVariable("entre loan amount : ");
    int TotalMonthly = ft_ReadAbReturnIntVariable("haw many months you nade to set your amount : ");
    
    cout << " you should pay  : " << ft_CalculeMonthlyPayment(LoanAmount, TotalMonthly) << " evrey month to set your amount" << endl;
    return 0;
}