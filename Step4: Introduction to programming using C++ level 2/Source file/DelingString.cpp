#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string s = "My Name youssef ennajar, I love programming.";

    //string length
    
    cout << "this is my string \'" << s << "\'\nand this is length of my string: " << s.length() << endl;

    //return the letter at position 3

    cout << s.at(3) << endl;

    // add @pramming to end of the string

    cout << s.append("@programming") << endl;

    // to insert Ali at position 7

    cout << s.insert(7, " Ali") << endl;

    //print all the next 8 letters from position 15

    cout << s.substr(15, 8) << endl;

    // add one caracter to end of the string
    
    s.push_back('c');
    cout << s << endl;

    // remove the last caracter in the string

    s.pop_back();
    cout << s << endl;

    // find Ali in the string

    cout << s.find("Ali") << endl;

    // find ali in my string

    cout << "if the string not found it the find function return this value :" << s.find("ali") << endl;

    if (s.find("ali") == s.npos) { // npos = value that returned by found function if the string not found it
        cout << "not found it" << endl;
    }

    // clear string

    s.clear();
    cout << s << endl;

    char c = 'c';
    char y = 'Y';

    c = toupper(c);
    y = tolower(y);

    cout << "c to uppercase is: " << c << endl;
    cout << "Y to lowercase is: " << y << endl;

    //(A to Z) return 0 if not and non of yes

    cout << "isuper(A): " << isupper('A') << endl;
    //(a to z) return 0 if not and non of yes

    cout << "islower(A): " << islower('A') << endl;
    //(0 to 9) return 0 if not and non of yes

    cout << "isdigit(A): " << isdigit('A') << endl;

    //punctuation characters are !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~
    // return 0 if not and non of yes
    
    cout <<  "ispunct(+): " << ispunct('+') << endl;


    return 0;
}