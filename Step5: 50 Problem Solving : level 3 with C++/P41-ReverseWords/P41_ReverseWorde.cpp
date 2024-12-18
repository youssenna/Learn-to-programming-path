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

string ft_strjoin(vector<string> strings, string sep) {
    string st = "";
    for(string &str : strings) {
        str = str + sep;
        st += str;
        // cout << str << sep;
    }
    return st.substr(0, st.length() - sep.length());
}

vector<string> ft_ReverseELementInVector(vector<string> vstr) {
    int i = vstr.size() - 1;
    vector<string> revvec;
    while (i >= 0) {
        revvec.push_back(vstr[i]);// complit vector strtin in the last element of source vector
        i--;
    }
    return revvec;
}

int main() {
    vector<string> vstr;
    string str = ft_ReadString();
    vstr = ft_split(str, " ");
    vstr = ft_ReverseELementInVector(vstr);
    str = ft_strjoin(vstr, " ");

    cout << "\n\nstring after reversing words:\n";
    cout << str << endl;
    return 0;
}