#include <iostream>
#include <cstdlib>

using namespace std;

int ft_ReadPositifNumber(string message) {
    int nbr = -1;//strting nbr from -1 avoid garbage value
    while (nbr <= 0 ) {
        cout << message;
        cin >> nbr;
    }
    return nbr;
}

int ft_RandomNumber(int from, int to) {
    int randomNumber = rand() % (to - from + 1) + from;
    return randomNumber;
}

string ft_GetFirstFourCaracterKey() {
    char firstFourCaractersKey[4]; 
    int i = 0;
    while (i < 4) {
        firstFourCaractersKey[i] = char(ft_RandomNumber(65, 90));
        i++;
    }
    return firstFourCaractersKey;
}

string ft_GetKey() {
    string Key = "";
    int i = 0;
    while (i < 4) {
        Key += ft_GetFirstFourCaracterKey();
        if (i != 3)
            Key += "-";
        i++;
    }
    return Key;
}

string ft_GetNKeys(int nbr) {
    string AllKeys = "";
    int i = 0;
    while (i < nbr) {
        AllKeys += "key [" + to_string(i + 1) + "] : " + ft_GetKey() + "\n";
        i++; 
    }
    return AllKeys;
}

int main() {
    srand((unsigned)time(NULL));
    cout << ft_GetNKeys(ft_ReadPositifNumber("Please enter positif number : "));
    return 0;
}