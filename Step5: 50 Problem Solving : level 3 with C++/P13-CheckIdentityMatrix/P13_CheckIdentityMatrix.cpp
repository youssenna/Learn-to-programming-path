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

bool ft_IsIdontityMatrix(int matrix[3][3], short Row, short cols) {
    short i = 0;
    short j = 0;

    while (i < Row) {
        j = 0;
        while (j < cols) {
            // check for diagonals elements
            if (i == j && matrix[i][j] != 1)
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

void ft_printIsIdentityMatrix(int matrix[3][3], short row, short col) {
    
    cout << "\nMatrix:\n";
    if (ft_IsIdontityMatrix(matrix, row, col)) {
        cout << "Yes: matrixes is identity.";
    } 
    else
        cout << "No: matrixes is not identity.";
    cout << endl;
}

int main() {
    //seed the random number fenerator in c++. called only one in the program
    srand((unsigned)time(NULL));
    
    int matrix1[3][3] = {{1,0,0}, {0,1,0}, {0, 0, 1}};
    int matrix2[3][3];
    

    ft_Print_3x3_Matrix(matrix1, 3, 3);
    ft_printIsIdentityMatrix(matrix1, 3, 3);
    
    cout << endl;

    ft_Fill_3_3MatrixWithRandomNumbers(matrix2, 3, 3);
    ft_Print_3x3_Matrix(matrix2, 3, 3);
    ft_printIsIdentityMatrix(matrix2, 3, 3);

    return 0;
}