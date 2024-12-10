#include <iostream>

using namespace std;

void ft_PrintFibonacciSeriseUsingLoop(short index) {
    int FibNbr = 0;
    int prev1 = 0, prev2 = 1;

    cout << "1    ";
    short i = 2;
    while (i <= index) {
        FibNbr = prev1 + prev2;
        cout << FibNbr << "    ";
        prev1 = prev2;
        prev2 = FibNbr;
        i++;
    }
}

int main() {
    int array[10];
    ft_PrintFibonacciSeriseUsingLoop(100);
    cout << endl;

    return 0;
}