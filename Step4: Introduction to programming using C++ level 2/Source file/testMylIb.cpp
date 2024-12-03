#include <iostream>

#include "../Header file/MyFirstLib.h"
#include "../Header file/ReadInput.h"
#include "../Header file/PrintOutput.h"


using namespace std;

int main() {
    My1stLib::ft_print();
    
    cout << "\n///////////////////////////\n\n";
    
    int nbr = ReadNumber::ReadPositfNumber();
    PrintNumber::ft_PrintNumber(nbr);
    cin.ignore(1, '\n');

    string str = ReadString::ft_ReadString();
    PrintString::ft_PrintString(str);

    char c = ReadChar::ft_ReadChar();
    PrintChar::ft_PrintChar(c);

    cout << "\n///////////////////////////\n\n";

    cout << "array elements is: \n";
    RangedLoop::ft_PrintArrayEllement();

    return 0;
}