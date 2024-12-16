#include <iostream>
#include <cstdio>

using namespace std;

string ft_ReadString() {
    string S;
    cout << "please enter your string?\n";
    getline(cin, S);

    return S;
}

short ft_CountWords(string str) {
    string delim = " "; // delimiter
    int countWords = 0;
    string Sword = "";// define a string variable
    short pos = 0;
    // use find function to get position of the delimiters
    while ((pos = str.find(delim)) != string::npos) {
        Sword = str.substr(0, pos); // store the word
        if (Sword != "")  {
            countWords++; //count each word in string before delimeter
        }
        str.erase(0, pos + delim.length());// erase() until position and move to next word
    }
        
    if (str != "") {
        countWords++; // it count last word of the string
    }
    return countWords;
}

int main() {

    string str = ft_ReadString();

    cout << "\nYour String words number is: ";
    cout << ft_CountWords(str) << endl;

    return 0;
    
}