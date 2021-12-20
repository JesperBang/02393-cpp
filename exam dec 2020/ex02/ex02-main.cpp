#include <iostream>
#include "ex02-library.h"
using namespace std;

int main() {
    Elem e0 = {10, 5, nullptr};
    Elem e1 = {12, 6, &e0};
    Elem e2 = {4, 10, &e1};
    
    cout << "The RLE list is: " << endl;
    displayRLEList(&e2);
    cout << endl;

    cout << "Its lenght is: " << length(&e2) << endl;

    cout << endl;

    int data[] = {1, 2, 3, 3, 3, 4, 5};
    Elem *list = buildRLEList(data, 7);
    cout << "The new RLE list is: " << endl;
    displayRLEList(list);
    cout << endl;

    cout << "Its lenght is: " << length(list) << endl;
    Elem *list2 = append(list, 5);
    cout << "After we append 5, the resulting RLE list is: " << endl;
    displayRLEList(list2);
    cout << endl;
    
    return 0;
}
