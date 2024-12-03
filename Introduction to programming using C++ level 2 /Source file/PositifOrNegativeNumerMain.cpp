#include <iostream>

#include "../Header file/MyFirstLib.h"
#include "../Header file/ReadInput.h"
#include "../Header file/PrintOutput.h"

using namespace std;

int main() {
    
    int nbr = ReadNumber::ft_ReadNumber();
    cout << PositifOrNegatveNbr::ft_PositifOrNrgativeNumber(nbr) << endl;
}