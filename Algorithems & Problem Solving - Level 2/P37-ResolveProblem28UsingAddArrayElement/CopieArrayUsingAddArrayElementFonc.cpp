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

int ft_ReadNumber(string message) {
    int nbr;
    cout << message;
    cin >> nbr;
    return nbr;
}

bool ft_ReadBoolienNumber(string message) {
    int nbr;
    cout << message;
    cin >> nbr;
    return nbr;
}

void ft_AddArraElement(int number, int arrayElement[100], int &arrayLength) {
    arrayLength++;
    arrayElement[arrayLength - 1] = number;
}

void ft_CopyArray(int arraySource[100], int arrayDestination[100], int arraySLength, int &arrayDlength) {
    arrayDlength = 0;
    while (arrayDlength < arraySLength) {
        ft_AddArraElement(arraySource[arrayDlength], arrayDestination, arrayDlength);
    }
}

int main() {
    srand((unsigned)time(NULL));
    int array1[100], array1length;
    array1length = ft_ReadPositifNumber("Enter positf number: ");
    
    ft_FillArrayElements(array1,array1length);
    
    cout << "\nArray 1 Elemments:\n";
    ft_printArray(array1, array1length);
    
    int array2[100];
    int array2Length;

    ft_CopyArray(array1, array2, array1length, array2Length);
    
    cout << "\nArray 2 Elemments after copied:\n";
    ft_printArray(array2, array2Length);
    
    return 0;
}