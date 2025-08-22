#include "header.h"

void xetdk(int n, int& row, int& col) {

 while(true) {


    cout << "Nhap lai so phan tu cua ma tran: ";
    cin >> n;
    cout << "Nhap lai so hang cua ma tran: ";
    cin >> row; 
    cout << "Nhap lai so cot cua ma tran: ";
    cin >> col;
    if (n > 100){
        cout << "So phan tu khong hop le, vui long nhap lai!" << endl;
        continue;
    }
        else if (n < 0){
        cout << "So phan tu khong hop le, vui long nhap lai!" << endl;
        continue;
    }
    if (row*col != n){
        cout << "So phan tu khong khop voi so hang va so cot, vui long nhap lai!" << endl;
        continue;
    }
    break;
}




}