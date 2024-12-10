#include <iostream>
#include <string>

using namespace std;

string ft_ReadString() {
    string S;
    cout << "please enter your string?\n";
    getline(cin, S);

    return S;
}

void ft_PrintFirstLetterOfEachWord(string str) {
    int i = 0;

    cout << "\n\nFirst letter of this string:\n";
    cout << str[0] << endl;

    while (str[i]) {
        if (str[i] == ' ') {
            cout << str[i + 1] << endl;
        }
        i++;
    }

}

int main() {

    ft_PrintFirstLetterOfEachWord(ft_ReadString());

    return 0;
}