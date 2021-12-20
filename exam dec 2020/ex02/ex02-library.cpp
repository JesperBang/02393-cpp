#include <iostream>
#include "ex02-library.h"
using namespace std;

// Task 2(a).  Implement this function
unsigned int length(Elem *list) {
    Elem *l = list;

    unsigned int size = 0;
    while(l != nullptr){
        size += l->times;
        l = l->next;
    }
        
    return size;
}

// Task 2(b).  Implement this function
Elem* append(Elem *list, int v) {
    Elem *node = new Elem{v, 1, nullptr};

    if(list == nullptr) {
        list = node;
        return list;
    }

    Elem *l = list;
    Elem *prev = NULL;
    while(l != nullptr){
        if(l->value == v){
            l->times = l->times + 1;
            return list;
        }
        prev = l;
        l = l->next;
    }
    prev->next = node;

    return list;
}

// Task 2(c).  Implement this function
Elem* buildRLEList(int *data, unsigned int n) {
    Elem *node = NULL;
    for(int i = 0; i < n; i++){
        node = append(node, data[i]);
    }
    return node;
}

// Do not modify
void displayRLEList(Elem *list) {
    if (list == nullptr) {
        return;
    }
    cout << " " << list->value << " (x" << list->times << ")";
    displayRLEList(list->next);
}
