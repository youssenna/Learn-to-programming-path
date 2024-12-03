#include <iostream>

using namespace std;

int main() {
    // declare an int pointer
    int *ptrX;

    // declare an float pointer

    float *ptrY;

    // declare an char pointer

    char *ptrZ;

    // declare an string pointer

    // dynamic allication memory

    ptrX = new int;

    ptrY = new float;

    ptrZ = new char;


    cout << "the address of int pointer  befor allocated is   : " << &ptrX << endl;
    cout << "the address of float pointer befor  allocated is : " << &ptrY << endl;
    cout << "the address of char pointer befor  allocated is  : " << (int)ptrZ << endl;


    // assigning value to the memory

    *ptrX = 12;

    *ptrY = 12.3;

    *ptrZ = 'j';

    cout << "the value of int pointer allocated is   : " << *ptrX << endl;
    cout << "the value of float pointer allocated is : " << *ptrY << endl;
    cout << "the value of char pointer allocated is  : " << *ptrZ << endl;


    cout << "the address of int pointer  after allocated is   : " << &ptrX << endl;
    cout << "the address of float pointer after allocated is : " << &ptrY << endl;
    cout << "the address of char pointer  after allocated is  : " << (int)ptrZ << endl;

    // dellocatr the memory

    delete ptrX;
    delete ptrY;
    delete ptrZ;

    ptrX = nullptr;
    ptrY = nullptr;
    ptrZ = nullptr;

    cout << "\n //////////////////dynamic array new[] - delete[]/////////////////";

    int nbr;

    cout << "\nenter number of students: ";
    cin >> nbr;

    float *ptr;

    ptr = new float[nbr];

    // fill in students marks

    cout << "enter marks of:\n";
    
    for(int i = 0; i < nbr; i++) {
        cout << "student " << i+1 << ": ";
        cin >> *(ptr + i);
    }

    cout << "\n\nYou entered :\n";
    for (int i = 0; i < nbr; i++) {
        cout << "student " << i + 1 << ": " << *(ptr + i) << endl;
    }

    delete[] ptr;
   return 0;
}