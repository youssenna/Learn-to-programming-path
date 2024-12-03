#pragma once

#include <iostream>

using namespace std;

namespace ReadNumber {
    
    int ft_ReadNumber() {
        int nbr;
        cout << "Enter number: ";
        cin >> nbr;
        return nbr;
    }

    int ReadPositfNumber() {
        int nbr = -1;
        while (nbr <= 0) {
            cout << "Enter positif number: ";
            cin >> nbr;
        }
        return nbr;
    }

    bool IsValidNumber(int number, int from, int to) {// {from, to} they take the range ofnumber you want to check
    
        return (number >= from && number <= to);
    
    }

}

namespace ReadString {
    string ft_ReadString() {
        string str;
        cout << "Enter your name: ";
        getline(cin, str);
        return str;
    }
}

namespace ReadChar {
    char ft_ReadChar() {
        char c;
        cout << "Enter character: ";
        cin >> c;
        return c;
    }
}