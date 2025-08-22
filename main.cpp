//nhap 1 so n < 100, n do la so phan tu cua mang 2 chieu
// sau do nhap cac phan tu cua mang 2 chieu 
// va xet phan tu nao la so nguyen to
// va in ra

#include "header.h"
#include "xetdk.cpp"
#include "printmatrix.cpp"
#include "prime.cpp"



int main(){


    int row, col, n;
    cout << "Nhap so phan tu cua ma tran: ";
    cin >> n;
    cout << "Nhap so hang cua ma tran: ";
    cin >> row; 
    cout << "Nhap so cot cua ma tran: ";
    cin >> col;

    

    //kiem tra so phan tu nhap vao
    xetdk(n, row, col);

    //tao ma tran 2 chieu
    int** matrix = new int*[row];
    for (int i = 0; i < row; i++) {

        matrix[i] = new int[col];

    }

    //goi ham
    printmatrix(matrix, row, col);
    prime(matrix, row, col);
    



    return 0;
}