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
            cout << setw(2) << setfill('0') << matrix[i][j] << "    ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void ft_MidleRowOfMatrix(int matrix[3][3], int array[3], short Row, short col) {
    
    short i = 0;
    short j;

    while (i < Row) {
        array[i] = matrix[i][col/2];
        i++;
    }
}

void ft_MidleColOfMatrix(int matrix[3][3], int array[3], short Row, short col) {
    
    short i = 0;
    short j;

    while (i < Row) {
        array[i] = matrix[Row/2][i];
        i++;
    }
}

void ft_PrintArray(int arr[3], short lenght) {
    int i = 0;
    while (i < lenght) {
        cout << setw(2) << setfill('0') << arr[i] << "    ";
        i++;
    }
    cout << endl;
}

int main() {
    //seed the random number fenerator in c++. called only one in the program
    srand((unsigned)time(NULL));
    
    int matrix[3][3];
    int MiddleRow[3];
    int MiddleCol[3];
    
    ft_Fill_3_3MatrixWithRandomNumbers(matrix, 3, 3);
    cout << "\nMatrix1:\n";
    ft_Print_3x3_Matrix(matrix, 3, 3);
    
    cout << "\nMiddle Row of matrix is:\n";
    ft_MidleRowOfMatrix(matrix, MiddleRow, 3, 3);
    ft_PrintArray(MiddleRow, 3);

    cout << "\nMiddle Col of matrix is:\n";
    ft_MidleColOfMatrix(matrix, MiddleCol, 3, 3);
    ft_PrintArray(MiddleCol, 3);
    
    return 0;
}