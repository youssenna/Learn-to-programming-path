/*
Write a program to ask the user to enter 3 numbers:
    A B C

Then Print Max number.

Example Inputs:
30
10
20

output =>
30
*/
#include <iostream>

using namespace std;

void ft_read3Numbers(int numbers[3]) {
    for(int i = 0; i < 3; i++) {
        cout << "enter  number " << i+1 << "\n";
        cin >> numbers[i];
    }
}

int ft_selectMaxNbr(int numbers[3]) {
    int max;
    max = numbers[0];
    int i = 1;
    while (i < 3)
    {
        if (numbers[i] > max)
            max = numbers[i];
        i++;
    }
    return max;
}

void ft_printMax(int numbers[3]) {
    cout << "Max = " << ft_selectMaxNbr(numbers) << endl;
}

int main() {
    int numbers[3];
    ft_read3Numbers(numbers);
    ft_printMax(numbers);
    // int sizenumbers = sizeof(numbers) / sizeof(numbers[0]);
    // int lastelement = numbers[sizenumbers - 1];
    // int max = numbers[0];
    // int i = 0;
    // while (i < sizenumbers) {
    //     if (numbers[i] > max) max = numbers[i];
    //     i++;
    // }
    // cout << "max = " << max << endl;

    return 0;
}