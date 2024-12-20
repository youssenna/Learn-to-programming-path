#include <iostream>
#include <vector>

using namespace std;

string ft_ReadString(string message) {
    string S;
    cout << message;
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

string ft_strjoin(vector<string> strings, string sep) {
    string st = "";
    for(string &str : strings) {
        str = str + sep;
        st += str;
        // cout << str << sep;
    }
    return st.substr(0, st.length() - sep.length());
}

char ft_toUpper(char c) {
    if (c >= 97 && c <= 122)
        return c - 32;
    else
    return c;
}

string ft_toUpperstring(string str) {
    int i = 0;
    
    while (str[i]) {
        str[i] = ft_toUpper(str[i]);
        i++;
    }
    return str;
}
 


string ft_ReplaceWordsInStringUsingSplit(string str, string strToReplace, string ReplaceTO, bool matchCase = false) {
    vector<string> vstring = ft_split(str, " ");

    for(string &s : vstring) {
        if (matchCase) {
            if (s == strToReplace)
                s = ReplaceTO;
        }
        else {
            if (ft_toUpperstring(s) == ft_toUpperstring(strToReplace))
                s = ReplaceTO;
        }
    }
    return ft_strjoin(vstring, " ");
}

int main() {
    string str = "Hello I Youssef I I am YouSSef ennajar youssef _from moroco .\n";
    cout << "Original string\n";
    cout << str << endl;
    
    string srcstr = ft_ReadString("enter a word you want to chang it: ");
    string rplstr = ft_ReadString("enter a word you want to change to: ");
    
    cout << "\n\nReplace with match case:\n";
    cout << ft_ReplaceWordsInStringUsingSplit(str,srcstr,rplstr, true) << endl;

    cout << "\nReplace with dont match case:\n";
    cout << ft_ReplaceWordsInStringUsingSplit(str,srcstr,rplstr) << endl;

    return 0;
}