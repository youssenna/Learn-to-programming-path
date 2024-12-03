#include <iostream>

using namespace std;

struct st_info {
    string firstName;
    string LastName;
    int Age;
    string phonenbr;
};

void ft_ReadInfo(st_info &student) {
    cout << "enter first name ?\n";
    getline(cin, student.firstName);
    cout << "enter last name ?\n";
    getline(cin, student.LastName);
    cout << "enter your age ?\n";
    cin >> student.Age;
    cin.ignore(5, '\n');
    cout << "enter your phone number ?\n";
    getline(cin, student.phonenbr);
};

void ft_printInfo(st_info &student) {
    cout << "*********************************\n";
    cout << "First name : " << student.firstName << '\n';
    cout << "Last name : " << student.LastName << '\n';
    cout << "Age : " << student.Age << '\n';
    cout << "phone number : " << student.phonenbr << '\n';
    cout << "*********************************\n";
};

void ft_ReadPersonInfo(st_info student[2]) {
    ft_ReadInfo(student[0]);
    ft_ReadInfo(student[1]);
};

void ft_printStudentInfo(st_info student[2]) {
    ft_printInfo(student[0]);
    ft_printInfo(student[1]);
};

int main() {
    st_info student[2];

    ft_ReadPersonInfo(student);
    ft_printStudentInfo(student);
}