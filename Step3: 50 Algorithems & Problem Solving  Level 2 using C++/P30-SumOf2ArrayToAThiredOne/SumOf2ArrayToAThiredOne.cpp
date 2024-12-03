/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SumOf2ArrayToAThiredOne.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssef <youssef@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:31:03 by youssef           #+#    #+#             */
/*   Updated: 2024/11/12 11:31:04 by youssef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

using namespace std;

int ft_RandomNumber(int from, int to)
{
    int rendomNumber = rand() % (to - from + 1) + from;
    return rendomNumber;
}

int ft_ReadPositifNumber(string message)
{
    int nbr = -1;
    while (nbr <= 0)
    {
        cout << message;
        cin >> nbr;
    }
    return nbr;
}

void ft_FillArrayElements(int arrayElement[100], int arraySlength)
{
    int i = 0;
    while (i < arraySlength)
    {
        arrayElement[i] = ft_RandomNumber(1, 100);
        i++;
    }
}

void ft_printArray(int arry[100], int lenth)
{
    int i = 0;
    while (i < lenth)
    {
        cout << arry[i] << ' ';
        i++;
    }
    cout << endl;
}

void ft_SumOf2Arrays(int array1[100], int array2[100], int SumOf2Array[100],int length) {
    int i = 0;
    while(i < length) {
        SumOf2Array[i] = array1[i] + array2[i];
        i++;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int array1[100], arrayslength;
    int array2[100];
    arrayslength = ft_ReadPositifNumber("Enter positf number: ");

    ft_FillArrayElements(array1, arrayslength);
    ft_FillArrayElements(array2, arrayslength);

    cout << "\nArray 1 Elemments:\n";
    ft_printArray(array1, arrayslength);

    cout << "\nArray 2 Elemments:\n";
    ft_printArray(array2, arrayslength);

    int array3_sumOf2Array[100];
    ft_SumOf2Arrays(array1, array2, array3_sumOf2Array, arrayslength);

    cout << "\nSum of 2 arrays:\n";
    ft_printArray(array3_sumOf2Array, arrayslength);

    return 0;
}