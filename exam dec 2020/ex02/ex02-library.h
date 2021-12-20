#ifndef EX02_LIBRARY_H_
#define EX02_LIBRARY_H_

struct Elem {
    int value;
    unsigned int times; // Number of repetitions
    Elem *next;
};

void displayRLEList(Elem *list);

unsigned int length(Elem *list);
Elem* append(Elem *list, int v);
Elem* buildRLEList(int *data, unsigned int n);

#endif /* EX02_LIBRARY_H_ */
