#include <iostream>
#include "ex02-library.h"
using namespace std;

// Task 2(a).  Implement this function
Elem* reverse(Elem *list) {
    Elem* current = list;
    Elem *prev = NULL, *next = NULL;

    while(current != NULL) {
        next = current->next;

        current->next = prev;
        
        prev = current;
        current = next;
    }
    list = prev;

    return list;
}

// Task 2(b).  Implement this function
Elem* concatenate(Elem *list1, Elem *list2) {
    if (list1 == nullptr)
        return list2;
    if (list2 == nullptr)
        return list1;

    if (list1->next == NULL)
        if (list1->value == list2->value){
            list1->times += list2->times;
            list1->next = list2->next;            
        }
        else 
            list1->next = list2;
    else
        
        concatenate(list1->next,list2);

    return list1;
}


// Task 2(c).  Implement this function
int sum(Elem *list) {
    Elem* current = list; // Initialize current

    int total = 0;
    while (current != nullptr)
    {
        total += (current->value * current->times);
        current = current->next;
    }
    return total;
}

// Do not modify
void displayRLEList(Elem *list) {
    if (list == nullptr) {
        return;
    }
    cout << " " << list->value << " (x" << list->times << ")";
    displayRLEList(list->next);
}


// Run 1
// next = 12 (x6)
// current-next = null
// prev = 4 x10
// current = 12 (x6)

// run 2
// next = 10 (x5)
// current-next = 4 x10
// prev = 12 (x6)
// current = 10 (x5)

// run 3
// next = null
// current-next = 12 (x6)
// prev = 10 (x5)
// current = null

// list = 10 (x5) 12 (x6) 4 (x10)
