#include <iostream>
#include <cstdlib>

using namespace std;

enum enIsPrime{Prime = 1, NotPrime = 2};

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

enIsPrime ft_chekIsPrimeNbr(int nbr) {
    int i = 2;
    if (nbr <= 1) return enIsPrime::NotPrime;//1 not primer number
    while(i <= nbr/2){
        if (nbr % i == 0)
            return enIsPrime::NotPrime;
        i++;
    }
    return enIsPrime::Prime;
}


void ft_FillArrayElements(int arrayElement[100], int arraySlength) {
    int i = 0;
    while (i < arraySlength) {
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

int ft_CopyPrimeNumberArray(int arraySource[100], int arrayDestination[100], int arraySlength, int arrayDlenth) {
    int i = 0;
    int j = 0;
    arrayDlenth = 0;
    while (i < arraySlength) {
        if (ft_chekIsPrimeNbr(arraySource[i]) == enIsPrime::Prime) {
            arrayDestination[j] = arraySource[i];
            j++;
            arrayDlenth++;
        }
        i++;
    }
    return arrayDlenth;
}

int main() {
    srand((unsigned)time(NULL));
    int array[100], arraySlength;
    arraySlength = ft_ReadPositifNumber("Enter positf number: ");
    
    ft_FillArrayElements(array,arraySlength);
    
    cout << "\nArray 1 Elemments:\n";
    ft_printArray(array, arraySlength);
    
    int array2[100];
    int array2lenth;
    
    array2lenth = ft_CopyPrimeNumberArray(array,array2,arraySlength,array2lenth);

    cout << "\nArray 2 Elemments after copied:\n";
    ft_printArray(array2, array2lenth);
    
    return 0;
}