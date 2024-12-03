#include <iostream>
#include <fstream>//its importont to work with files
#include <vector>

using namespace std;


// this function save vector to file
void ft_saveVectorToFile(string fileName, vector <string> v_FileContent) {
    fstream myFile;

    myFile.open(fileName, ios::out);// write mode

    if (myFile.is_open()) {
        for (string &line : v_FileContent) {
            if (line != "") {
                myFile << line << endl;
            }
        }
        myFile.close();
    }    
}

//this function load data from file to vector
void ft_LoadDataFromFileToVector(string fileName, vector <string> &VfileContent) {
    fstream myFile;

    myFile.open(fileName, ios::in);// read mode

    if (myFile.is_open()) {
        string line;//declare string variable
        while (getline(myFile, line)) {
            VfileContent.push_back(line);
        }

        myFile.close();
    }
}

// this function delete record from file

void ft_DeleteRecordFromFile(string FileName, string Record) {
    fstream myFile;

    vector <string> v_FileContent;

    ft_LoadDataFromFileToVector(FileName, v_FileContent);

    myFile.open(FileName, ios::out);// write mode

    if (myFile.is_open()) {
        for (string &line : v_FileContent) {
            if (line == Record) {
                line = "";
            }
        }
        ft_saveVectorToFile(FileName, v_FileContent);
        myFile.close();
    }  
}

// this function update record in file to your choise
void ft_UpdateRecordinFile(string FileName, string Record, string updateTo) {
    fstream myFile;

    vector <string> v_FileContent;

    ft_LoadDataFromFileToVector(FileName, v_FileContent);

    myFile.open(FileName, ios::out);// write mode

    if (myFile.is_open()) {
        for (string &line : v_FileContent) {
            if (line == Record) {
                line = updateTo;
            }
        }
        ft_saveVectorToFile(FileName, v_FileContent);
        myFile.close();
    }  
}

// this function print file content
void ft_printFileContent(string fileName) {
    fstream myFile;

    myFile.open(fileName, ios::in);// read mode

    if (myFile.is_open()) {
        string line;//declare string variable
        while (getline(myFile, line)) {
            cout << line << endl;
        }

        myFile.close();
    }
}

int main() {
    fstream myFile;

    // writing mode in files
    myFile.open("myfile.txt", ios::out);// write mode

    if (myFile.is_open()) {
        myFile << "#include <iostream>\n";
        myFile << "using namespace std;\n";
        myFile << "\nint main(){\n";
        myFile << "     cout << \"hello\";\n";
        myFile << "}\n";
        myFile.close();
    }

    // append mode in files
    myFile.open("myfile.txt", ios::out | ios::app);// append mode

    if (myFile.is_open()) {
        myFile << "#include <iostream>\n";
        myFile << "using namespace std;\n";
        myFile << "\nint main(){\n";
        myFile << "     cout << \"hello\";\n";
        myFile << "}\n";
        myFile.close();
    }

    cout << "\n\n__________________ Print data file without anything __________________\n\n";


    ft_printFileContent("files.cpp");

    cout << "\n\n__________________ Print data file using vector after loaded it __________________\n\n";

    vector <string> vFileContent;
    ft_LoadDataFromFileToVector("files.cpp", vFileContent);

    for (string &line : vFileContent) {
        cout << line << endl;
    }

    // save vector to file
    vector <string> v_filecontent{ "youssef", "youssef ennajar", "said", "ahmad", "samir" };
    ft_saveVectorToFile("file.txt", v_filecontent);

    cout << "\n\n__________________ Delete record from file __________________\n\n";

    cout << "file.txt file befre delete \'youssef\' from it\n";
    ft_printFileContent("file.txt");

    ft_DeleteRecordFromFile("file.txt", "youssef");

    cout << "file.txt file after delete \'youssef\' from it\n";
    ft_printFileContent("file.txt");
    
    cout << "\n\n__________________ Update record in file __________________\n\n";
    
    cout << "file.txt file befor update \'said\' to \'youssef\' from it\n";
    ft_printFileContent("file.txt");
    
    ft_UpdateRecordinFile("file.txt", "said", "youssef");

    cout << "file.txt file after update \'said\' to \'youssef\' from it\n";
    ft_printFileContent("file.txt");
    
    return 0;
}