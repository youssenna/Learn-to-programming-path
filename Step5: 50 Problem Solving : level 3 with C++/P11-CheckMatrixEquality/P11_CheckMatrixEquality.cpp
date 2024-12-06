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

int ft_SumOfMatrix(int matrix[3][3], short Row, short Columns) {

    short i = 0;
    short j;
    int sum = 0;

    while (i < Row) {
        j = 0;
        while (j < Columns) {
            sum = sum + matrix[i][j];
            j++;
        }
        i++;
    }
    return sum;
}

int main() {
    //seed the random number fenerator in c++. called only one in the program
    srand((unsigned)time(NULL));
    
    int matrix1[3][3];
    int matrix2[3][3];
    
    ft_Fill_3_3MatrixWithRandomNumbers(matrix1, 3, 3);
    cout << "\nMatrix1:\n";
    ft_Print_3x3_Matrix(matrix1, 3, 3);
    cout << "\nSum of Matrix 1 is: " << ft_SumOfMatrix(matrix1, 3, 3) << endl;

    
    ft_Fill_3_3MatrixWithRandomNumbers(matrix2, 3, 3);
    cout << "\nMatrix2:\n";
    ft_Print_3x3_Matrix(matrix2, 3, 3);
    cout << "\nSum of Matrix 2 is: " << ft_SumOfMatrix(matrix2, 3, 3) << endl;

    cout << endl;
    if (ft_SumOfMatrix(matrix1, 3, 3) == ft_SumOfMatrix(matrix2, 3, 3)) {
        cout << "Yes: matrixes are equal.";
    } 
    else
        cout << "No: matrixes are Not equal.";
    cout << endl;
    return 0;
}