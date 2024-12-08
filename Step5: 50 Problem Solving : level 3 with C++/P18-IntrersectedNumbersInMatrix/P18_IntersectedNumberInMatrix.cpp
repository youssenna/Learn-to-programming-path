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
            matrix[i][j] = ft_RandomNumber(1, 100);
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

bool ft_NumberIsExsistInMatrix(int matrix[3][3], short Row, short Col, int NumberToSearsh) {
    int i = 0;
    int j = 0;
    while (i < Row) {
        j = 0;
        while (j < Col) {
            if (matrix[i][j] == NumberToSearsh)
                return true;
            j++;
        }
        i++;
    }
    return false;
}

void ft_PrintIntersectedNumberInMatrix(int matrix1[3][3], int matrix2[3][3], short Row, short cols) {
    int i = 0;
    int j = 0;
    while (i < Row) {
        j = 0;
        while (j < cols) {
            if (ft_NumberIsExsistInMatrix(matrix1, Row, cols, matrix2[i][j]))
                cout << matrix2[i][j] << "    ";
            j++;
        }
        i++;
    }
    cout << endl;
}


int main() {
    //seed the random number fenerator in c++. called only one in the program
    srand((unsigned)time(NULL));
    
    int matrix1[3][3] = {1,2,3,4,5,6,7,8,9};
    int matrix2[3][3] = {1,2,33,4,5,63,7,8,9};
    
    cout << "\nMatrix1:\n";
    // ft_Fill_3_3MatrixWithRandomNumbers(matrix1, 3, 3);
    ft_Print_3x3_Matrix(matrix1, 3, 3);

    cout << "\nMatrix2:\n";
    // ft_Fill_3_3MatrixWithRandomNumbers(matrix2, 3, 3);
    ft_Print_3x3_Matrix(matrix2, 3, 3);

    cout << "\nInsersected Number are: \n";
    ft_PrintIntersectedNumberInMatrix(matrix1, matrix2, 3, 3);
    
    return 0;
} 