#include <iostream>

using namespace std;

long long ft_fibonacciWithRecursion(short index) {
    if (index == 1 || index ==2) return 1;
    return ft_fibonacciWithRecursion(index - 1) + ft_fibonacciWithRecursion(index - 2);
}

int main() {

    short i = 1;
    // print fibonaci series of 10
    while (i <= 10) {
        cout << ft_fibonacciWithRecursion(i) << "    ";
        i++;
    }
    cout << endl;

    return 0;
}