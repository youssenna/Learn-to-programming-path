#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>

using namespace std;

string ClientsFileName = "Clients.txt";

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


string ft_Tabs(int nbr) {
    string tab = "";
    int i = 0;
    while (i < nbr) {
        tab += "\t";
        i++;
    }
    return tab;
}

void ft_ConverLineTORecord(string str, string delim) {
    vector<string> Vstr = ft_SplitString(str, delim);
    st_ClientInfo ClientInfo = ft_ConvertVectorToStruct(Vstr);

    cout << " | " << setw(20) << ClientInfo.AccountNumber  << " | ";
    cout << setw(15) << ClientInfo.PINcode << " | ";
    cout << setw(40) << ClientInfo.Name  << " | ";
    cout << setw(15) << ClientInfo.PhoneNumber  << " | ";
    cout << setw(10) << stoi(ClientInfo.AccountBalance) << " | " << endl;
}

void ft_GetClientsFromFile(int NumberOfClient, string fileName, string delim) {
    fstream Myfile;
    vector <string> vclientinfo = ft_SplitString(fileName, "\n");
    Myfile.open(fileName, ios::in);
    int i = 0;
    if (Myfile.is_open()) {
        string line;
        while (getline(Myfile, line) && i < NumberOfClient) {
            ft_ConverLineTORecord(line, delim);
            i++;
        }
        Myfile.close();
    }
}

void ft_PrintClientsList(int NbrOfClient, string fileName, string delim) {
    cout << "\n" << ft_Tabs(6) << "Client list (" << NbrOfClient << ") Clients.\n";

    cout << "________________________________________________________________________________________________________________________\n\n";
    cout << " | " << setw(20) << left << "Acoount Number " << " | " << setw(15)
    << left     << "PIN code  " << " | " << setw(40) << left << "client Name " << " | "
    << setw(15) << left << "Phone Number" << " | " << setw(10) << left << "Balance" << " | " << endl;
    cout << "________________________________________________________________________________________________________________________\n\n";
    
    ft_GetClientsFromFile(NbrOfClient, fileName, delim);
    
    cout << "\n_______________________________________________________________________________________________________________________\n\n";
}

int main() {
    int NbrOfClient;
    cout << "enter how many client you wante to see: ";
    cin >> NbrOfClient;
    ft_PrintClientsList(NbrOfClient, ClientsFileName, "#//#");

    return 0;
}