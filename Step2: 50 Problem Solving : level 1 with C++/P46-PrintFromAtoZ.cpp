/*
Write a program to print all letters from A to Z

outputs =>
A
B
C
.
.
.
Z
*/
#include <iostream>

using namespace std;

void ft_writeCaptalLetter() {
    cout << "capital letters :\n";
    char letter = 65;
    while (letter <= 90) {
        cout << letter << endl;
        letter++;
    }

}

void ft_writeLowercaseLetter() {
    cout << "\n*********************\n";
    cout << "\nLowercase letterd :\n";
    char letter = 97;
    while (letter <= 122) {
        cout << letter << endl;
        letter++;
    }
}

int main() {
    ft_writeCaptalLetter();
    ft_writeLowercaseLetter();
    return 0;
}