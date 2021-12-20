#include <iostream>
#include "ex01-library.h"
using namespace std;

int main() {
    Complex c = {3, 1};
    Complex d = {2, -2};

    Complex **A = createMatrix(3, 3, c);
    cout << "Complex matrix A:" << endl;
    displayMatrix(A, 3, 3);
    cout << endl;

    Complex **I = createIdentityMatrix(3);
    cout << "Identity matrix I:" << endl;
    displayMatrix(I, 3, 3);
    cout << endl;

    Complex **R = createMatrix(3, 3, {0,0});
    cout << "Result of A * I:" << endl;
    multMatrix(I, A, R, 3, 3, 3);
    displayMatrix(R, 3, 3);
    cout << endl;

    Complex **B = createMatrix(3, 2, c);
    cout << "Complex matrix B:" << endl;
    displayMatrix(B, 3, 2);
    cout << endl;

    Complex **C = createMatrix(2, 3, d);
    cout << "Complex matrix C:" << endl;
    displayMatrix(C, 2, 3);
    cout << endl;

    cout << "Result of B * C:" << endl;
    multMatrix(B, C, R, 3, 2, 3);
    displayMatrix(R, 3, 3);

    deleteMatrix(A, 3); deleteMatrix(B, 3);
    deleteMatrix(C, 2);
    deleteMatrix(R, 3); deleteMatrix(I, 3);
    return 0;
}
