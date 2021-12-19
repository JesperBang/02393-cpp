#ifndef EX04_LIBRARY_H_
#define EX04_LIBRARY_H_

#include <string>
using namespace std;

//Do not modify
class Piece {
protected:
	int r;
	int c;
public:
	virtual ~Piece();
	void printPosition();
	virtual string getColor()=0;
	virtual string printCode()=0;
	virtual void moveRight()=0;
	virtual void moveLeft()=0;
};

//Exercise 4 (a) declare WhitePiece
//put your code here

//Exercise 4 (b) declare BlackPiece
//put your code here

#endif
