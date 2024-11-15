#include <iostream>
#include <cmath>

using namespace std;

float ft_ReadNumber(string message) {
    float nbr;

    cout << message;
    cin >> nbr;

    return nbr;
}

float ft_MyABS(float nbr) {
    if (nbr >= 0)
        return nbr;
    return nbr * -1;
}

int main() {
    float number = ft_ReadNumber("enter poaitve or negative number then you can see its abs: ");
    
    cout << "\n\nmy abs resoult: " << ft_MyABS(number);
    cout << "\n\nC++ abs resoult: " << abs(number) << endl;
}