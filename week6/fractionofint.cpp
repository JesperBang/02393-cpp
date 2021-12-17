#include "fraction.h"
#include <iostream>

using namespace std;

fraction::fraction(int n, int m) {
    numerator = n;
    denominator = m;

    simplify();

    return;
}

int fraction::getNumerator() const{
    return numerator;
}

int fraction::getDenominator() const{
    return denominator;
}

void fraction::add(fraction f) {
    numerator = (numerator * f.denominator) + (f.numerator * denominator);
    denominator = denominator * f.denominator;

    simplify();

    return;
}

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