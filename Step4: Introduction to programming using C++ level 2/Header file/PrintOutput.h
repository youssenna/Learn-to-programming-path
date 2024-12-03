#pragma once

#include <iostream>
#include <cstdio>
#include <vector>
#include <iomanip>

using namespace std;

namespace PrintNumber {
    
    void ft_PrintNumber(int nbr) {
        cout << nbr << '\n';
    }
}

namespace PrintString {
    void ft_PrintString(string str) {
        cout << str << '\n';
    }
}

namespace PrintChar {
    void ft_PrintChar(char c) {
        cout << c << '\n';
    }
} 

namespace PositifOrNegatveNbr {
    string ft_PositifOrNrgativeNumber(int nbr) {
        return (nbr < 0) ? "Negative number" : (nbr == 0) ? "Null number" : "Positive Number";
    }
}

namespace RangedLoop {
    void ft_PrintArrayEllement() {
        int array[6] = {1,2,3,45,5,6};
        for (int n : array) {
            cout << n << endl;
        }
    }
}

namespace ValidNumber {

    size_t ft_strlen(const string &str) {
        int i = 0;
        while(str[i]) {
            i++;
        }
        return i;
    }

    bool ft_empty(const string &str) {
        if (ft_strlen(str) != 0)
            return false; 
        return true;
    }

    bool ft_IsValideNumber(const string& input) {
        if (ft_empty(input)) return false;

        size_t start = 0;
        if (input[0] == '-') {
            if(ft_strlen(input) == 1) {
                return false;
            }
            start = 1;
        }

        size_t i = start;
        while (i < ft_strlen(input)) {
            if (input[i] < '0' || input[i] > '9')
                return false;
            i++;
        }
        return true;
    }

    int Ft_StringToInteger(const string &input) {
        int Result = 0;
        int Sign = 1;
        int Start = 0;

        if (input[0] == '-') {
            Sign = -1;
            Start++;
        }

        while (input[Start]) {
            Result = Result * 10 + (input[Start] - '0');
            Start++;
        }
        return Result * Sign;
    }

    void ft_ReadValidNumber() {
        string userinput;
        cout << "enter a number: ";
        cin >> userinput;

        while (ft_IsValideNumber(userinput) == false) {

            cout << "Invalide input please enter number: ";
            cin >> userinput;
        }
        int number = Ft_StringToInteger(userinput);
        cout << "Valide number: " << userinput << endl;
    } 
}

namespace Fonction {
    int ft_DefaultParameters(int a, int c, int b = 0, int d = 5) {
        return a + b + c + d;
    }

    int ft_functionOverloding_add(int a, int b) {
        return a + b;
    }
    int ft_functionOverloding_add(float c, float b) {
        return c + b;
    }
    int ft_functionOverloding_add(int a, int b, int c) {
        return a + b + c;
    }
    int ft_functionOverloding_add(int a, int b, int c, int d) {
        return a + b + c + d;
    }
}

namespace Recursion {
    void ft_PrintNbrsFromNToM_Rucursion(int N, int M) {
        if (N >= M) {
            cout << N << endl;
            ft_PrintNbrsFromNToM_Rucursion(N - 1, M);
        }
    }

    int ft_PowerM_rucursion(int base, int Power) {
        if (Power == 0)
             return 1;
        return (base * ft_PowerM_rucursion(base , Power - 1));
    }
}

namespace TwoDemensionArray {
    void ft_PrintArrayOf2Demension () {
        int array[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12},};
        int i = 0, j;

        while (i < 3) {
            j = 0;
            while (j < 4) {
                cout << array[i][j] << ' ';
                j++;
            }
            i++;
            cout << endl;
        }
    }
    
    void ft_PrintTableOfMulUsing2DArray () {
        int array[10][10];
        int i = 0, j = 0;

        while (i < 10) {
            j = 0;
            while (j < 10) {
                array[i][j] = (i + 1) * (j + 1);
                printf("%0*d ", 2, array[i][j]);
                j++;
            }
            i++;
            printf("\n");
        }
    }
    
}

