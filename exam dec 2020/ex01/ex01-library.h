#ifndef EX01_LIBRARY_H_
#define EX01_LIBRARY_H_

struct Complex {
    double re; // Real part
    double im; // Imaginary part
};

Complex add(Complex c, Complex d);
Complex mult(Complex c, Complex d);
Complex **createMatrix(unsigned int m, unsigned int n, Complex c);
void displayMatrix(Complex **A, unsigned int m, unsigned int n);
Complex **createIdentityMatrix(unsigned int n);
void multMatrix(Complex **A, Complex **B, Complex **C,
                unsigned int m, unsigned int n, unsigned int p);
void deleteMatrix(Complex **A, unsigned int nRows);

#endif /* EX01_LIBRARY_H_ */
