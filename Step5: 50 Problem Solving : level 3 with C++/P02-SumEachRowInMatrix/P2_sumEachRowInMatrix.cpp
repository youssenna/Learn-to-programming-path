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

int ft_RowSum(int matrix[3][3], short RowNumber, short Cols) {

    int sum = 0;
    short j = 0;

    while (j < Cols) {
        sum = sum + matrix[RowNumber][j];
        j++;
    }
    return  sum;
}

void ft_PrintSumOfEachRowInMatrix(int matrix[3][3], short Row, short Cols) {

    int sum = 0;
    short i = 0;
    
    cout << "The Following are the sum of each row in the matrix:\n";
    while (i < Row) {
        sum = ft_RowSum(matrix, i, Cols);
        cout << "Row " << i+1 << " Sum = " << sum << endl;
        i++;
    }
}


int main() {
    //seed the random number fenerator in c++. called only one in the program
    srand((unsigned)time(NULL));
    
    int matrix[3][3];
    
    ft_Fill_3_3MatrixWithRandomNumbers(matrix, 3, 3);
    cout << "\nThe following is a 3x3 random matrix:\n" << setw(6);
    ft_Print_3_3RandomMatrix(matrix, 3, 3);

    ft_PrintSumOfEachRowInMatrix(matrix, 3, 3);
    
    return 0;
}