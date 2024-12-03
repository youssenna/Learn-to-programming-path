#include <iostream>
#include <cstdlib>

using namespace std;

int ft_RandemNumber(int from, int to) {
    int randNum = rand() % (to - from + 1) + from;
    return randNum;
}

int main() {
    srand((unsigned)time(NULL));
    cout << ft_RandemNumber(1, 10) << endl;
    cout << ft_RandemNumber(1, 10) << endl;
    cout << ft_RandemNumber(1, 10) << endl;
}