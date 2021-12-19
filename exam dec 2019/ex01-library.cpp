#include <iostream>
#include "ex01-library.h"

using namespace std;

//Exercise 1 (a) Implement this function
cell ** createAndInitBoard(int n){
	cell ** board = new cell*[n];

	// Generate board
    for (int row = 0; row < n; row++) {
		board[row] = new cell[n];
        for (int col = 0; col < n; col++) {

			// odd or even?
			if ((row + col) % 2 == 0) 				// even
				board[row][col].color = bright;
			else 									// odd
				board[row][col].color = dark;

			// if top of board place black piece on any black field
			// if bottom of board place white piece on any white field
			// else empty space
			if((row >= 0 && row < 3) && board[row][col].color == dark) 		// sort brik
				board[row][col].status = blackPiece;
			else if ((row >= (n - 3) && row <= n) && board[row][col].color == dark) // hvid brik
				board[row][col].status = whitePiece;
			else 															// empty
				board[row][col].status = emptyC;
        }
    }
	return board;
}

//Exercise 1 (b) Implement this function
cell ** duplicateBoard(cell ** A, int n){
	cell ** B = new cell*[n];
	for (int i = 0; i < n; i++){
		B[i] = new cell[n];
		for (int j = 0; j < n; j++){
			B[i][j] = A[i][j];
		}
	}
	return B;
}

//Exercise 1 (c) Implement this function
bool moveRight(cell ** A,int n,int r, int c){
	// Does a piece exist at coordinate?
	if (A[r][c].status == emptyC){
		return false;
	}

	if (A[r][c].status == whitePiece){
		if ((r - 1) < 0 || (c + 1) >= n) 			// new pos outside board?
			return false;
		if(A[r - 1][c + 1].status != emptyC)
			return false;							// new pos allready populated

		A[r][c].status = emptyC;					// clear old pos
		A[r - 1][c + 1].status = whitePiece;		// populate new pos
		return true;
		
	} else if (A[r][c].status == blackPiece){
		if ((r + 1) >= n || (c - 1) < 0) 			// new pos outside board?
			return false;
		if(A[r + 1][c - 1].status != emptyC)
			return false;														// new pos allready populated

		A[r][c].status = emptyC;												// clear old pos
		A[r + 1][c - 1].status = blackPiece;									// populate new pos
		return true;
	}
	return false;
}

//Exercise 1 (d) Implement this function
bool moveLeft(cell ** A,int n,int r, int c){
	// Does a piece exist at coordinate?
	if (A[r][c].status == emptyC){
		return false;
	}

	if (A[r][c].status == whitePiece){
		if ((r - 1) < 0 || (c - 1) < 0) 			// new pos outside board?
			return false;
		if(A[r - 1][c - 1].status != emptyC)
			return false;							// new pos allready populated

		A[r][c].status = emptyC;					// clear old pos
		A[r - 1][c - 1].status = whitePiece;		// populate new pos
		return true;
		
	} else if (A[r][c].status == blackPiece){
		if ((r + 1) >= n || (c + 1) >= n) 			// new pos outside board?
			return false;
		if(A[r + 1][c + 1].status != emptyC)
			return false;							// new pos allready populated

		A[r][c].status = emptyC;					// clear old pos
		A[r + 1][c + 1].status = blackPiece;		// populate new pos
		return true;
	}
	return false;
}

//Do not modify
cellColor computeColor(int r,int c){
	if((r%2 == 0 && c%2 == 0) || (r%2 != 0 && c%2 != 0)){
		return bright;
	}
	return dark;
}

//Do not modify
void printBoard(cell ** A, int n){
	cout << ' ';
	for(int c=0;c<n;c++){
		cout << c;
	}
	cout << endl;
	for(int r=0;r<n;r++){
		cout << r;
		for(int c=0;c<n;c++){
			//Print ' ' or '#' if empty, or the piece color (W or B)
			switch (A[r][c].status) {
			case emptyC:
				cout << ((A[r][c].color==bright)?' ':'#');
				break;
			case whitePiece:
				cout << "W";
				break;
			case blackPiece:
				cout << "B";
				break;
			}
		}
		cout << endl;
	}
	cout << endl;
}
