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

string ft_GetFirstCaractersKey(en_characterType chartype,int CaracterWordlength) {
    char firstFourCaractersKey[CaracterWordlength]; 
    int i = 0;
    while (i < CaracterWordlength) {
        firstFourCaractersKey[i] = ft_RandomCaracter(chartype);
        i++;
    }
    firstFourCaractersKey[CaracterWordlength] = '\0';
    return firstFourCaractersKey;
}

string ft_GetKey(int Wordslength) {
    string Key = "";
    int i = 0;
    while (i < Wordslength) {
        Key += ft_GetFirstCaractersKey(en_characterType::capitalLetter, 4);// 4 depand for number of caracter in eatch word of key
        if (i != Wordslength - 1)
            Key += "-";
        i++;
    }
    return Key;
}

void ft_FillArrayWithKeys(string array[100], int arraylength) {
    int i = 0;
    while (i < arraylength) {
        array[i] = ft_GetKey(4); //4 it is depand fpr number of word in key
        i++;
    }
}

void ft_printStringArray(string arry[100], int arraylength) {
    int i = 0;
    while (i < arraylength) {
        cout << "Array [" << i << "] : " << arry[i] << '\n';
        i++;
    }
    cout << endl;
}

int main() {
    srand((unsigned)time(NULL));
    string array[100];
    int arraylength = ft_ReadPositifNumber("How many keys do you wante : ");

    ft_FillArrayWithKeys(array, arraylength);
    ft_printStringArray(array, arraylength);
    return 0;
}