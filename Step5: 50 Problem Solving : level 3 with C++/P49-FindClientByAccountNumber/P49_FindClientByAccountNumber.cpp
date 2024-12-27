#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

string ClientFileName;

struct st_ClientInfo {
    string AccountNumber, PINCode, Name, PhoneNumber, Balance;
};

vector<string> ft_split (string str, string delim) {
    int pos = 0;
    vector <string> vstr;
    string word = "";
    while ((pos = str.find(delim)) != string::npos) {
        word = str.substr(0, pos);
        if (word != "") {
            vstr.push_back(word);
        }
        str.erase(0, pos + delim.length());
    }
    if (str != "") {
        vstr.push_back(str);
    }
    return vstr;
}

st_ClientInfo ft_ConvertLineToRecord(string str) {
    vector<string> vstr = ft_split(str, "#//#");
    st_ClientInfo ClientInfo;
    ClientInfo.AccountNumber = vstr.at(0);
    ClientInfo.PINCode = vstr.at(1);
    ClientInfo.Name = vstr.at(2);
    ClientInfo.PhoneNumber = vstr.at(3);
    ClientInfo.Balance = vstr.at(4);
    return ClientInfo;
}

void ft_PrintClientInfo(st_ClientInfo ClientInfo) {
    cout << "\n\nAcoount Number : " << ClientInfo.AccountNumber << endl;
    cout << "PIN code       : " << ClientInfo.PINCode << endl;
    cout << "Name           : " << ClientInfo.Name << endl;
    cout << "Phone Number   : " << ClientInfo.PhoneNumber << endl;
    cout << "Acount balance : " << stoi(ClientInfo.Balance) << endl;
}

void ft_FindClientByAccountNumber(string fileName, string AccountNumber) {
    fstream MyFile;
    MyFile.open(fileName, ios::in);//read mod
    if(MyFile.is_open()) {
        string line;
        bool findClient = false;
        while (getline(MyFile, line)) {
            if(line.find(AccountNumber) != string::npos) {
                findClient = true;
                cout << "\nThe following are the client detaile.";
                ft_PrintClientInfo(ft_ConvertLineToRecord(line));
            }
        }
        if (findClient == false)
            cout << "Client With Account Number(" << AccountNumber << ") Not found !\n";
        MyFile.close();
    }
}

int main() {
    string AcountNumber;
    cout << "\nPlease enter account number? ";
    cin >> AcountNumber;
    ft_FindClientByAccountNumber("Client.txt", AcountNumber);
}