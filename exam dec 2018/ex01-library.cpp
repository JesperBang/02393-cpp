#include <iostream>
#include <cstring>
#include "ex01-library.h"

using namespace std;

//Exercise 1 (a) Check and correct if necessary
double * createAndInitArray(unsigned int n, double value){
	double * A = new double[n];
	for(unsigned int i = 0; i<n; i++){
		A[i] = value;
	}
	return A;
}

//Exercise 1 (b) Implement this function
double * duplicateArray(double * A, unsigned int n){
	double * B = new double[n];
	//memcpy(B, A, sizeof(A)); // deep copy
	for(unsigned int i = 0; i<n; i++){
		B[i] = A[i];
	}

	return B;
}

//Exercise 1 (c) Implement this function
void deallocateArray(double * A){
	delete [] A; // deallocate memory of array A
}

//Exercise 1 (d) Implement this function
double * toFahrenheit(double * A, unsigned int n){
	double * F = new double[n];
	
	for (int i = 0; i < n; i++){
		F[i] = ((A[i] * 1.8) + 32);
	}
	return F;
}

//Do not modify
void printArray(double * A, unsigned int n, string descr){
	cout<< "Printing: " << descr << endl;
	for(unsigned int i = 0; i < n; i++){
		cout << A[i] << ' ';
	}
	cout << "\n\n";
}
