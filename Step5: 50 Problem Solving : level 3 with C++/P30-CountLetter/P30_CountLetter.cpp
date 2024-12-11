#include <iostream>

using namespace std;

string ft_ReadString() {
    string S;
    cout << "please enter your string?\n";
    getline(cin, S);

    return S;
}

char ft_ReadChar() {
    char c;
    cout << "please enter a character?\n";
    cin >> c;

    return c;
}

short ft_CountLetter(string str, char c) {
    char i = 0;
    short countLetter = 0;

    while (str[i]) {
        if (str[i] == c)
            countLetter++;
        i++;
    }
    return countLetter;
}

int main() {
    
    string str;
    char c;
    str = ft_ReadString();
    cout << endl;
    c = ft_ReadChar();

    cout << "\nLetter " << "\'" << c << "\'" << " Count = " << ft_CountLetter(str, c) << endl;

    return 0;
}