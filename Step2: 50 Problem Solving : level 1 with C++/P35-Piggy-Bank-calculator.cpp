/*
Write a program to ask the user to enter:

Pennies, Nickels, Dimes, Quarters, Dollars

Then calculate the total pennies , total dollars and print them on screen
giving that:
    .Penny = 1
    •Nickel = 5
    •Dime = 10
    •Quarter = 25
    •Dollar = 100
Example Inputs:
5,5,5,5,5

Output =>
705 Pennies
7.05 Dollars
*/
#include <iostream>

using namespace std;

struct st_Piggy {
    int Pennies,
    Nickels,
    Dimes,
    Quarters,
    Dollars;

};

struct st_dollar_Pennies {
    float Dollar;
    float Pennies;
};

st_Piggy ft_ReadPiggys(st_Piggy Piggy) {
    cout << "entre how many Pennies you have : ";
    cin >> Piggy.Pennies;
    cout << "entre how many Nickels you have : ";
    cin >> Piggy.Nickels;
    cout << "entre how many Dimes you have : ";
    cin >> Piggy.Dimes;
    cout << "entre how many Quarters you have : ";
    cin >> Piggy.Quarters;
    cout << "entre how many Dollar you have : ";
    cin >> Piggy.Dollars;
    return Piggy;
}

st_dollar_Pennies ft_ConvergeToDollarAndPennies(st_Piggy Piggy,st_dollar_Pennies dollar_Pennies) {
    Piggy.Nickels = Piggy.Nickels * 5;
    Piggy.Dimes = Piggy.Dimes * 10;
    Piggy.Quarters = Piggy.Quarters * 25;
    Piggy.Dollars = Piggy.Dollars * 100;

    dollar_Pennies.Pennies = Piggy.Pennies + Piggy.Nickels + Piggy.Dimes + Piggy.Quarters + Piggy.Dollars;
    dollar_Pennies.Dollar = dollar_Pennies.Pennies / 100;

    return dollar_Pennies;
}

void ft_PrintToDollarAndPennies(st_dollar_Pennies dollar_Pennies) {
    
    cout << "Pennyes = " << dollar_Pennies.Pennies << "\n";
    cout << "Dollars = " << dollar_Pennies.Dollar << "\n";
}

int main()
{
    st_Piggy Piggy;
    st_dollar_Pennies dollar_Pennies;
    ft_PrintToDollarAndPennies(ft_ConvergeToDollarAndPennies(ft_ReadPiggys(Piggy), dollar_Pennies));
    return 0;

}