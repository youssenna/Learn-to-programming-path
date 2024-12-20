#include <iostream>
#include <vector>

using namespace std;

struct st_ClientInfo {
    string AccountNumber, Name, PhoneNumber, PINcode;
    string AccountBalance;
};

st_ClientInfo ft_ConvertVectorToStruct(vector<string> vstring) {
    st_ClientInfo ClientInfo;
    ClientInfo.AccountNumber = vstring.at(0);
    ClientInfo.PINcode = vstring.at(1);
    ClientInfo.Name = vstring.at(2);
    ClientInfo.PhoneNumber = vstring.at(3);
    ClientInfo.AccountBalance = vstring.at(4);
    
    return ClientInfo;
}

vector<string> ft_SplitString(string str, string delim) {
    vector<string> vstr;
    int pos = 0;
    string Word;
    while ((pos = str.find(delim)) != string::npos) {
        Word = str.substr(0,pos);
        if (str != "")
            vstr.push_back(Word);
        str.erase(0, pos + delim.length());
    }
    if (str != "") {
        vstr.push_back(str);
    }
    return vstr;
}

void ft_ConverLineTORecord(string str, string delim) {
    vector<string> Vstr = ft_SplitString(str, delim);
    st_ClientInfo ClientInfo = ft_ConvertVectorToStruct(Vstr);

    cout << "\n\nAcoount Number : " << ClientInfo.AccountNumber << endl;
    cout << "PIN code       : " << ClientInfo.PINcode << endl;
    cout << "Name           : " << ClientInfo.Name << endl;
    cout << "Phone Number   : " << ClientInfo.PhoneNumber << endl;
    cout << "Acount balance : " << stod(ClientInfo.AccountBalance) << endl;
}

int main() {

    cout << "\nLine Record is:\n";
    string Record = "PB82298#//#D137323275#//#Youssef#//#0710018456#//#192.000000";
    cout << Record;
    cout << "\nThe Following is the extracted client record:\n";
    ft_ConverLineTORecord(Record, "#//#");

    return 0;
}