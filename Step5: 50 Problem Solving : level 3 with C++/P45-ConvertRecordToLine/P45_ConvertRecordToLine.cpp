#include <iostream>
#include <vector>

using namespace std;

struct st_ClientInfo {
    string AccountNumber, Name, PhoneNumber;
    int PINcode;
    float AccountBalance;
};

string ft_Readstring(string message) {
    string str;
    cout << message;
    getline(cin,str);
    return str;
}

int ft_ReadInteger(string message) {
    int nbr;
    cout << message;
    cin >> nbr;
    return nbr;
}

float ft_Readfloat(string message) {
    float nbr;
    cout << message;
    cin >> nbr;
    return nbr;
}


st_ClientInfo ft_ReadInfoFromClient(st_ClientInfo ClientInfo) {
    ClientInfo.AccountNumber = ft_Readstring("Enter Acoount Number? ");
    ClientInfo.PINcode = ft_ReadInteger("Enter PIN code? ");
    cin.ignore(1, '\n');
    ClientInfo.Name = ft_Readstring("Enter Name? ");
    ClientInfo.PhoneNumber = ft_Readstring("Enter Phone Number? ");
    ClientInfo.AccountBalance = ft_Readfloat("Enter Acount balance? ");
    
    return ClientInfo;
}

vector<string> ft_ConvertClientInfoToString(st_ClientInfo ClientInfo) {
    vector<string> VClientInfo;
    VClientInfo.push_back(ClientInfo.AccountNumber);
    VClientInfo.push_back(to_string(ClientInfo.PINcode));
    VClientInfo.push_back(ClientInfo.Name);
    VClientInfo.push_back(ClientInfo.PhoneNumber);
    VClientInfo.push_back(to_string(ClientInfo.AccountBalance));

    return VClientInfo;
}

string ft_joinString(vector<string> vstring, string delim) {
    string str;
    for(string &str2 : vstring) {
        str += str2 + delim; 
    }
    return str.erase(str.length() - delim.length());
}

string ft_ConvertRecordToLine(st_ClientInfo ClientInfo, string delim) {
    string str = ft_joinString(ft_ConvertClientInfoToString(ClientInfo), delim);
    return str; 
}

int main() {
    st_ClientInfo ClientInfo;

    cout << "\nPlease Enter Client Data:\n\n";

    ClientInfo = ft_ReadInfoFromClient(ClientInfo);

    cout << "\n\nClient Record for saving is:\n";
    cout << ft_ConvertRecordToLine(ClientInfo, "#//#") << endl;

    return 0;
}