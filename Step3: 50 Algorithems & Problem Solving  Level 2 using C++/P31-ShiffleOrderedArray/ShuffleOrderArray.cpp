#include <iostream>
#include <cstdlib>

using namespace std;

int ft_ReadPositifNumber(string message) {
    int nbr = -1;
    while (nbr <= 0) {
        cout << message;
        cin >> nbr;
    }
    return nbr;
}

void ft_FillArray(int array[100], int arraylength) {
    int i = 0;
    while (i < arraylength) {
        array[i] = i+1;
        i++;
    }
}

void ft_PrintArray(int array[100], int arraylength) {
    int i = 0;
    while (i < arraylength) {
        cout << array[i] << " ";
        i++;
    }
    cout << endl;
}

int ft_RandomNumber(int From, int To) {
    int RandomNumber = rand() % (To - From + 1) + From;
    return RandomNumber;
}

void ft_swap(int &num1, int &num2) {
    int Temp;
    Temp = num1;
    num1 = num2;
    num2 = Temp;
}

void ft_ShuffleArray(int array[100], int arraylength) {
    int i = 0;
    while (i < arraylength) {
        ft_swap(array[ft_RandomNumber(1, arraylength) - 1], array[ft_RandomNumber(1, arraylength) - 1]);
        i++;
    }
}

int main() {
    srand((unsigned)time(NULL));
    int array[100], arrayLenght;
    arrayLenght = ft_ReadPositifNumber("Enter lenth of array max is 100:\n");
    
    ft_FillArray(array, arrayLenght);
    
    cout << "\nArray bufor dhuffle\n";
    ft_PrintArray(array, arrayLenght);

    ft_ShuffleArray(array, arrayLenght);
    cout << "\n\nArray after dhuffle\n";
    ft_PrintArray(array, arrayLenght);

    return 0;
}