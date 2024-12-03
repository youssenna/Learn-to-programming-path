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

int ft_FillArrayElements(int arrayElement[100], int nbr) {
    int i = 0;
    bool addNbr = 1;
    arrayElement[i] = nbr;
    while(addNbr != 0) {
        addNbr = ft_ReadBoolienNumber("Do you want to add more number [0]:No, [1]:Yes: ");
        i++;
        if (addNbr == 0) return i;
        arrayElement[i] = ft_ReadNumber("Please enter a number : ");
    }
    return i;
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
    int array[100],
    number = ft_ReadNumber("Please enter a  number : ");
    
    int arrayLenght = ft_FillArrayElements(array,number);
    
    cout << "\nArray length:" << arrayLenght << endl;
    cout << "array Element: ";
    ft_printArray(array, arrayLenght);
    
    return 0;
}