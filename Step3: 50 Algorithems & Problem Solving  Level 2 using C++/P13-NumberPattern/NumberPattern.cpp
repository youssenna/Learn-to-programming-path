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

void ft_PrintNumberPattern (int number) {
    int i = number - 1;
    int j;

    while (i >= 0) {
        j = i;
        while (j < number) {
            cout << number - i;
            j++;    
        }
        cout << "\n";
        i--;
    }

}

int main() {
    ft_PrintNumberPattern(ft_readPositifNumber("Plese enter number : "));
    return 0;
}