/*
Write a program to read a TotalBill and CashPaid and calculate the remainder to be paid back.
Input
20
50

Output =>
30
*/
#include <iostream>

using namespace std;

int ft_ReadTotalBillAndCashpaid(string Message) {
    int number;
    cout << Message;
    cin >> number;
    return number;
}

int ft_PaidBack(int TotalBill, int Cashpaid) {
    return Cashpaid - TotalBill;
}
int main()

{
    int TotalBill, Cashpaid;

    TotalBill = ft_ReadTotalBillAndCashpaid("Please enter Total Bill : ");
    Cashpaid = ft_ReadTotalBillAndCashpaid("Please enter Cash paid : ");
    cout << "the back Paid is : " << ft_PaidBack(TotalBill, Cashpaid) << endl;
    return 0;
}