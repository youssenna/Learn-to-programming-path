#include <iostream>

#include "../Header file/MyFirstLib.h"
#include "../Header file/ReadInput.h"
#include "../Header file/PrintOutput.h"


using namespace std;

int main() {
    cout << "this is the result of 12 + 11  + 5 using fonction of Parameter and 4 arguments and 2 parameter: " << Fonction::ft_DefaultParameters(12,11) << endl;
    cout << "this is the result of 12 + 11 + 18 + 5 using fonction of Parameter and 4 arguments and to parameter: " << Fonction::ft_DefaultParameters(12,11,18) << endl;
    cout << "this is the the result using fonction overloding " << Fonction::ft_functionOverloding_add(1,1) << endl;
    cout << "this is the the result using fonction overloding " << Fonction::ft_functionOverloding_add(1.1,1) << endl;
    cout << "this is the the result using fonction overloding " << Fonction::ft_functionOverloding_add(1,1,1) << endl;
    cout << "this is the the result using fonction overloding " << Fonction::ft_functionOverloding_add(1,1,1,1) << endl;
}