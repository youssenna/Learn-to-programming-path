/*
Write a program to ask the user to enter:
    Number1, Number2, Number3

Then Print the Sum of entered numbers
Example Inputs:
10
20
30

output =>
60
*/
#include <iostream>

using namespace std;
//sum of three numbers using structer
struct stnumbers {
    int num1;
    int num2;
    int num3;
};

stnumbers ft_readNumber() {
    stnumbers number;
    cout << "Enter number 1 \n";
    cin >> number.num1;
    
    cout << "Enter number 2 \n";
    cin >> number.num2;
    
    cout << "Enter number 3 \n";
    cin >> number.num3;
    return number;
}

int ft_SumOf3numbers(stnumbers number) {
    return number.num1 + number.num2 + number.num3;
}

//fonction print sum of 3 numbers using structer
void ft_printSum(stnumbers number) {
    cout << "sum of " << number.num1 << " + " << number.num2 << " + " << number.num3 << " = " << ft_SumOf3numbers(number) << endl;
}

void ft_readNumberUsingCallByReferance(int &nbr1, int &nbr2, int &nbr3) {
    stnumbers number;
    cout << "Enter number 1 \n";
    cin >> nbr1;
    
    cout << "Enter number 2 \n";
    cin >> nbr2;
    
    cout << "Enter number 3 \n";
    cin >> nbr3;
}

int ft_SumOf3numbersUsingCallByReferance(int nbr1, int nbr2, int nbr3) {
    return nbr1 + nbr2 + nbr3;
}

void ft_PrintSumOf3NumberUsingCallByReferance(int num1, int num2, int num3) {
    cout << "sum of " << num1 << " + " << num2 << " + " << num3 << " = " << ft_SumOf3numbersUsingCallByReferance(num1, num2, num3) << endl;
}

void ft_readNumberUsingArray(int numbers[3]) {
    int i = 0;
    while (i < 3) {
        cout << "enter number " << i+1 << '\n';
        cin >> numbers[i];
        i++;
    }
}
int ft_SumOf3numbersUsingArray(int numbers[3]) {
    return numbers[0] + numbers[1] + numbers[2];
}
void ft_printSumOf3NumbersUsingArray(int numbers[3]) {
    cout << "sum of " << numbers[0] << " + " << numbers[1] << " + " << numbers[2] << " = " << ft_SumOf3numbersUsingArray(numbers) << endl;
}
int main()
{
    int nbr1, nbr2, nbr3;
    cout << "\nsum of 3 number using structrs\n";
    ft_printSum(ft_readNumber());
    cout << "\nsum of 3 number using call by referance\n";
    ft_readNumberUsingCallByReferance(nbr1, nbr2, nbr3);
    ft_PrintSumOf3NumberUsingCallByReferance(nbr1, nbr2, nbr3);
    int numbers[3];
    cout << "sum of 3 numbers using  array\n";
    ft_readNumberUsingArray(numbers);
    ft_printSumOf3NumbersUsingArray(numbers);
    return 0;
}
