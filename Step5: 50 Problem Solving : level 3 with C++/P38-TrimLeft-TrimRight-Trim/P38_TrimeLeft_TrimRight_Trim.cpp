#include <iostream>
#include <vector>

using namespace std;

string ft_TrimLeft(string str, char delim) {
    int i = 0;
    
    while (str[i] == delim) {
        i++;
    }
    str.erase(0, i);
    return str;
}

string ft_TrimRight(string str, char delim) {
    int i = str.length() - 1;
    int j = 0;
    while (str[i] == delim) {
        i--;
        j++;
    }
    str.erase(str.length() - j, str.length());
    return str;
}


string ft_Trim(string str, char delim) {
    return ft_TrimLeft(ft_TrimRight(str, delim), delim);
}

int main() {
    string str = "      Hi Iam youssef      ";
    cout << "string      = \'" << str << '\'' << endl;
    cout << "\nTrimLeft    = \'" << ft_TrimLeft(str, ' ') << '\'' << endl;
    cout << "TrimRight   = \'" << ft_TrimRight(str, ' ') << '\'' << endl;
    cout << "Trim        = \'" << ft_Trim(str, ' ') << '\'' << endl;
    return 0;
}