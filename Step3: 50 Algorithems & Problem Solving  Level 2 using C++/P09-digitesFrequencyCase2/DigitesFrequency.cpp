#include <iostream>

using namespace std;

int ft_readPositifNumbers(string message1) {
    int number;
    while (number <= 0) {
        cout << message1;
        cin >> number;
    }
    return number;
}

int findDigitesFrequency(short int searshedDigit, int number) {
    int remainder = 0, FrequencyDigit = 0;
    while (number > 0) {
        remainder =  number % 10;
        if (remainder == searshedDigit)
            FrequencyDigit++;
        number /= 10;
    }
    return FrequencyDigit   ;
    // cout << "digit " << FrequencyDigit << " freauancy is " << i << " Time(s).";
}

void ft_printDigitesFrequency(int number) {
    int i = 0;
    while(i < 10) {
        if (findDigitesFrequency(i,number) != 0)
            cout << "digit " << i << " freauancy is " << findDigitesFrequency(i, number) << " Time(s).\n";
        i++;
    }
}

int main() {
    int number = ft_readPositifNumbers("Plese enter main number : ");
    ft_printDigitesFrequency(number);
    return 0;
}