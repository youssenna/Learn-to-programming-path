#include <iostream>
#include <cstdlib>

using namespace std;

void ft_FillArrayElements(int arrayElement[100], int& arraylength) {
    arraylength = 10;
    arrayElement[0] = 10;
    arrayElement[1] = 10;
    arrayElement[2] = 10;
    arrayElement[3] = 20;
    arrayElement[4] = 20;
    arrayElement[5] = 70;
    arrayElement[6] = 70;
    arrayElement[7] = 70;
    arrayElement[8] = 70;
    arrayElement[9] = 90;
}

void ft_printArray(int arry[10], int lenth) {
    int i = 0;
    while (i < lenth) {
        cout << arry[i] << ' ';
        i++;
    }
    cout << endl;
}

void ft_AddArrayElement(int number, int arrayElement[10], int &arrayLength) {
    arrayLength++;
    arrayElement[arrayLength - 1] = number;
}

bool ft_checkNumberIsRepeat(int number,int arraySorce[10], int index) {
    int i = 0;
    while (i < index) {
        if (arraySorce[i] == arraySorce[index])
            return false;
        i++;
    }
    return true;
}

void ft_CopyArray(int arraySource[10], int arrayDestination[10], int arraySLength, int &arrayDlength) {
    int index = 0;
    while (index < arraySLength) {
        if (ft_checkNumberIsRepeat(arraySource[index],arraySource, index) == true)
            ft_AddArrayElement(arraySource[index], arrayDestination, arrayDlength);
        index++;
    }
}

int main() {
    srand((unsigned)time(NULL));
    int array1[100], array1length;
    ft_FillArrayElements(array1,array1length);
    
    cout << "\nArray 1 Elemments:\n";
    ft_printArray(array1, array1length);
    
    int array2[10];
    int array2Length = 0;

    ft_CopyArray(array1, array2, array1length, array2Length);
    
    cout << "\nArray 2 distinct elemments:\n";
    ft_printArray(array2, array2Length);
    
    return 0;
}