namespace Vector {
    // initial vectors
    void ft_VectorInistialization () {
        vector <char> v_Numbers = {'1','2','3','r','5','6'};
        
        cout << "the vecteur numbers = ";

        for (char &Numbers : v_Numbers) {
            cout << Numbers << "  ";
        }
        cout << endl;
    }
    // vector add elements
    void AddElementToVectors () {
        vector <int> v_Numbers;
        
        v_Numbers.push_back(12);
        v_Numbers.push_back(1);
        v_Numbers.push_back(122);
        v_Numbers.push_back(121);
        v_Numbers.push_back(126);
        v_Numbers.push_back(129);
        v_Numbers.push_back(120);
        v_Numbers.push_back(124);
        v_Numbers.push_back(127);

        cout << "the vecteur numbers = ";

        for (int &Numbers : v_Numbers) {
            cout << Numbers << "  \n";
        }
        cout << endl;
    }


    int ft_ReadValidNumber(string message) {
        string userinput;
        cout << message;
        cin >> userinput;

        while (ValidNumber::ft_IsValideNumber(userinput) == false) {

            cout << "!Invalide input \n";
            cin >> userinput;
        }
        int number = ValidNumber::Ft_StringToInteger(userinput);
        return number;
} 
    vector <int> ft_ReadElementsInVector() {
        vector <int> v_Numbers;
        int number;
        char AddNewElement = 'y';
        while (AddNewElement == 'y') {
            number = ft_ReadValidNumber("\nenter number to fill a vector: ");
            v_Numbers.push_back(number);
            cout << "\n\ndo you wnat to add Number? (y/n) ";
            cin >> AddNewElement;
            cin.ignore(1,'\n');
        }
        return v_Numbers;
    }

    void ft_PrintVectorElements() {
        vector <int> V_Numbers = ft_ReadElementsInVector();
        
        cout << "\nyou entered :\n";

        for(int &Number : V_Numbers) {
            cout << Number << endl;
        }
    }

    //Vector of struct

    struct st_employementInfo{
        string FirstName;
        string LastName;
        int salary;
        int employemntNumber = 0;
    };

    void ft_VectorOfStruct() {
        vector <st_employementInfo> v_Employement;

        st_employementInfo Employement;

        Employement.FirstName = "youssef";
        Employement.LastName = "ennajar";
        Employement.salary = 10000000;

        v_Employement.push_back(Employement);
        Employement.FirstName = "Abdeleilah";
        Employement.LastName = "ennajar";
        Employement.salary = 20000000;

        v_Employement.push_back(Employement);
        Employement.FirstName = "Salim";
        Employement.LastName = "ennajar";
        Employement.salary = 10000000;

        v_Employement.push_back(Employement);

        cout << "the vector elements is\n\n";
        //range loop
        for (st_employementInfo &emplymentInfo : v_Employement) {
            cout << "first name: " <<  emplymentInfo.FirstName << endl;
            cout << "Last name : " <<  emplymentInfo.LastName << endl;
            cout << "Manthly salory: " <<  emplymentInfo.salary << "\n\n";
        }
    }
    // fonction read employement info into vector of struct
    void ft_ReadVectorOfStruct(vector <st_employementInfo> &v_emplyement) {
        st_employementInfo employement;
        char AddNewEmployement = 'y';
        while (AddNewEmployement == 'y' || AddNewEmployement == 'Y') {
            printf("Enter employement first name : ");
            cin >> employement.FirstName;
            
            printf("Enter employement last name  : ");
            cin >> employement.LastName;
            cin.ignore();
            
            cout << "enter employement salory :";
            cin >> employement.salary;
            employement.employemntNumber++;
            v_emplyement.push_back(employement);
            
            printf("do you want to add new employement? (y/n) ");
            cin >> AddNewEmployement;
        }
    }
    // fonction read employement info into vector of struct
    void ft_PrintVectorOfStruct(vector <st_employementInfo> &v_emplyement) {
        printf("\nYou entred :\n");
        for (st_employementInfo &emplyement : v_emplyement) {
            cout << "\nEmployement " << emplyement.employemntNumber;
            cout << "\nfirst name: " <<  emplyement.FirstName << endl;
            cout << "Last name : " <<  emplyement.LastName << endl;
            cout << "Manthly salory : " <<  emplyement.salary << "\n\n";
        }
    }
}