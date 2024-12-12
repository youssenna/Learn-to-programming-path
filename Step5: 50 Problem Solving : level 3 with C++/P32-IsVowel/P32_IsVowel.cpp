#include <iostream>

using namespace std;

char ft_ReadChar() {
    char c;
    cout << "please enter a character?\n";
    cin >> c;

    return c;
}

char ft_toLower(char c) {
    if (c >= 65 && c <= 90)
        return c + 32;
    else
    return c;
}

bool ft_IsVowel(char c) {

    ft_toLower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

}

int main() {
    char c = ft_ReadChar();

    ft_IsVowel(c) ? cout << "Yes Letter \'" << c << "\' is vowel":
    cout  << endl;
    cout << "No Letter \'" << c << "\' is not vowel";

    cout << endl;

    return 0;
}