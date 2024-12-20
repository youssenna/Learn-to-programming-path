#include <iostream>

using namespace std;

string ft_ReadString(string message) {
    string S;
    cout << message;
    getline(cin, S);

    return S;
}

string ft_ReplaceWord(string str, int startpos, int endpos, string toReplaceStr) {
    str = str.erase(startpos, endpos);
    str = str.insert(startpos, toReplaceStr);
    return str;
}

string ft_ReplaceWordsInString(string str, string strToReplace, string ReplaceTO, bool matchCase = false) {
    if (matchCase) {
        strToReplace[0] = toupper(strToReplace[0]);
        cout << "\n\nReplace with dont match case:\n";
    }
    else 
        cout << "\n\nReplace with match case:\n";

    int pos = str.find(strToReplace);
    while (pos != std::string::npos) {
        
        str = ft_ReplaceWord(str, pos, strToReplace.length(), ReplaceTO);
        pos = str.find(strToReplace);
    }
    return str;
}

int main() {
    string str = "Hello I Youssef I I am Youssef ennajar youssef_from moroco .\n";
    cout << "original string\n";
    cout << str << endl;
    
    string srcstr = ft_ReadString("enter a word you want to chang it: ");
    string rplstr = ft_ReadString("enter a word you want to change to: ");
    
    cout << ft_ReplaceWordsInString(str,srcstr,rplstr) << endl;

    cout << ft_ReplaceWordsInString(str,srcstr,rplstr, true) << endl;

    return 0;
}