#include <iostream>
#include <cstdlib>

using namespace std;

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
    while (i < lenth) {
        cout << arry[i] << ' ';
        i++;
    }
    cout << endl;
}

void ft_CopyArray(int arraySource[100], int arrayDestination[100], int length) {
    int i = 0;
    while (i < length) {
        arrayDestination[i] = arraySource[i];
        i++;
    }
}

int main() {
    srand((unsigned)time(NULL));
    int array[100], length;
    length = ft_ReadPositifNumber("Enter positf number: ");
    
    ft_FillArrayElements(array,length);
    
    cout << "\nArray 1 Elemments:\n";
    ft_printArray(array, length);
    
    int array2[100];

    ft_CopyArray(array, array2, length);
    
    cout << "\nArray 2 Elemments after copied:\n";
    ft_printArray(array2, length);
    
    return 0;
}