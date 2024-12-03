#include <iostream>
#include <cstdlib>

using namespace std;

enum en_characterType {smallLetter = 1, capitalLetter = 2, specialCaracter = 3, digit = 4};

int RandomNumber(int from, int to) {
    int rendomNumber = rand() % (to - from + 1) + from;
    return rendomNumber;
}

int ft_ReadPositifNumber(string message) {
    int nbr = -1;
    while (nbr <= 0 ) {
        cout << message;
        cin >> nbr;
    }
    return nbr;
}

char ft_RandomCaracter(en_characterType caracterType) {
    switch(caracterType) {
        case en_characterType::specialCaracter:
            return (char)RandomNumber(14, 47);
        case en_characterType::digit:
            return (char)RandomNumber(48, 57);
        case en_characterType::capitalLetter:
            return (char)RandomNumber(65, 90);
        case en_characterType::smallLetter:
            return (char)RandomNumber(97, 122);
    }
    return '\n';
}

string ft_GetFirstFourCaracterKey(en_characterType chartype,int length) {
    char firstFourCaractersKey[length]; 
    int i = 0;
    while (i < length) {
        firstFourCaractersKey[i] = ft_RandomCaracter(chartype);
        i++;
    }
    firstFourCaractersKey[length] = '\0';
    return firstFourCaractersKey;
}

string ft_GetKey(int length) {
    string Key = "";
    int i = 0;
    while (i < length) {
        Key += ft_GetFirstFourCaracterKey(en_characterType::capitalLetter, 4);
        if (i != length - 1)
            Key += "-";
        i++;
    }
    return Key;
}

string ft_GetNKeys(int nbr) {
    string AllKeys = "";
    int i = 0;
    while (i < nbr) {
        AllKeys += "key [" + to_string(i + 1) + "] : " + ft_GetKey(4) + "\n";
        i++; 
    }
    return AllKeys;
}


int main() {
    srand((unsigned)time(NULL));
    cout << ft_GetNKeys(ft_ReadPositifNumber("Please enter positif number : "));
    return 0;
}