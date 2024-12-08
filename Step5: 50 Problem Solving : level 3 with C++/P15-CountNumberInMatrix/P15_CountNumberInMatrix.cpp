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

int ft_countNumberInMatrix(int matrix[3][3], short Row, short Col, int NumberToCount) {
    int i = 0;
    int j = 0;
    int countNbr = 0;
    while (i < Row) {
        j = 0;
        while (j < Col) {
            if (matrix[i][j] == NumberToCount)
                countNbr++;
            j++;
        }
        i++;
    }
    return countNbr;
}


int main() {
    //seed the random number fenerator in c++. called only one in the program
    srand((unsigned)time(NULL));
    
    int matrix[3][3];
    int NumberToCount;
    
    cout << "\nMatrix:\n";
    ft_Fill_3_3MatrixWithRandomNumbers(matrix, 3, 3);
    ft_Print_3x3_Matrix(matrix, 3, 3);
    
    cout << "\nEnter the number to count in matrix: ";
    cin >> NumberToCount;

    cout << "\nNumber " << NumberToCount << " count in matrix is " << ft_countNumberInMatrix(matrix, 3, 3, NumberToCount) << endl;

    return 0;
} 