#include <iostream>

using namespace std;

void ft_readAray(float intAray[3]) {

    cout << "please enter the first Grade : \n";
    cin >> intAray[0];
    cout << "please enter the secand Grade : \n";
    cin >> intAray[1];
    cout << "please enter the last Grade : \n";
    cin >> intAray[2];

};

float ft_average(float intAray[3]) {
    return (intAray[0] + intAray[1] + intAray[2]) / 3;
};
void ft_printaverage(float intAray[3]) {

    float average = ft_average(intAray);

    cout << "*********************\n";
    cout << "the average of grades is " << average << endl;
};
int main() {
    float intAray[3];

    ft_readAray(intAray);
    ft_printaverage(intAray);
    return 0;
};