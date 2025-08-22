#include "header.h"

void printmatrix(int** matrix, int row, int col) {
    cout << "Ma tran: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {

            matrix[i][j] = 0 + rand() % 100; // gia tri chay den 100
            cout << " " << matrix[i][j] << " ";
        }
        cout << endl;
    }
}