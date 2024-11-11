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

void findDigitesFrequency(short int FrequencyDigit, int number) {
    int remainder = 0, i = 0;
    while (number > 0) {
        remainder =  number % 10;
        if (remainder == FrequencyDigit)
            i++;
        number /= 10;
    }
    cout << "digit " << FrequencyDigit << " freauancy is " << i << " Time(s).";
}

int main() {
    int number = ft_readPositifNumbers("Plese enter main number : ");
    short int FrequencyDigit = ft_readPositifNumbers("Please enter one digite : ");
    findDigitesFrequency(FrequencyDigit, number);
    return 0;
}