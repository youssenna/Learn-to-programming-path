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

void ft_PrintInvertedNumberPattern (int number) {
    int i = 0;
    int j;

    while (i < number) {
        j = i;
        while (j < number) {
            cout << number - i;
            j++;    
        }
        cout << "\n";
        i++;
    }

}

int main() {
    ft_PrintInvertedNumberPattern(ft_readPositifNumber("Plese enter number : "));
    return 0;
}