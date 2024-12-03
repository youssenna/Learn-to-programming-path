#include <iostream>

using namespace std;

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

void ft_FillElements(int arrayElement[100], int &arrayLength) {
    bool addNbr = 1;
    arrayLength = 0;
    while(addNbr) {
        ft_AddArraElement(ft_ReadNumber("Please enter a number : "), arrayElement, arrayLength);
        cout << "Do you want to add more number [0]:No, [1]:Yes: ";
        cin >> addNbr;
    }
}

void ft_printArray(int arry[100], int lenth) {
    int i = 0;
    while (i < lenth) {
        cout << arry[i] << ' ';
        i++;
    }
    cout <<'\n' <<endl;
}

int main() {
    int array[100], arrayLength;
    
    ft_FillElements(array, arrayLength);
    cout << "\nArray length:" << arrayLength << endl;
    cout << "array Element: ";
    ft_printArray(array, arrayLength);
    
    return 0;
}