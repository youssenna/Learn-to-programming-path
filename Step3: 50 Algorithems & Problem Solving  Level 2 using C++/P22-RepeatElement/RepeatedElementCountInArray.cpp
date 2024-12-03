#include <iostream>

using namespace std;

int ft_ReadPositifNumber(string message) {
    int nbr = -1;
    while (nbr <= 0) {
        cout << message;
        cin >> nbr;
    }
    return nbr;
}

void ft_ReadArrayElements(int arrayElement[], int nbr) {
    int i = 0;
    cout << "\nenter element of array \n";
    while (i < nbr) {
        arrayElement[i] = ft_ReadPositifNumber("Element [" + to_string(i + 1) + "] : ");
        i++;
    }
    cout << '\n';
}

int ft_checkNumberLoopInArray(int arrayOfInt[], int nbr, int numberToCheck) {
    int countLoopNumber = 0;
    int i = 0;
    while (i < nbr) {
        if (arrayOfInt[i] == numberToCheck)
            countLoopNumber++;
        i++;
    }
    return countLoopNumber;
}

void printArray(int arry[], int lenth) {
    int i = 0;
    cout << "\nOriginal array: ";
    while (i < lenth) {
        cout << arry[i] << " ";
        i++;
    }
    cout << endl;
}

int main() {
    int number = ft_ReadPositifNumber("plese enter positif number : ");
    int array[number];
    ft_ReadArrayElements(array, number);

    int checkNumber = ft_ReadPositifNumber("enter number who you went to check : ");
    printArray(array, number);
    cout << checkNumber << " is repeted " << ft_checkNumberLoopInArray(array, number, checkNumber) << " time(s)" << endl;
    return 0;
}