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

int ft_ColSum(int matrix[3][3], short Row, short Col) {

    int sum = 0;
    short j = 0;

    while (j < Row) {
        sum = sum + matrix[j][Col];
        j++;
    }
    return  sum;
}

void SumMatrixColInArray(int matrix[3][3], int SumOfRows[3], short Row, short Cols) {

    int i = 0;
    
    while (i < Row) {
        SumOfRows[i] = ft_ColSum(matrix, Row, i);
        i++;
    }
}

void ft_PrintColSumArray(int sum[3], short Row) {
    
    short i = 0;
    
    while (i < Row) {
        cout << "Row " << i+1 << " Sum = " << sum[i] << endl;
        i++;
    }
}


int main() {
    //seed the random number fenerator in c++. called only one in the program
    srand((unsigned)time(NULL));
    
    int matrix[3][3];
    int arrSum[3];

    ft_Fill_3_3MatrixWithRandomNumbers(matrix, 3, 3);
    cout << "\nThe following is a 3x3 random matrix:\n" << setw(6);
    ft_Print_3_3RandomMatrix(matrix, 3, 3);
    
    SumMatrixColInArray(matrix, arrSum, 3, 3);
    cout << "The Following are the sum of each row in the matrix:\n";
    ft_PrintColSumArray(arrSum, 3);
    
    return 0;
}