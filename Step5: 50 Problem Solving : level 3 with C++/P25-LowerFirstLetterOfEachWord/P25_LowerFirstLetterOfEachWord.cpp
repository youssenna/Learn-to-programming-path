#include <iostream>
#include <string>

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

void ft_PrintUpperFirstLetterOfEachWord(string str) {
    int i = 0;

    bool isFirstLetter = true;

    cout << "\n\nString after conversion:\n";

    while (str[i]) {
        if (str[i] != ' ' && isFirstLetter) {
            str[i] = ft_toLower(str[i]);
        }
        cout << str[i];
        isFirstLetter = (str[i] == ' ' ? true : false);
        i++;
    }
    cout << endl;
}

int main() {

    ft_PrintUpperFirstLetterOfEachWord(ft_ReadString());

    return 0;
}