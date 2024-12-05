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
    
    int matrix[3][3];
    
    ft_Fill_3_3MatrixWithRandomNumbers(matrix, 3, 3);
    cout << "\nMatrix1:\n";
    ft_Print_3x3_Matrix(matrix, 3, 3);

    cout << "\nSum of Matrix is: " << ft_SumOfMatrix(matrix, 3, 3) << endl;
    
    return 0;
}