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
    cout << "\nArrat Elemment: ";
    while (i < lenth) {
        cout << arry[i] << " ";
        i++;
    }
    cout << endl;
}

int ft_MinOfArray(int array[100], int length) {
    int Min = array[0];
    int i = 0;
    while (i < length) {
        if (array[i] < Min)
            Min = array[i];
        i++;
    }
    return Min;
}

int main() {
    srand((unsigned)time(NULL));
    int array[100], length;
    length = ft_ReadPositifNumber("Enter positf number: ");
    
    ft_FillArrayElements(array,length);
    ft_printArray(array, length);
    
    cout << "\nMin number is: " << ft_MinOfArray(array, length) << endl;
    return 0;
}