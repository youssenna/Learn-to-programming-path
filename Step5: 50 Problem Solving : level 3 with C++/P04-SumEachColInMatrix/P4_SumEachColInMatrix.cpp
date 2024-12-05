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

void ft_Print_3_3RandomMatrix(int matrix[3][3], short Row, short Columns) {

    short i = 0;
    short j;
    
    while (i < Row) {
        j = 0;
        while (j < Columns) {
            cout << setw(6) << matrix[i][j] << "    ";
            j++;
        }
        cout << endl;
        i++;
    }
}

int ft_ColSum(int matrix[3][3], short Rows, short Cols) {

    int sum = 0;
    short i = 0;

    while (i < Rows) {
        sum = sum + matrix[i][Cols];
        i++;
    }
    return  sum;
}

void ft_PrintSumOfEachColInMatrix(int matrix[3][3], short Row, short Cols) {

    short j = 0;
    
    cout << "\nThe Following are the sum of each column in the matrix:\n";
    while (j < Cols) {
        cout << "Col " << j+1 << " Sum = " <<  ft_ColSum(matrix, Row, j) << endl;
        j++;
    }
}


int main() {
    //seed the random number fenerator in c++. called only one in the program
    srand((unsigned)time(NULL));
    
    int matrix[3][3];
    
    ft_Fill_3_3MatrixWithRandomNumbers(matrix, 3, 3);
    cout << "\nThe following is a 3x3 random matrix:\n" << setw(6);
    ft_Print_3_3RandomMatrix(matrix, 3, 3);

    ft_PrintSumOfEachColInMatrix(matrix, 3, 3);
    
    return 0;
}