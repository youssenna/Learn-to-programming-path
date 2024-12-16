#include <iostream>
#include <vector>

using namespace std;

string ft_ReadString() {
    string S;
    cout << "please enter your string?\n";
    getline(cin, S);

    return S;
}

vector<string> ft_split(string str, string delim) {
    vector<string> vstrings;
    short pos = 0;
    string words;
    // use find function to find delimeter position
    while ((pos = str.find(delim)) != string::npos) {
        words = str.substr(0, pos);// stock each word in this variable
        if (str != "") {
            vstrings.push_back(words); // add wode to vector of strings
        }
        str.erase(0, pos + delim.length());// erase() the worde befor delimeter in the string
    }
    if (str != "") {
        vstrings.push_back(str);// add the last word to vector
    }
    return vstrings;
}

int main() {
    string str = ft_ReadString();

    vector <string> Vstring = ft_split(str, "m");
    cout << "\nToken = " << Vstring.size() << endl;
    for(string &str : Vstring) {
        cout << str << endl;
    }
}