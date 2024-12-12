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

bool ft_IsLower(char c) {
    return (c >= 97 && c <= 122) ? true : false; 
}

char ft_toLower(char c) {
    if (c >= 65 && c <= 90)
        return c + 32;
    else
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

short ft_CountLetterMathCase(string str, char c) {

    char i = 0;
    short countLetter = 0;

    while (str[i]) {
        if (ft_toLower(str[i]) == ft_toLower(c))
            countLetter++;
        i++;
    }
    return countLetter;
}

char ft_InvertLetterCase(char c) {
    return (ft_IsLower(c) ? c - 32 : c + 32);
}

int main() {
    
    string str;
    char c;
    str = ft_ReadString();
    cout << endl;
    c = ft_ReadChar();

    cout << "\nLetter " << "\'" << c << "\'" << " Count = " << ft_CountLetter(str, c) << endl;
    cout << "Letter " << "\'" << c << "\'" << " or " << 
    "\'" << ft_InvertLetterCase(c) << "\'" << " Count = " << ft_CountLetterMathCase(str, c) << endl;

    return 0;
}