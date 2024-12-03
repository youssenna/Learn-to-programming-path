#include <iostream>

using namespace std;

struct st_persenalInfo {
    string name;
    int age;
} youssef,ahmad;

int main() {
    /*int a = 10;
    int *P = &a;
    cout << "\n//////////////////////// start pointer definition /////////////////////////\n\n";
    cout << "a value is " << a << endl;
    cout << "a address is " << &a << endl;

    cout << "P pointer value " << P << endl;
    cout << "the value of the address that this P is pointing to is " << *P << endl;
    cout << "\n//////////////////////// Dereferencing /////////////////////////\n\n";

    a = 14;
    cout << "the value of a after change value of a " << a << endl;
    cout << "the value of the address that this P is pointing to after change value of a " << *P << endl;

    *P = 100;

    cout << "the value of a after dereferncing of P " << a << endl;
    cout << "the value of the address that this P is pointing to after dereferncing of P is " << *P << endl;

    // Arrays and pointer
    cout << "\n//////////////////////// Array and pointer /////////////////////////\n\n";
    int array[11] = {1,2,3,4,76,67,97,534,21232,5,2};
    int *p = array;

    cout << "address of indexes ";
    cout << p << endl;
    cout << p + 1 << endl;
    cout << p + 2 << endl;
    cout << p + 3 << endl;

    cout << "the memory address of array is: " << p << endl;
    cout << "the memory address of array elements is: " << endl;

    for (int i = 0; i < 11; i++) {
        cout << p + i << " | and the value of this adress is: " << *(p + i) << endl; 
    }

    cout << "\n//////////////////////// structer and pointer /////////////////////////\n\n";

    st_persenalInfo *ptr, ahmad;

    ptr = &ahmad;
    ahmad.name = "ahmad bakd";
    ahmad.age = 23;
    
    // print value of pointer
    cout << "name of youssef is: " << ptr->name << endl;
    cout << "age of youssef is: " << ptr->age << endl;
    
    // print value of pointer
    
    cout << "address of name of youssef is: " << &ptr->name << endl;
    cout << "address of age of youssef is: " << &ptr->age << endl;

    // pointer and 2D arrays*/

    int array[4][3] = { { 1,2,3 } , { 4,5,6 } , { 7,8,9} , { 10,11,12 } };
    int (*ptr)[3] = array;

    for (int i = 0; i<4; i++) {
        for(int j = 0; j < 3; j++) {
            cout << &ptr[i] << "  ";
        }
        cout << endl;
    } 
    cout << "\n \n";
    for (int i = 0; i<4; i++) {
        for(int j = 0; j < 3; j++) {
            cout << ptr[i] + j << "  ";
        }
        cout << endl;
    } 
    cout << "\n \n";
    for (int i = 0; i<4; i++) {
        for(int j = 0; j < 3; j++) {
            cout << *ptr[i] + j << "  ";
        }
        cout << endl;
    }
    // dynamique 2d array
    int row, column;
    cout << "\n____________________________________\n\n";

    cout << "enter row of array you wante : ";
    cin >> row;
    cout << "enter column of array you wante : ";
    cin >> column;

    int **p = new int*[row];

    for (int i = 0; i < row; i++) {
        p[i] = new int[column];
    }

    cout << "fill in array \n";

    for (int i = 0; i<row; i++) {
        for(int j = 0; j < column; j++) {
            cout << "element row = " << i+1 << " column = " << j+1 << endl;
            cin >> p[i][j];
        }
    }

    cout << "you entered \n";

    for (int i = 0; i<row; i++) {
        for(int j = 0; j < column; j++) {
            cout << p[i][j] << "  ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++) {
        delete[] p[i];
    }

    delete[] p;




    return 0;
}