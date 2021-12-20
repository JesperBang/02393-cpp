#include <iostream>
#include <string>
#include "ex01-library.h"

using namespace std;

int main(void){
	unsigned int n = 4;
	
	double * A = createAndInitArray(n,1);
	
	printArray(A,n,"A");
	
	//Duplicate A in a new array B
	double * B = duplicateArray(A,n);
	printArray(B,n,"B (copy of A)");
	
	//Modify B (this should not affect A)
	B[0]=0;
	//Print again B. It should have changed 
	printArray(B,n,"B modified");
	
	//Print again A. It should have not changed 
	printArray(A,n,"A not modified");

	return 0;
}