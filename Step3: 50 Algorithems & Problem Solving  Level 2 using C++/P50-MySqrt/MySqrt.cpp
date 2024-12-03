#include <iostream>
# include <cmath>

using namespace std;

float ft_ReadNumber(string message) {
    float nbr;
    cout << message;
    cin >> nbr;
    return nbr;
}

float ft_MySqrtFunction(float nbr) {
    return pow(nbr, 0.5);
}

int main() {
    float number;
    number = ft_ReadNumber("enter a float number to see its round: ");
    cout << "\n\nMy ft_Mysqrt Resoult : " << ft_MySqrtFunction(number); 
    cout << "\n\nC++ sqrt resoult: " << sqrt(number) << endl; 
}