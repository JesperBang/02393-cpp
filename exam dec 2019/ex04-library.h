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
class WhitePiece : public Piece{
	public:
		WhitePiece();
		virtual string getColor();
		virtual string printCode();
		virtual void moveRight(void);
		virtual void moveLeft(void);
	protected:
		int wr;
		int wc;
};

//Exercise 4 (b) declare BlackPiece
class BlackPiece : public Piece{
	public:
		virtual string getColor();
		virtual string printCode();
		virtual void moveRight(void);
		virtual void moveLeft(void);
	protected:
		int wr;
		int wc;
};

#endif
