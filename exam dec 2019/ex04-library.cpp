#include "ex04-library.h"
#include <iostream>

//Do not modify
Piece::~Piece(){}

//Do not modify
void Piece::printPosition(){
	cout << "(" << r << "," << c << ")" << endl;
}

//Exercise 4 (a) implement methods of WhitePiece
WhitePiece::WhitePiece(int wrow, int wcol){
	this->r = wrow;
	this->c = wcol;
}

string WhitePiece::getColor(){
	return "white";
}

string WhitePiece::printCode(){
	return "W";
}

void WhitePiece::moveRight(){
	r = r - 1;
	c = c + 1;
}

void WhitePiece::moveLeft(){
	r = r - 1;
	c = c - 1;
}


//Exercise 4 (b) implement methods of BlackPiece
BlackPiece::BlackPiece(int brow, int bcol){
	this->r = brow;
	this->c = bcol;
}

string BlackPiece::getColor(){
	return "black";
}

string BlackPiece::printCode(){
	return "B";
}

void BlackPiece::moveRight(){
	r = r + 1;
	c = c - 1;
}

void BlackPiece::moveLeft(){
	r = r + 1;
	c = c + 1;
}