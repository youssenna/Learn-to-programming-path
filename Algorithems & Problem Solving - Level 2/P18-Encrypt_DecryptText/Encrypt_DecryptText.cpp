#include <iostream>
#include <unistd.h>

using namespace std;

void ft_putchar(char caracter) {
    write(1, &caracter,1);
}

string ft_readText(string message) {
    string text;
    cout << message;
    cin >> text;
    return text;
}

string ft_TextbeforEncryted(string text) {
    return text;
}

string ft_TextAfterEncryted(string text, short int encryptedKey) {
    int i;
    i = 0;
    while (text[i]) {
        text[i] += encryptedKey;
        i++;
    }
    return text;
}

string ft_TextAfterDecryted(string text, short int encryptedKey) {
    int i;
    i = 0;
    while (text[i]) {
        text[i] -= encryptedKey;
        i++;
    }
    return text;
}

int main() {
    short int encryptedKey = 2;
    string text = ft_readText("Please enter Text : ");
    cout << "Text befor encripted : " << ft_TextbeforEncryted(text) << endl;
    cout << "Text after encripted : " << ft_TextAfterEncryted(ft_TextbeforEncryted(text), encryptedKey) << endl;
    cout << "Text after decripted : " << ft_TextAfterDecryted(ft_TextAfterEncryted(ft_TextbeforEncryted(text), encryptedKey), encryptedKey) << endl;
    return 0;
}
