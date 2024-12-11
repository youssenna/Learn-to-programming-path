#include <iostream>

using namespace std;

string ft_ReadString() {
    string S;
    cout << "please enter your string?\n";
    getline(cin, S);

    return S;
}

char ft_toUpper(char c) {
    if (c >= 97 && c <= 122)
        return c - 32;
    else
    return c;
}

char ft_toLower(char c) {
    if (c >= 65 && c <= 90)
        return c + 32;
    else
    return c;
}

bool ft_IsUpper(char c) {
    return (c >= 65 && c <= 90) ? true : false; 
}

char ft_InveertCharacterCase(char c) {
    return (ft_IsUpper(c) ? ft_toLower(c) : ft_toUpper(c));
}

void ft_InvertAndPrintAllLettersCase(string str) {
    int i = 0;
    
    cout << "\nchar after inverting all letterscase:" << endl;
    while (str[i]) {
        str[i] = ft_InveertCharacterCase(str[i]);
        cout << str[i];
        i++;
    }
    cout << endl;
}

int main() {
    ft_InvertAndPrintAllLettersCase(ft_ReadString());
    
    return 0;
}