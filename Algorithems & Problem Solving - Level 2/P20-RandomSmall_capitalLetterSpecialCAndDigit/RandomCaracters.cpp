#include <iostream>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To) {
    //fonctio generate random fonction
    int RandomNumber = rand() % (To - From + 1) + From;
    return RandomNumber;
}

int main() {
    // seeds the rondom number generate in C++, call only once
    srand((unsigned)time(NULL));
    char RandomSmallLetter = (char)RandomNumber(97, 122);
    char RandomCapitalLetter = (char)RandomNumber(65, 90);
    char RandomSpecialC = (char)RandomNumber(0, 47);
    char RandomDigit = (char)RandomNumber(48, 57);
    
    cout << RandomSmallLetter << endl;
    cout << RandomCapitalLetter << endl;
    cout << RandomSpecialC << endl;
    cout << RandomDigit << endl;
    return 0;
}