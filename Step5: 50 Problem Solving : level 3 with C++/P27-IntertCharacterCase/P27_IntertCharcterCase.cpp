#include <iostream>

using namespace std;

char ft_ReadCharacter() {
    char c;
    cout << "please enter a character?\n";
    cin >> c;

    return c;
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

int main() {
    char c = ft_ReadCharacter();
    char cAfterInvert = ft_InveertCharacterCase(c);

    cout << endl;
    cout << "char after inverting case:\n" << cAfterInvert << endl;
    
    return 0;
}