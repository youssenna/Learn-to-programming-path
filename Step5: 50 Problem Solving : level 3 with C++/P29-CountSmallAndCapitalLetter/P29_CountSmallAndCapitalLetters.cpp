#include <iostream>

using namespace std;

string ft_ReadString() {
    string S;
    cout << "please enter your string?\n";
    getline(cin, S);

    return S;
}

bool ft_IsUpper(char c) {
    return (c >= 65 && c <= 90) ? true : false; 
}

bool ft_IsLower(char c) {
    return (c >= 97 && c <= 122) ? true : false; 
}

int ft_strlen(string str) {
    int i = 0;
    int UpperLetter = 0;

    while (str[i]) {
        i++;
    }
    return i;
}

int ft_CountCapitalLetter(string str) {
    int i = 0;
    int UpperLetter = 0;

    while (str[i]) {
        if (ft_IsUpper(str[i]))
            UpperLetter++;
        i++;
    }
    return UpperLetter;
}

int ft_CountSmallLetter(string str) {
    int i = 0;
    int smallLetter = 0;

    while (str[i]) {
        if (ft_IsLower(str[i]))
            smallLetter++;
        i++;
    }
    return smallLetter;
}

int main() {
    
    string str;

    str = ft_ReadString();

    cout << endl;
    cout << "String length = " << ft_strlen(str) << endl;
    cout << "Capital Letter Count = " << ft_CountCapitalLetter(str) << endl;
    cout << "Small Letter Count = " << ft_CountSmallLetter(str) << endl;
    return 0;
}