/*
Copyright© 2022Mohammed Abu-HadhoudMBA, PMOC, PgMP®, PMP®, PMI-RMP®, CM, ITILF, MCPD, MCSD26+ years of experienceProblem #2
Write a program to ask the use to enter his/her name and print it on screen
*/
#include <iostream>
#include <string>

using namespace std;

string ft_readname() {
    string name;
    cout << "enter your name : ";
    getline(cin ,name);
    return name;
}
void ft_printname(string name) {
    cout << "your name is " << name << endl;
};

int main() {
    ft_printname(ft_readname());
    return 0;
}