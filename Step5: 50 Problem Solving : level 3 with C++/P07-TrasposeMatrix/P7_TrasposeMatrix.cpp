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

void ft_Print_3x3Matrix(int matrix[3][3], short Row, short Columns) {
    short i = 0;
    short j;
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


void ft_TransposeCols(int matrix[3][3], int trasposeMatrix[3][3], short Rows, short Cols) {

    short i = 0;

    while (i < Rows) {
        trasposeMatrix[Cols][i] = matrix[i][Cols];
        i++;
    }
}

void ft_TransposeMatrix(int matrix[3][3], int trasposeMatrix[3][3], short Row, short Cols) {

    short j = 0;
    
    while (j < Cols) {
        ft_TransposeCols(matrix, trasposeMatrix, Row, j);
        j++;
    }
}

int main() {
    //seed the random number fenerator in c++. called only one in the program
    srand((unsigned)time(NULL));
    
    int matrix[3][3];
    int trasposeMatrix[3][3];

    ft_Fill_3x3MatrixWithOrderNumbers(matrix, 3, 3);
    cout << "The following is a 3x3 ordered matrix:\n";
    ft_Print_3x3Matrix(matrix, 3, 3);

    ft_TransposeMatrix(matrix, trasposeMatrix, 3, 3);
    
    cout << "\nThe Following is the transposed matrix:\n";
    ft_Print_3x3Matrix(trasposeMatrix, 3, 3);
    
    return 0;
}