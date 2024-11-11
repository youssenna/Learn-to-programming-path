#include <iostream>
#include <cstdlib>

using namespace std;

enum en_characterType {smallLetter = 1, capitalLetter = 2, specialCaracter = 3, digit = 4};

int ft_RandomNumber(int from, int to) {
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

void ft_FillArrayElements(int arrayElement[100], int length) {
    int i = 0;
    while (i < length) {
        arrayElement[i] = ft_RandomNumber(1, 100);
        i++;
    }
}

void ft_printArray(int arry[100], int lenth) {
    int i = 0;
    cout << "\nArrat Elemment: ";
    while (i < lenth) {
        cout << arry[i] << " ";
        i++;
    }
    cout << endl;
}

int main() {
    int array[100], length;
    length = ft_ReadPositifNumber("Eter positf number: ");
    
    ft_FillArrayElements(array,length);
    ft_printArray(array, length);
    
    return 0;
}