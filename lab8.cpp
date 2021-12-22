#include <iostream>
#include <random>
#include <iomanip>
using namespace std;
void fillArray (int size, double **matrix) { 
    srand(time(NULL));
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = (double)(-50 + rand()%101)/10;  
        }
    }
}
void mainDiagonal (int size, double **matrix, double array[]) { 
    for (int i = 0; i < size; ++i) {
          array[i] = matrix[i][i];
            cout <<setw(7) << array[i];
    }
    cout << endl;
}
void sortArr (int size, double **matrix, double array[]) {  
    double rezvar;
    for (int i = 1; i < size; ++i) {
        for (int j = i ; j>0 && array[j]>array[j-1]; --j) {
            rezvar = array[j-1];
            array[j-1] = array[j];
            array[j] = rezvar;
            for (int k = 0; k < size; ++k) {
                rezvar = matrix[j][k];
                matrix[j][k] =matrix[j-1][k];
                matrix[j-1][k] = rezvar;
            }
        }
    }
    for (int f = 0; f < size; ++f) { 
        cout <<setw(7) << array[f];
    }
    cout << endl;
}
void outArray (double **matrix, int size) {  
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout <<setw(7) << matrix[i][j];
        }
        cout << endl;
    }
}
int main() {
    int size;  
    cout << "Enter the size of the matrix " << endl;
    cin >> size;
    double **matr = new double *[size];  
    for (int i = 0; i < size; ++i) {
        matr[i] = new double[size];
    }
    double *mainDiagonalArr = new double[size];  
    fillArray(size, matr);
    outArray(matr, size);
    cout <<endl << "Main diagonal is: ";
    cout.width(10);
    mainDiagonal(size, matr, mainDiagonalArr);
    cout << endl << "Sorted main diagonal is: ";
    sortArr(size, matr, mainDiagonalArr);
    cout <<endl << "Sorted matrix: " << endl;
    outArray(matr, size);
    for (int k = 0; k < size; ++k) {
        delete[] matr[k];
    }
    delete[] matr;
}