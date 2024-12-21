#include <iostream>
#include <vector>
#include <fstream>

using namespace std;
string ClientsFileName = "Clients.txt";

struct st_ClientInfo {
    string AccountNumber, Name, PhoneNumber, PINcode;
    float AccountBalance;
};

string ft_Readstring(string message) {
    string str;
    cout << message;
    // use of std::ws will extract all the whitespace character
    getline(cin >> ws ,str);
    return str;
}

float ft_Readfloat(string message) {
    float nbr;
    cout << message;
    cin >> nbr;

    return nbr;
}


st_ClientInfo ft_ReadInfoFromClient() {
    st_ClientInfo ClientInfo;

    ClientInfo.AccountNumber = ft_Readstring("Enter Acoount Number? ");
    ClientInfo.PINcode = ft_Readstring("Enter PIN code? ");
    ClientInfo.Name = ft_Readstring("Enter Name? ");
    ClientInfo.PhoneNumber = ft_Readstring("Enter Phone Number? ");
    ClientInfo.AccountBalance = ft_Readfloat("Enter Acount balance? ");
    
    return ClientInfo;
}

void ft_AddNewClientToFile(string fileName, string data) {
    fstream Myfile;
    Myfile.open(fileName, ios::out | ios::app);
    if (Myfile.is_open()) {
        Myfile << data << endl;
        Myfile.close();
    }
}

vector<string> ft_ConvertClientInfoToString(st_ClientInfo ClientInfo) {
    vector<string> VClientInfo;
    VClientInfo.push_back(ClientInfo.AccountNumber);
    VClientInfo.push_back(ClientInfo.PINcode);
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

void ft_ReasetScreen() {
    cout << "\033[0m";// set color of background to default on lunix system
    system ("color");//set color of background to default on windows system
    cout << "\033[2J\033[H";//clear screen in linix and mac os system
    system("cls");// clear screen in windows system
}        // cin.ignore();


void ft_AddClientsToFile() {
    char AddNewClient = 'Y';
    while (AddNewClient == 'Y' || AddNewClient == 'y') {
        
        ft_ReasetScreen();
        cout << "Adding New Clients:\n\n";
        ft_AddNewClientToFile(ClientsFileName, ft_ConvertRecordToLine(ft_ReadInfoFromClient(), "#//#"));
        cout << "\nClient Added Succcessfully, Do You want to add more clients? (Y/N)? ";
        cin >> AddNewClient;
    }
}

int main() {

    ft_AddClientsToFile();

    return 0;
}