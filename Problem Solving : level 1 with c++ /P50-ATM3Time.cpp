/*
Write a program to read the ATM PIN code from the user, then check if PIN Code = 1234, then show the balance 
to user, otherwise print “Wong PIN” and ask the user to enter the PIN again. 

Only allow user to enter the PIN 3 times, if fails, print “Card is locked!”

Assume User Balance is 7500.

Input
1234

5151

Outputs =>
Your Balance is 7500

Wrong PIN
*/
#include <iostream>

using namespace std;

void ft_readInfo(int &PINcode) {
    cout << "entree your PIN CODE : ";
    cin >> PINcode;
}

void ft_chekPIN(int PIN) {
    int balance = 7500;
    int i = 0;
    while ((PIN != 1234) && (i <= 2))
    {
        cout << "wrang PIN" << endl;
        ft_readInfo(PIN);
        i++;
    }
    if (PIN == 1234) {
        cout << "your Balance is : " << balance << endl;
    }
    else cout << "your card is locked\n";
}
int main() {
    int PIN;
    ft_readInfo(PIN);
    ft_chekPIN(PIN);
    return 0;
}