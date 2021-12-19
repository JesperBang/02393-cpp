#include <iostream>
#include "ex03-library.h"
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

// Do not modify
GroceryList::GroceryList() {
    this->items.push_back("Lasagne");
    this->itemsInfo["Lasagne"] = {1, "With eggs if available"};

    this->items.push_back("Salmon");
    this->itemsInfo["Salmon"] = {500, "Smoked if available"};

    this->items.push_back("Spinach");
    this->itemsInfo["Spinach"] = {300, "Fresh"};

    this->items.push_back("Dessert");
    this->itemsInfo["Dessert"] = {8, "Maybe lagkage?"};
}

// Task 3(a).  Implement this method
void GroceryList::add(string name, unsigned int quantity, string notes) {
    if(find(this->items.begin(), this->items.end(), name) != this->items.end()){
        this->itemsInfo[name].quantity += quantity;
        this->itemsInfo[name].notes.append(";" + notes);
    } else {
        this->items.push_back(name);
        this->itemsInfo[name] = {quantity, notes};
    }
}

// Task 3(b).  Implement this method
bool GroceryList::remove(string name, unsigned int quantity) {
    if(find(this->items.begin(), this->items.end(), name) != this->items.end()){
        if(this->itemsInfo[name].quantity < quantity){
            return false;
        } else {
            this->itemsInfo[name].quantity -= quantity;
            
            if(this->itemsInfo[name].quantity == 0){
                this->items.erase(find(this->items.begin(), this->items.end(), name));
                this->itemsInfo.erase(name);
            }
                
            return true;
        }
    } else {
        return false;
    }
}

// Task 3(c).  Implement this method
bool GroceryList::copyEntry(string name, string newName) {
    if(this->itemsInfo.count(newName) > 0 || this->itemsInfo.count(name) == 0){
        return false;
    } else {
        this->items.push_back(newName);
        this->itemsInfo[newName] = this->itemsInfo[name];
        return true;
    }
}

// Do not modify
void GroceryList::display() {
    // Write your code here
    for (auto it = this->items.begin(); it != this->items.end(); it++) {
        Info &item = this->itemsInfo[*it];
        cout << "name='" << *it << "'; ";
        cout << "quantity=" << item.quantity << "; ";
        cout << "notes='" << item.notes << "'" << endl;
    }
}