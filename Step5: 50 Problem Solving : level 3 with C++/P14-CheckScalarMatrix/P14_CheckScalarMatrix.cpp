#include <iostream>
#include <iomanip>

using namespace std;

int ft_RandomNumber(short from, short to) {

    int RandomNumber = rand() % (to - from + 1) + from;

    return RandomNumber;
}

void ft_Fill_3_3MatrixWithRandomNumbers(int matrix[3][3], short Row, short Columns) {

    short i = 0;
    short j;

    while (i < Row) {
        j = 0;
        while (j < Columns) {
            matrix[i][j] = ft_RandomNumber(1, 10);
            j++;
        }
        i++;
    }
}

void ft_Print_3x3_Matrix(int matrix[3][3], short Row, short Columns) {

    short i = 0;
    short j;
    
    while (i < Row) {
        j = 0;
        while (j < Columns) {
            cout << setw(2) << matrix[i][j] << "    ";
            j++;
        }
        cout << endl;
        i++;
    }
}

bool ft_IsScalarMatrix(int matrix[3][3], short Row, short cols) {
    short i = 0;
    short j = 0;
    int FirstDiagonal = matrix[0][j];

    while (i < Row) {
        j = 0;
        while (j < cols) {
            // check for diagonals elements
            if (i == j && matrix[i][j] != FirstDiagonal)
                return false;
            // check for rest elements
            else if (i != j && matrix[i][j] != 0)
                return false;
            j++;
        }
        i++;
    }
    return true;
}

void ft_printIsIsScalarMatrix(int matrix[3][3], short row, short col) {
    
    if (ft_IsScalarMatrix(matrix, row, col)) {
        cout << "Yes: matrixes is scalar.";
    } 
    else
        cout << "No: matrixes is not scalar.";
    cout << endl;
}

int main() {
    //seed the random number fenerator in c++. called only one in the program
    srand((unsigned)time(NULL));
    
    int matrix1[3][3] = {{76,0,0}, {0,76,0}, {0, 0, 76}};
    int matrix2[3][3];
    
    cout << "\nMatrix:\n";
    ft_Print_3x3_Matrix(matrix1, 3, 3);
    ft_printIsIsScalarMatrix(matrix1, 3, 3);
    
    cout << endl;

    cout << "\nMatrix:\n";
    ft_Fill_3_3MatrixWithRandomNumbers(matrix2, 3, 3);
    ft_Print_3x3_Matrix(matrix2, 3, 3);
    ft_printIsIsScalarMatrix(matrix2, 3, 3);

    return 0;
}