#include <iostream>

using namespace std;

class fraction {
private:
    // Internal representation of a fraction as two integers
    int numerator;
    int denominator;
public:
    // Class constructor
    fraction(int n, int d);

    // Methods to update the fraction
    void add(fraction f);
    void mult(fraction f);
    void div(fraction f);

    // Display method
    void display(void);
};


int main() {
    string inp, inp2;
    do{
        if(cin.fail()){
            return 0;
        }

        if (inp == "+"){

        }
        if (inp == "*"){

        }
        if(inp == "div"){

        }
        cin >> inp;
        cin >> inp2;

    }while(!cin.fail());
    return 0;
}