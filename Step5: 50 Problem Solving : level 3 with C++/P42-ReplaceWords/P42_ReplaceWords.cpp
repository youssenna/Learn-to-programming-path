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

vector<string> ft_ReplaceWordsInVector(vector<string> vstr, string srcstr, string rplstr) {
    vector<string>::iterator iter = vstr.begin();
    while (iter != vstr.end()) {
        if (*iter == srcstr)
            *iter = rplstr;
        iter++;
    }
    return vstr;
}

int main() {
    vector<string> vstr;
    
    string str = "Hello I I I am youssef ennajar from moroco .\n";
    cout << "original string\n";
    cout << str << endl;
    
    string srcstr = ft_ReadString("enter a word you want to chang it: ");
    string rplstr = ft_ReadString("enter a word you want to change to: ");
    
    vstr = ft_split(str, " ");
    vstr = ft_ReplaceWordsInVector(vstr, srcstr, rplstr);
    str = ft_strjoin(vstr, " ");

    cout << "\n\nstring after reversing words:\n";
    cout << str << endl;
    return 0;
}