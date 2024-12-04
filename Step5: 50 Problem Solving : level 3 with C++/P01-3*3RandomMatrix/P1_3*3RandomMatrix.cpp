#include <iostream>
#include <random>
#include <iomanip>

using namespace std;

int ft_RandomNumber(int from, int to) {
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
    int i = 0;
    int j;
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

int main() {
    //seed the random number fenerator in c++. called only one in the program
    srand((unsigned)time(NULL));
    
    int matrix[3][3];
    
    ft_Fill_3_3MatrixWithRandomNumbers(matrix, 3, 3);
    cout << "The following is a 3x3 random matrix:\n" << setw(6);
    ft_Print_3_3RandomMatrix(matrix, 3, 3);
    
    return 0;
}