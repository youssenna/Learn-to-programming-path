#include <iostream>
#include <string>

using namespace std;

void my_sum_procedures() {
    int num1;
    int num2;
    cout << "please enter the first number : \n";
    cin >> num1;
    cout << "please enter the secand number : \n";
    cin >> num2;
    cout << "************************\n";

    cout << num1 + num2 << "\n";
}

int my_sum_function() {
    int num1;
    int num2;
    cout << "please enter the first number : \n";
    cin >> num1;
    cout << "please enter the secand number : \n";
    cin >> num2;
    cout << "************************\n";
    return num1 + num2;
};

int main() {
    my_sum_procedures();
    int result = my_sum_function();
    cout << result << "\n";
    return 0;
};
