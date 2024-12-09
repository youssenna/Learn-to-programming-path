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

int ft_MaxNumberInMatrix(int matrix[3][3], short Row, short cols) {
    int i = 0;
    int j = 0;
    int MaxNumber = matrix[0][0];
    while (i < Row) {
        j = 0;
        while (j < cols) {
                if (matrix[i][j] > MaxNumber)
                    MaxNumber = matrix[i][j];
            j++;
        }
        i++;
    }
    return MaxNumber;
}

int ft_MinNumberInMatrix(int matrix[3][3], short Row, short cols) {
    int i = 0;
    int j = 0;
    int MinNumber = matrix[0][0];
    while (i < Row) {
        j = 0;
        while (j < cols) {
                if (matrix[i][j] < MinNumber)
                    MinNumber = matrix[i][j];
            j++;
        }
        i++;
    }
    return MinNumber;
}


int main() {
    //seed the random number fenerator in c++. called only one in the program
    srand((unsigned)time(NULL));
    
    int matrix[3][3];
    
    cout << "\nMatrix:\n";
    ft_Fill_3_3MatrixWithRandomNumbers(matrix, 3, 3);
    ft_Print_3x3_Matrix(matrix, 3, 3);

    cout << "\nMinimum Number is: " << ft_MinNumberInMatrix(matrix, 3, 3) << endl;
    cout << "\nMax Number is: " << ft_MaxNumberInMatrix(matrix, 3, 3) << endl;

    return 0;
} 