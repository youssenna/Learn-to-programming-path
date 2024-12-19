#include <iostream>

using namespace std;

string ft_ReadString(string message) {
    string S;
    cout << message;
    getline(cin, S);

    return S;
}

string ft_ReplaceWords(string str, string strToReplace, string ReplaceTO) {
    int pos = str.find(strToReplace);
    while (pos != std::string::npos) {
        str = str.replace(pos, strToReplace.length(), ReplaceTO);
        pos = str.find(strToReplace);
    }
    return str;
}

int main() {
    
    string str = "Hello I youssef lyoussef I I am youssef ennajar youssef_from moroco .\n";
    cout << "original string\n";
    cout << str << endl;
    
    string srcstr = ft_ReadString("enter a word you want to chang it: ");
    string rplstr = ft_ReadString("enter a word you want to change to: ");
    
    str = ft_ReplaceWords(str,srcstr,rplstr);

    cout << "\n\nstring after reversing words:\n";
    cout << str << endl;
    return 0;
}