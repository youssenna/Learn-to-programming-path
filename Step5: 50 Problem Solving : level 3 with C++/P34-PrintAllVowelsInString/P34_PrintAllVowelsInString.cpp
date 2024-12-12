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

void ft_PrintAllVowelsInString(string str) {
    char i = 0;
    short countVowel = 0;

    while (str[i]) {
        if (ft_IsVowel(str[i])) 
            cout << str[i] << "\t";
        i++;
    }
}

int main() {

    string str = ft_ReadString();

    cout << "\nVowels in string are: ";
    ft_PrintAllVowelsInString(str);
    cout << endl;

    return 0;
    
}