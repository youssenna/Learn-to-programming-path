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

void ft_PrintStringafterUpperLetter(string str) {
    int i = 0;
    
    cout << "\n\nString after upper:\n";
    while (str[i]) {
        str[i] = ft_toUpper(str[i]);
        cout << str[i];
        i++;
    }
    cout << endl;
}
 
void ft_PrintStringafterLowerLetter(string str) {
    int i = 0;
    
    cout << "String after Lower:\n";
    while (str[i]) {
        str[i] = ft_toLower(str[i]);
        cout << str[i];
        i++;
    }
    cout << endl;
}

int main() {
    string str = ft_ReadString();
    ft_PrintStringafterUpperLetter(str);
    cout << endl;
    ft_PrintStringafterLowerLetter(str);

}

