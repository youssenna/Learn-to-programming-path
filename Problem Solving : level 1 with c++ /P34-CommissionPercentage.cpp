/*
Write a program to ask the user to enter:
    TotalSales

The commission is calculated as one percentage * the total sales amount, all you need is to decide which percentage 
to use of the following:

> 1000,000   Percentage is 1%
> 500K to 1M  Percentage is 2%
> 100K  –500K Percentage is 3%
> 50K to 100K Percentage is 5%
Otherwise Percentage is 0%

Example Inputs:
110000

Output=>
3300
*/
#include <iostream>

using namespace std;

float ft_readTotalSales() {
    int TotalSales;
    cout << "please enter your total sales between 0 and 1000000" << '\n';
    cin >> TotalSales;
    return (float)TotalSales;
}

float  ft_CommissionPercebtage(float TotalSales) {
    // float Percentage;
    if (TotalSales >= 1000000)
        return 0.01;
    else if ((TotalSales < 1000000) && (TotalSales >= 500000))
        return 0.02;
    else if ((TotalSales < 500000) && (TotalSales >= 100000))
        return 0.03;
    else if ((TotalSales < 100000) && (TotalSales >= 50000))
        return 0.05;
    else
        return 0;
}

float ft_TotalSalesAmount(float TotalSeles) {
    return ft_CommissionPercebtage(TotalSeles) * TotalSeles;
}

int main() {
    float TotalSalles = ft_readTotalSales();
    cout << "commission Percentage = " << ft_CommissionPercebtage(TotalSalles) << endl;
    cout << "Total sales ammount = " << ft_TotalSalesAmount(TotalSalles) << endl;
    return 0;
}