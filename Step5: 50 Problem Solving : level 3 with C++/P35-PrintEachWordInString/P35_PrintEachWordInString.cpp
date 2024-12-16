#include <iostream>
#include <cstdio>

using namespace std;

string ft_ReadString() {
    string S;
    cout << "please enter your string?\n";
    getline(cin, S);

    return S;
}

void ft_PrintStringWords (string str) {
    string delim = " "; // delimiter
    string Sword = "";// define a string variable
    short pos = 0;
    // use find function to get position of the delimiters
    while ((pos = str.find(delim)) != string::npos) {
        Sword = str.substr(0, pos); // store the word
        if (Sword != "")  {
            cout << Sword << endl;
        }
        str.erase(0, pos + delim.length());// erase() until position and move to next word
    }
        
    if (str != "")
        cout << str << '\n'; // it print last word of the string
}

int main() {

    string str = ft_ReadString();

    cout << "\nYour string words are:\n\n";
    ft_PrintStringWords (str);

    return 0;
    
}