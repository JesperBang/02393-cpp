#include "ex04-library.h"
#include <vector>
#include <algorithm>

using namespace std;
// Task 4(a).  Write a placeholder implementation of FilteringBuffer's
FilteringBuffer::FilteringBuffer(int defval){
    defaultval = defval;
    occval = 0;
    index = 0;
}

// Task 4(b).  Write a working implementation of write() and occupancy()
void FilteringBuffer::write(int val){
    //buf.insert(buf.begin(), val);
    if(find(buf.begin(), buf.end(), val) != buf.end()){
        return;
    } else {
        buf.push_back(val);
        occval++;
    }

}

unsigned int FilteringBuffer::occupancy(void){
    return occval;
}

// Task 4(c).  Write a working implementation of read()
int FilteringBuffer::read(void){
    if(buf.empty() || index >= buf.size()){
        return defaultval;
    }

    int out = buf[index];
    index++;
    occval--;
    return out;
}


// Task 4(d).  Write a working implementation of reset()
void FilteringBuffer::reset(void){
    occval = 0;
    index = 0;
    buf.clear();
}

// Do not modify
Buffer::~Buffer() {
    // Empty destructor
}