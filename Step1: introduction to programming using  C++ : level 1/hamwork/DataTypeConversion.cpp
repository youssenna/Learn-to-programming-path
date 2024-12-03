#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "43.22";
    int toint;
    double todouble;
    float tofloat;

    toint = stoi(str);
    todouble = stod(str);
    tofloat = stof(str);

    int N1 = 20;
    double N2 = 33.5;
    string str1;
    string str2;
    str1 = to_string(N1);
    str2 = to_string(N2);

    double N3 = 55.23;
    int N3int = N3;
    int N32int = (int)N3;
    int N31int = int(N3);
    string str3 = to_string(N3);

    cout << toint << "\n" << todouble << "\n" << tofloat << "\n" << str1 << "\n" << str2 << "\n" << N3int << "\n" << N32int << "\n" << N31int << "\n" << str3 << endl;
    return 0;
}
