#include <iostream>
// in this code I ude language c to practice write function
#include <unistd.h>

using namespace std;

string ft_readPassword(string message) {
    int i = 0;
    char Password[3];
    cout << message;
    cin >> Password;
    return Password;
}

void ft_PrintGuess3LetterPassword(string Password) {
    bool passwordFoundIt = false;
    int countTrial;
    countTrial = 0;
    string foundPassWord;
    int i = 65, j = 0, k = 0;
    while (i <= 90) {
        j = 65;
        while(j <= 90) {
            k = 65;
            while(k <= 90 && (foundPassWord != Password)) {
                foundPassWord = "";
                foundPassWord += char(i);  
                foundPassWord += char(j);  
                foundPassWord += char(k);
                cout << "Trial [" << countTrial + 1 << "] : " << char(i) << char(j) << char(k) << endl;
                countTrial++;
                k++;
            }
            j++;
        }
        i++;
    }
    cout << "\nPasswors is  : " << foundPassWord << "\nfound it after " << countTrial << " Trial(s)" <<endl;
    passwordFoundIt = true;
}

int main() {
    ft_PrintGuess3LetterPassword(ft_readPassword("enter password Have 3 capital letter : "));
    return 0;
}