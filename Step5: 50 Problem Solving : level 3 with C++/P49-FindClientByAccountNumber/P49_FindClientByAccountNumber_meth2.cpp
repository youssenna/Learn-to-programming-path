#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

string fileName = "Client.txt";

struct st_ClientInfo {
    string AcountNumber;
    string PinCode;
    string Name;
    string Phone;
    string AcountBalance;
};

string ft_ReadString(string mesage) {
    string str;
    cout << mesage;
    getline(cin >> ws, str);

    return str;
}

vector<string> ft_LoadDataFromFile(string FileName) {
    fstream Myfile;
    vector<string> vClients;
    Myfile.open(FileName, ios::in);
    if(Myfile.is_open()) {
        string line;
        while (getline(Myfile, line)) {
            vClients.push_back(line);
        }
        Myfile.close();
    }
    return vClients;
}

vector<string> ft_splitString(string str, string delim) {
    string word;
    vector<string> vstr;
    int pos = 0;

    while((pos = str.find(delim)) != string::npos) {
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

st_ClientInfo ft_ConvertVectorToStruct(vector<string> vstr) {
    st_ClientInfo ClientInfo;
    ClientInfo.AcountNumber = vstr.at(0);
    ClientInfo.PinCode = vstr.at(1);
    ClientInfo.Name = vstr.at(2);
    ClientInfo.Phone = vstr.at(3);
    ClientInfo.AcountBalance = vstr.at(4);
    return ClientInfo;
}

st_ClientInfo ft_ConvertLineToReccord(string line, string sep = "/##/") {
    vector<string> vClientInfo = ft_splitString(line, sep);
    st_ClientInfo ClientInfo = ft_ConvertVectorToStruct(vClientInfo);
    return ClientInfo;
}

bool ft_FindClientByAcountNumber(string AcountNumber, st_ClientInfo &ClientInfo) {
    vector<string> vClients = ft_LoadDataFromFile(fileName);
    for(string &client : vClients) {
        ClientInfo = ft_ConvertLineToReccord(client);
        if (ClientInfo.AcountNumber == AcountNumber) return true;
        // (ClientInfo.AcountNumber == AcountNumber) ? true : false;
    }
    return false;
}

void ft_PrintClientInfo(st_ClientInfo Client) {
    cout << "\nthe folowing are client detaile\n";

    cout << "\n" << "Acount Number : " << Client.AcountNumber  << endl;
    cout << "Pin Code      : " << Client.PinCode       << endl;
    cout << "Name          : " << Client.Name          << endl;
    cout << "phone Number  : " << Client.Phone         << endl;
    cout << "Acount Balance: " << Client.AcountBalance << endl << "\n";
}

int main() {
    st_ClientInfo ClientInfo;
    string AcountNumber = ft_ReadString("\nPlease enter acount number: ");
    if(ft_FindClientByAcountNumber(AcountNumber, ClientInfo)) {
        ft_PrintClientInfo(ClientInfo);
    }
    else
        cout << "Client with acount number(" << AcountNumber << ") Not found it" << endl;
    return 0;
}