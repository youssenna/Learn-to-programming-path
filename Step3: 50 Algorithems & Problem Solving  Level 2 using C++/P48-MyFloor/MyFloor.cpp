#include <iostream>
# include <cmath>

using namespace std;

float ft_ReadNumber(string message) {
    float nbr;
    cout << message;
    cin >> nbr;
    return nbr;
}

float ft_MyFloorFunction(float nbr) {
    if(nbr - (int)nbr != 0 && nbr < 0)
        return (int)nbr - 1;
    return int(nbr);   
}

int main() {
    float number;
    number = ft_ReadNumber("enter a float number to see its round: ");
    cout << "\n\nMy floor Resoult : " << ft_MyFloorFunction(number); 
    cout << "\n\nC++ floor Resoult: " << floor(number) << endl; 
}