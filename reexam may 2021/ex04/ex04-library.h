#ifndef EX04_LIBRARY_H_
#define EX04_LIBRARY_H_

#include <vector>
using namespace std;

class Buffer {
public:
    virtual void write(int v) = 0;
    virtual int read() = 0;
    virtual unsigned int occupancy() = 0;
    virtual void reset() = 0;
    virtual ~Buffer();
};

// Task 4(a).  Declare the class FilteringBuffer, by extending Buffer
class FilteringBuffer : public Buffer {
    public:
        FilteringBuffer(int defaultval);
        virtual void write(int v);
        virtual int read();
        virtual unsigned int occupancy();
        virtual void reset();
    protected:
        int defaultval;
        int occval;
        vector<int> buf;
        int index;

};

#endif /* EX04_LIBRARY_H_ */
