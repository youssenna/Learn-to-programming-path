#include <iostream>
#include <vector>

using namespace std;

string ft_strjoin(vector<string> strings, string sep) {
    string st = "";
    for(string &str : strings) {
        str = str + sep;
        st += str;
        // cout << str << sep;
    }
    return st.substr(0, st.length() - sep.length());
}

string ft_strjoin(string strarr[], short arrlen, string sep) {
    string st = "";
    short i = 0;
    while(i < arrlen) {
        if (i != arrlen - 1 )
            st = st + strarr[i] + sep;
        else st = st + strarr[i];
        i++;
    }
    return st;
}

int main() {
    vector<string> strings {"hi", "hello", "hamid"};
    string strarr[3] = {"Hello", "Iam", "Youssef"};
    cout << "\nVector after join\n";
    cout << ft_strjoin(strings, "...  ") << endl;
    cout << "\n\nVector after join\n";
    cout << ft_strjoin(strarr, 3, "...  ") << endl;
    return 0;
}