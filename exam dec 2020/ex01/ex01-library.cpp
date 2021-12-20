#include <iostream>
#include "ex01-library.h"
using namespace std;

// Task 1(a).  Implement this function
Complex **createMatrix(unsigned int m, unsigned int n, Complex c) {
    Complex ** matrix = new Complex*[m];
    for (int i = 0; i < m; i++) {
		matrix[i] = new Complex[n];
        for (int j = 0; j < n; j++) {
            matrix[i][j] = c;
        }
    }
    return matrix;
}

// Task 1(b).  Implement this function
void displayMatrix(Complex **A, unsigned int m, unsigned int n) {
    for(int r=0;r<m;r++){
		for(int c=0;c<n;c++){
            string operand = (A[r][c].im >= 0) ? "+" : "";
            cout << A[r][c].re << operand << A[r][c].im << "i";

            if (c+1 < n) {  //Display spaces
                cout << " ";
            }
		}
		cout << endl;
	}
	cout << endl;
}

// Task 1(c).  Implement this function
Complex **createIdentityMatrix(unsigned int n) {
    Complex c = {0, 0};
    Complex cd = {1, 0};
    Complex **idm = createMatrix(n, n, c);

    for(unsigned int t = 0; t < n; t++)
        idm[t][t] = cd;

    return idm;
}

// Task 1(d).  Implement this function
void multMatrix(Complex **A, Complex **B, Complex **C,
                unsigned int m, unsigned int n, unsigned int p) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            Complex sum = {0,0};
            for(int k = 0; k < n; k++){
                sum = add(sum, mult(A[i][k],B[k][j]));
            }
            C[i][j] = sum;
        }
    }
}

// Do not modify
Complex add(Complex c, Complex d) {
    Complex result = { c.re + d.re, c.im + d.im };
    return result;
}

// Do not modify
Complex mult(Complex c, Complex d) {
    Complex result;
    result.re = (c.re * d.re) - (c.im * d.im);
    result.im = (c.re * d.im) + (c.im * d.re);
    return result;
}

// Do not modify
void deleteMatrix(Complex **A, unsigned int nRows) {
    for (unsigned int i = 0; i < nRows; i++) { delete[] A[i]; }
    delete[] A;
}
