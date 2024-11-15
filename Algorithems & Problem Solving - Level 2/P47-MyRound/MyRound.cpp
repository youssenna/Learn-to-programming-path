#include <iostream>
# include <cmath>

using namespace std;

float ft_ReadNumber(string message) {
    float nbr;
    cout << message;
    cin >> nbr;
    return nbr;
}

float ft_MyRoundFunction(float nbr) {
    if (nbr > 0){
        if(nbr - (int)nbr < 0.5)
            return int(nbr);    
        else
            return (int)nbr + 1;
    }

    else {
        if(nbr - (int)nbr > -0.5)
            return int(nbr);    
        else
            return (int)nbr - 1;
    }
}

int main() {
    float number;
    number = ft_ReadNumber("enter a float number to see its round: ");
    cout << "\n\nMy Round Resoult : " << ft_MyRoundFunction(number); 
    cout << "\n\nC++ Round Resoult: " << round(number) << endl; 
}