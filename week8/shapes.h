#ifndef __shapes__
#define __shapes__

class Shape {
    public:
        virtual double area(void) = 0;
        virtual double perimeter(void) = 0;
        virtual double height(void) = 0;
        virtual double width(void) = 0;
        virtual void rotate(void) = 0;
};

class Rectangle : public Shape {
    public:
        // Usually i do width, height as it reminds me of x,y but testscript wont allow that
        Rectangle(double height, double width);
        virtual double area(void);
        virtual double perimeter(void);
        virtual double height(void);
        virtual double width(void);
        virtual void rotate(void);

    protected:
        double recwidth;
        double recheight;
};

// In geometry every square is rectangle - from lecture,...
// Somehow this could be converted to : Rectangle
//class Square : public Shape {
//    public:
//        Square(double height);
//        virtual double area(void);
//        virtual double perimeter(void);
//        virtual double height(void);
//        virtual double width(void);
//        virtual void rotate(void);
//
//    private:
//        double sidelen;
//};

// In geometry every square is rectangle - from lecture
class Square : public Rectangle {
    public:
        Square(double sidelen);
        void rotate(void);
};

class Circle : public Shape {
    public:
        Circle(double radius);
        virtual double area(void);
        virtual double perimeter(void);
        virtual double height(void);
        virtual double width(void);
        virtual void rotate(void);

    private:
        double cirradius;
};

#endif