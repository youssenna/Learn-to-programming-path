#include <iostream>
#include <string>

using namespace std;

string ft_ReadString() {
    string S;
    cout << "please enter your string?\n";
    getline(cin, S);

    return S;
}

char ft_toUppwer(char c) {
    if (c >= 97 && c <= 122)
        return c - 32;
    else
    return c;
    
}

void ft_PrintUpperFirstLetterOfEachWord(string str) {
    int i = 0;

    bool isFirstLetter = true;

    cout << "\n\nString after conversion:\n";

    while (str[i]) {
        if (str[i] != ' ' && isFirstLetter) {
            str[i] = ft_toUppwer(str[i]);
        }
        cout << str[i];
        isFirstLetter = (str[i] == ' ' ? true : false);
        i++;
    }

}

int main() {

    ft_PrintUpperFirstLetterOfEachWord(ft_ReadString());

    return 0;
}