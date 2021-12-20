#ifndef EX04_LIBRARY_H_
#define EX04_LIBRARY_H_

#include <vector>
using namespace std;

class Buffer {
public:
    virtual void write(int v) = 0;
    virtual int read() = 0;
    virtual unsigned int occupancy() = 0;
    virtual ~Buffer();
};

// Task 4(a).  Declare the class LimitedBuffer, by extending Buffer
class LimitedBuffer : public Buffer {
    public:
        LimitedBuffer(unsigned int cap, int def);
        virtual void write(int v) ;
        virtual int read() ;
        virtual unsigned int occupancy();
    protected:
        vector<int> buffer;
        unsigned int cap;
        int occ;
        int def;
};

#endif /* EX04_LIBRARY_H_ */
