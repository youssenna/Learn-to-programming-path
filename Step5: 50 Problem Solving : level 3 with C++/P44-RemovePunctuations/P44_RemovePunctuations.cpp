#include <iostream>

using namespace std;

bool ft_isPunctuations(char c) {
    return  (c >= 33 && c <= 47) || 
            (c >= 58 && c <= 64) || 
            (c >= 91 && c <= 96) || 
            (c >= 123 && c <= 126);
}

string ft_RemoveAllPunctuationsInString(string str) {
    int i = 0;
    string str2;
    while (i < str.length()) {
        if(!ft_isPunctuations(str[i])) {
            str2 += str[i];
        }
        i++;
    }
    return str2;
}

int main() {
    string str = "Hi, I \' am Youssef @ (ennajar) from {morocoo}";
    cout << "Original string\n" << str;

    cout << "\n\nstring after remove punctuations\n" << ft_RemoveAllPunctuationsInString(str) << endl;
    return 0;
}