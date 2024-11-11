#include <iostream>
#include <cstdlib>

using namespace std;

enum en_characterType {smallLetter = 1, capitalLetter = 2, specialCaracter = 3, digit = 4};

int RandomNumber(int from, int to) {
    int rendomNumber = rand() % (to - from + 1) + from;
    return rendomNumber;
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

int main() {
    srand((unsigned)time(NULL));

    cout << ft_RandomCaracter(en_characterType::smallLetter) << endl;
    cout << ft_RandomCaracter(en_characterType::capitalLetter) << endl;
    cout << ft_RandomCaracter(en_characterType::specialCaracter) << endl;
    cout << ft_RandomCaracter(en_characterType::digit) << endl;
    return 0;
}