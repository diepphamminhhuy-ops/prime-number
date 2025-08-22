#include "header.h"

void prime(int** matrix, int row, int col) {
    cout << "Cac so nguyen to trong ma tran: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            int num = matrix[i][j];
            bool isprime = true;

            if (num < 2) {
                isprime = false;
            } else {
                for (int k = 2; k * k <= num; k++) {
                    if (num % k == 0) {
                        isprime = false;
                        break;
                    }
                }
            }

            if (isprime) {
                cout << num << " ";
            }
        }
    }
    cout << endl;
}