#include <iostream>
#include "ex04-library.h"
using namespace std;

int main() {
    Buffer *b = new LimitedBuffer(5, -999);

    cout << "Current buffer occupancy: " << b->occupancy() << endl;
    cout << "Reading from the buffer returns: " << b->read() << endl;

    for (unsigned int i = 0; i < 10; i++) {
        b->write(i * 10);
    }
    cout << "Current buffer occupancy: " << b->occupancy() << endl;

    for (unsigned int i = 0; i < 3; i++) {
      cout << "Reading from the buffer returns: " << b->read() << endl;
    }
    cout << "Current buffer occupancy: " << b->occupancy() << endl;

    for (unsigned int i = 0; i < 10; i++) {
        b->write((i+1) * 100);
    }
    cout << "Current buffer occupancy: " << b->occupancy() << endl;
    for (unsigned int i = 0; i < 6; i++) {
      cout << "Reading from the buffer returns: " << b->read() << endl;
    }

    delete b;
    return 0;
}
