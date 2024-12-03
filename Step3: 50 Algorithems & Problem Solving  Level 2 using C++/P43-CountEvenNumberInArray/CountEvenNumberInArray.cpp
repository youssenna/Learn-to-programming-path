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

bool ft_Evennbr(int nbr) {
    if (nbr % 2 == 0) 
        return true;
    return false;
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

int ft_CountEvenNumberInArray(int arraySource[100], int arraySLength) {
    int i = 0;
    int countOddNumber = 0;
    while (i < arraySLength) {
        if (ft_Evennbr(arraySource[i]) == true)
            countOddNumber++;
        i++;
    }
    return countOddNumber;
}

int main() {
    srand((unsigned)time(NULL));
    int array1[100], array1length;
    array1length = ft_ReadPositifNumber("Enter positf number: ");
    
    ft_FillArrayElements(array1,array1length);
    
    cout << "\nArray Elemments:\n";
    ft_printArray(array1, array1length);
    
    int countOddNumber;
    countOddNumber = ft_CountEvenNumberInArray(array1, array1length);
    
    cout << "\nnumber of Even number is " << countOddNumber << endl;
    return 0;
}