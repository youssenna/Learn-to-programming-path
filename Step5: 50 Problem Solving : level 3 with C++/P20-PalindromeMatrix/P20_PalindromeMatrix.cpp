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

bool ft_IsPalindromeMatrix(int matrix[3][3], short Row, short cols) {
    short i = 0;
    short j = 0;
    while (i < Row) {
        j = 0;
        while (j < cols / 2) {
                if (matrix[i][j] != matrix[i][cols -1 - j])
                    return false;
            j++;
        }
        i++;
    }
    return true;
}

void ft_PrintIsPalindromMatrix(int matrix[3][3], short Row, short cols) {
    if (ft_IsPalindromeMatrix(matrix, Row, cols))
        cout << "\nYes: Matrix is Palindrome" << endl;
    else
        cout << "\nNo: Matrix is not Palindrome" << endl;
}

int main() {
    //seed the random number fenerator in c++. called only one in the program
    srand((unsigned)time(NULL));
    
    int matrix[3][3] = {1, 2, 12, 5, 5, 5, 7, 3, 7};
    
    cout << "\nMatrix:\n";
    //ft_Fill_3_3MatrixWithRandomNumbers(matrix, 3, 3);
    ft_Print_3x3_Matrix(matrix, 3, 3);

    ft_PrintIsPalindromMatrix(matrix, 3, 3);
    return 0;
} 