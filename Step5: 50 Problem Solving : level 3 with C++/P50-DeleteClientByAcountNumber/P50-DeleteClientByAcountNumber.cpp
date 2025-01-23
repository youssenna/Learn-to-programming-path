#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

struct st_ClientInfo {
    string AcountNumber;
    string PinCode;
    string Name;
    string PhoneNumber; 
    double AcountBalance;
    bool MarkClientfordelete = false;
};

const string ClientsFileName = "client.txt";

string ft_ReadAcountNumber() {
    string str;

    cout << "Please enter account number? ";
    getline(cin, str);

    return str;
}

vector<string> ft_SplitStringLine(string str, string delim = "/##/") {
    string word;
    vector<string> vstr;
    int pos;
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

st_ClientInfo ft_ConvertVectorToStruct(vector<string> vstr) {
    st_ClientInfo ClientInfo;
    if (vstr.size() >= 5) {
        ClientInfo.AcountNumber = vstr[0];
        ClientInfo.PinCode = vstr[1];
        ClientInfo.Name = vstr[2];
        ClientInfo.PhoneNumber = vstr[3];
        ClientInfo.AcountBalance = stod(vstr[4]);
        // try {
        // } catch (...) {
        //     ClientInfo.AcountBalance = 0;
        // }
    }

    return ClientInfo;
}

st_ClientInfo ft_ConvertLineToRecord(string line) {
    st_ClientInfo ClientInfo;
    
    vector<string> vstr = ft_SplitStringLine(line);
    ClientInfo = ft_ConvertVectorToStruct(vstr);
    return ClientInfo;
}

vector<st_ClientInfo>   ft_LoadClientsFromFile(string fileName) {
    fstream MyFile;
    vector<st_ClientInfo> vstr;
    
    MyFile.open(fileName, ios::in);//read mod
    if(MyFile.is_open()) {
        string line;
        st_ClientInfo ClientInfo;
        
        while (getline(MyFile, line)) {
            ClientInfo = ft_ConvertLineToRecord(line);
            vstr.push_back(ClientInfo);
        }
        MyFile.close();
    }

    return vstr;
}

bool ft_FindClientByAcountNumber(string AcountNumber, vector<st_ClientInfo> &vClients, st_ClientInfo &ClientInfo) {
    for (st_ClientInfo &Client : vClients) {
        if (Client.AcountNumber == AcountNumber) {
            ClientInfo = Client;
            return true;
        }
    }
    return false;
}

void ft_PrintClientInfo(st_ClientInfo ClientInfo) {
    cout << "\nThe following are the client detaile.\n\n";
    cout << "\n\nAcoount Number : " << ClientInfo.AcountNumber << endl;
    cout << "PIN code       : " << ClientInfo.PinCode << endl;
    cout << "Name           : " << ClientInfo.Name << endl;
    cout << "Phone Number   : " << ClientInfo.PhoneNumber << endl;
    cout << "Acount balance : " << ClientInfo.AcountBalance << endl;
}

void ft_MarkClientToDeleteByAcountNumber(string AcountNumber, vector<st_ClientInfo> &vstr) {
    for (st_ClientInfo & client : vstr) {
        if (client.AcountNumber == AcountNumber) {
            client.MarkClientfordelete = true;
        }
    }
}

vector<string> ft_ConvertStructToVector(st_ClientInfo ClientInfo) {
    vector<string> vstr; 
    vstr.push_back(ClientInfo.AcountNumber);
    vstr.push_back(ClientInfo.PinCode);
    vstr.push_back(ClientInfo.Name);
    vstr.push_back(ClientInfo.PhoneNumber);
    vstr.push_back(to_string(ClientInfo.AcountBalance));
    return vstr;
}

string ft_JoinString(vector<string> vstr, string sep) {
    string str = "";
    for(string st : vstr) {
        st = st + sep;
        str +=  st;        
    }
    return str.substr(0, str.length() - sep.length());
}

string ft_ConvertRecordToLine(st_ClientInfo ClientInfo) {
    vector<string> vClient = ft_ConvertStructToVector(ClientInfo);
    string line = ft_JoinString(vClient, "/##/");
    return line;
}

void ft_SaveClientToFile(string fileName, vector<st_ClientInfo> vstr) {
    fstream MyFile;
    MyFile.open(fileName, ios::out);//write mode
    if(MyFile.is_open()) {
        for (st_ClientInfo Client : vstr) {
            if(Client.MarkClientfordelete == false) {

                //we are only write clients that not mark for delete
                string Clientline = ft_ConvertRecordToLine(Client);
                MyFile << Clientline << endl;
            }
        }
        MyFile.close();
    }
}


void ft_DeleteClientByAcountNumber(string AcountNumber, vector<st_ClientInfo> &vClients) {
    st_ClientInfo ClientInfo;
    char ConfermDeleting = 'n';
    if (ft_FindClientByAcountNumber(AcountNumber, vClients, ClientInfo)) {
        ft_PrintClientInfo(ClientInfo);
        cout << "Are You sure you want to delete this client? (y/n) ";
        cin >> ConfermDeleting;
        if (ConfermDeleting == 'Y' || ConfermDeleting == 'y') {
            ft_MarkClientToDeleteByAcountNumber(AcountNumber, vClients);
            ft_SaveClientToFile(ClientsFileName, vClients);

        // refresh clients
        vClients = ft_LoadClientsFromFile(ClientsFileName);

        cout << "\nClient deleted sucssefuly\n";
        }
    }
    else cout << "Client not found it";
}

int main() {
    string AcountNumber;
    vector<st_ClientInfo> vClients;
    
    vClients = ft_LoadClientsFromFile(ClientsFileName);
    AcountNumber = ft_ReadAcountNumber();

    ft_DeleteClientByAcountNumber(AcountNumber, vClients);
    return 0;
}