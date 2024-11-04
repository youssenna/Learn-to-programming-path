/*
Write a program to ask the user to enter:
    Mark1, Mark2, Mark3

Then Print the Average of entered Marks
Example Inputus
90
80
70

output =>
80
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

float ft_averageOf3numbers(stnumbers number) {
    return (float)ft_SumOf3numbers(number) / 3;
}

//fonction print average of 3 numbers using structer
void ft_printaverage(stnumbers number) {
    cout << "sum of " << number.num1 << " , " << number.num2 << " , " << number.num3 << " = " << ft_averageOf3numbers(number) << endl;
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

float ft_averageOf3numbersUsingCallByReferance(int nbr1, int nbr2, int nbr3) {
    return (float)ft_SumOf3numbersUsingCallByReferance(nbr1, nbr2, nbr3) / 3;
}

void ft_PrintAverageOf3NumberUsingCallByReferance(int num1, int num2, int num3) {
    cout << "the average of " << num1 << " , " << num2 << " , " << num3 << " = " << ft_averageOf3numbersUsingCallByReferance(num1, num2, num3) << endl;
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


float ft_averageOf3numbersUsingArray(int numbers[3]) {
    return (float)ft_SumOf3numbersUsingArray(numbers) / 3;
}

void ft_printAverageOf3NumbersUsingArray(int numbers[3]) {
    cout << "the average of " << numbers[0] << " , " << numbers[1] << " , " << numbers[2] << " = " << ft_averageOf3numbersUsingArray(numbers) << endl;
}

int main()
{
    int nbr1, nbr2, nbr3;
    cout << "\nsum of 3 number using structrs\n";
    ft_printaverage(ft_readNumber());
    cout << "\nsum of 3 number using call by referance\n";
    ft_readNumberUsingCallByReferance(nbr1, nbr2, nbr3);
    ft_PrintAverageOf3NumberUsingCallByReferance(nbr1, nbr2, nbr3);
    int numbers[3];
    cout << "sum of 3 numbers using  array\n";
    ft_readNumberUsingArray(numbers);
    ft_printAverageOf3NumbersUsingArray(numbers);
    return 0;
}
