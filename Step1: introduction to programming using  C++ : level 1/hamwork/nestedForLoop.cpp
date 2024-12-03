#include <iostream>

using namespace std;

void ft_AAtoZZ(void) {
    for (char i = 65 ; i <= 90; i++) {
        for(char j = 65; j <= 90; j++) {
            cout << i << j << endl;
        }
    }
}

void ft_starRectengle(void) {
    for (int i = 9; i >= 0; i--) {
        // cout << '*';
        for (int j = i; j >= 0; j--) {
            cout << '*';
        }
        cout << endl;
    }
}

void ft_RectangleNumbers1 (void) {
    for (int i = 10; i > 0; i--) {
        // cout << '*';
        for (int j = i; j > 0; j--) {
            cout << i - j + 1;
        }
        cout << endl;
    }
}

void ft_RectangleNumbers2(void) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j <= i; j++) {
            cout << j + 1;
        }
        cout << endl;
    }
}

void ft_RectanglAlphabet(void) {
    for (char i = 'A'; i <= 'F'; i++) {
        for (char j = 'A'; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void ft_RectangleNumbers3(void) {
    for (int i = 10; i > 0; i--) {
        // cout << '*';
        for (int j = i; j > 0; j--) {
            cout << 10 - j + 1  << " ";
        }
        cout << endl;
    }
}

int main() {
    ft_AAtoZZ();
    ft_starRectengle();
    ft_RectangleNumbers1();
    ft_RectanglAlphabet();
    ft_RectangleNumbers2();
    ft_RectangleNumbers3();
    return 0;
}