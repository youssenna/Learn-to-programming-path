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
            cout << setw(2) << matrix[i][j] << "    ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void ft_count0AndOtherNumbersInMatrix(int matrix[3][3],int count0AndOtherNbr[2], short Row, short Col) {
    int i = 0;
    int j = 0;
    count0AndOtherNbr[0] = 0;
    count0AndOtherNbr[1] = 0;

    while (i < Row) {
        j = 0;
        while (j < Col) {
            if (matrix[i][j] == 0)
                count0AndOtherNbr[0]++;
            else 
                count0AndOtherNbr[1]++;
            j++;
        }
        i++;
    }
}

bool ft_IsSparseMatrix(int Count0AndOther[2]) {
    return Count0AndOther[0] > Count0AndOther[1];
}

int main() {
    //seed the random number fenerator in c++. called only one in the program
    srand((unsigned)time(NULL));
    
    int matrix[3][3] = {50, 30, 01, 3, 0, 0, 3,1,0};
    int Count0AndOther[2];

    cout << "\nMatrix:\n";
    // ft_Fill_3_3MatrixWithRandomNumbers(matrix, 3, 3);
    ft_Print_3x3_Matrix(matrix, 3, 3);
    
    ft_count0AndOtherNumbersInMatrix(matrix, Count0AndOther, 3, 3);
    if (ft_IsSparseMatrix(Count0AndOther))
        cout << "\nYes: it is sparse\n";
    else
        cout << "\nNo: it's not sparse\n";
    return 0;
} 