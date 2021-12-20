#include "ex04-library.h"

// Task 4(a).  Write a placeholder implementation of LimitedBuffer's
LimitedBuffer::LimitedBuffer(unsigned int capacity, int defaultval) {
    cap = capacity;
    def = defaultval;
    occ = 0;
}

// Task 4(b).  Write a working implementation of write() and occupancy()
void LimitedBuffer::write(int val){
    if(occ == cap)
        return;
    occ++;
    buffer.insert(buffer.begin(), val);
}

unsigned int LimitedBuffer::occupancy(){
    return occ;
}

// Task 4(c).  Write a working implementation of read()
int LimitedBuffer::read(){
    if(buffer.empty()){
        return def;
    }

    int out = buffer.back();
    buffer.pop_back();
    occ--;
    return out;
}

// Do not modify
Buffer::~Buffer() {
    // Empty destructor
}
