#include <iostream>

using namespace std;

enum enSelectContry {Morocco = 1, Algery = 2, Franch = 3, jourdn = 4, English = 5, usa = 6, canada = 7};

void ft_chekContry(int c) {
    enSelectContry contry;
    contry = (enSelectContry)c;

    if (contry == enSelectContry::Morocco) {
        cout << "Moroccohabibiiiiiiiiiiii\n\n";
    }
    else if (contry == enSelectContry::Algery) {
        cout << "1 2 3 dima lalgerie\n";
    }
    else if (contry == enSelectContry::Algery) {
        cout << "1 2 3 dima lalgerie\n";
    }
    else if (contry == enSelectContry::Franch) {
        cout << "Franch\n";
    }
    else if (contry == enSelectContry::jourdn) {
        cout << "Jourdn\n";
    }
    else if (contry == enSelectContry::English) {
        cout << "English\n";
    }
    else if (contry == enSelectContry::usa) {
        cout << "USA\n";
    }
    else if (contry == enSelectContry::canada) {
        cout << "Canada\n";
    }
}
void readContryNum(int &c) {

    cout << "********************************\n";
    cout << "enter number of contry \n";
    cout << "(1) Morocco \n";
    cout << "(2) Algery \n";
    cout << "(3) Franch \n";
    cout << "(4) Jourdn\n";
    cout << "(5) English\n";
    cout << "(6) USA\n";
    cout << "(7) Canada\n";
    cout << "********************************\n";
    cin >> c;
    cout << "your choise is !\n";
}
int main() {
    int c;
    readContryNum(c);
    ft_chekContry(c);
}