/*
A restaurant charges 10% services fee and 16% sales tax.

Write a program to read a BillValue and add service fee and sales tax to it, and print the TotalBill on the 
screen.

Input =>
100

Outputs =>
127.6
*/
#include <iostream>

using namespace std;

int ft_ReadBillValue() {
    int BillValue;
    
    cout << "entre bill value : ";
    cin >> BillValue;
    return BillValue;
}

int ft_CalculTotalBill(int billValue) {
    billValue = billValue * 1.1;
    billValue = billValue * 1.16;
    return billValue;

}

int main()
{
    int billValue = ft_ReadBillValue();

    cout << "the total bill is : " << ft_CalculTotalBill(billValue) << endl;
}