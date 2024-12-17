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

int main() {
    vector<string> strings {"hi", "hello", "hamid"};
    cout << "\nVector after join\n";
    cout << ft_strjoin(strings, "...  ") << endl;
    return 0;
}