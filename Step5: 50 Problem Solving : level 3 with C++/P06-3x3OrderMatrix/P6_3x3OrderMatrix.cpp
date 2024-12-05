#include <iostream>
#include <iomanip>

using namespace std;

void ft_Fill_3x3MatrixWithOrderNumbers(int matrix[3][3], short Row, short Columns) {
    short i = 0;
    short j;
    short value = 0;
    while (i < Row) {
        j = 0;
        while (j < Columns) {
            matrix[i][j] = ++value;
            j++;
        }
        i++;
    }
}

void ft_Print_3_3Matrix(int matrix[3][3], short Row, short Columns) {
    int i = 0;
    int j;
    while (i < Row) {
        j = 0;
        while (j < Columns) {
            cout << matrix[i][j] << setw(6) << "    ";
            j++;
        }
        cout << endl;
        i++;
    }
}

int main() {
    //seed the random number fenerator in c++. called only one in the program
    srand((unsigned)time(NULL));
    
    int matrix[3][3];
    
    ft_Fill_3x3MatrixWithOrderNumbers(matrix, 3, 3);
    cout << "The following is a 3x3 ordered matrix:\n";
    ft_Print_3_3Matrix(matrix, 3, 3);
    
    return 0;
}