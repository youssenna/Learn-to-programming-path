/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IsPalidromeArray.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssef <youssef@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:26:57 by youssef           #+#    #+#             */
/*   Updated: 2024/11/15 01:05:33 by youssef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int ft_ReadPositifNumber(string message) {
    int nbr = -1;
    while (nbr <= 0 ) {
        cout << message;
        cin >> nbr;
    }
    return nbr;
}

int ft_readNumber(string message) {
    int nbr;
    cout << message;
    cin >> nbr;
    return nbr;
}
void ft_FillArrayElements(int arrayElement[100], int length) {
    int i = 0;
    while (i < length) {
        arrayElement[i] = ft_readNumber("enter number " + to_string(i+1) + " : ");
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

void ft_ReversOrderOfArray(int arraySource[100], int arrayDestenation[100], int arrayLength) {
    int i = arrayLength;
    int j = 0;
    while (j < arrayLength) {
        arrayDestenation[j] = arraySource[j];
        i--;
        j++;
    }
}

bool ft_chekIsPalindromeArray(int arraySource[100], int arrayDestenation[100], int arrayLength) {
    int i = arrayLength - 1;
    int j = 0;
    while (j < arrayLength) {
        if(arrayDestenation[i] == arraySource[j]) {
            i--;
            j++;
        }
        else return false;
    }
    return true;
}

int main() {
    int array1[100], arrayLength;
    arrayLength = ft_ReadPositifNumber("enter length of array: ");

    ft_FillArrayElements(array1, arrayLength);

    cout << "\nArray Elemments: ";
    ft_printArray(array1, arrayLength);
    
    int array2[100];
    ft_ReversOrderOfArray(array1, array2, arrayLength);
    
    if(ft_chekIsPalindromeArray(array1, array2, arrayLength))
        cout << "\nYes, it is a Palindrom Array.\n";
    else
        cout << "\nNo, it is not a Palindrom Array.\n";

    return 0;   
}