#include <iostream>

using namespace std;

string ft_ReadString() {
    string S;
    cout << "please enter your string?\n";
    getline(cin, S);

    return S;
}

char ft_toLower(char c) {
    if (c >= 65 && c <= 90)
        return c + 32;
    else
    return c;
}

bool ft_IsVowel(char c) {

    c = ft_toLower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

}

short ft_CountVowels(string str) {
    char i = 0;
    short countVowel = 0;

    while (str[i]) {
        if (ft_IsVowel(str[i])) 
            countVowel++;
        i++;
    }
    return countVowel;
}

int main() {
    string str = ft_ReadString();

    cout << "\nNumber of vowels is: " << ft_CountVowels(str) << endl;

    return 0;
}