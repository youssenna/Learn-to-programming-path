#include <iostream>

using namespace std;

int ft_readPositifNumber(string message) {
    int nbr;
    while (nbr <= 0) {
        cout << message;
        cin >> nbr;
    }
    return nbr;
}

void ft_PrintInvertedLetterPattern (int number) {
    int i = number;
    int j;

    while (i >= 1) {
        j = 65 + i;
        while (j > 65) {
            cout << char (64 + i);
            j--;    
        }
        cout << "\n";
        i--;
    }

}

int main() {
    ft_PrintInvertedLetterPattern(ft_readPositifNumber("Plese enter number : "));
    return 0;
}