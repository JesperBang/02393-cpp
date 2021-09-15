#include <iostream>
#include <string.h>
#include <map>

using namespace std;

map<int, int> bag;
string query;

void add(int x) {
    if(bag.count(x)){
        bag.at(x) += 1;
    } else {
        bag.insert({x, 1});
    }
}

void del(int x) {
    if(bag.count(x)){
        bag.at(x) -= 1;
    }
}

void qry(int x) {
    if(bag.count(x) && bag[x] > 0){
        query.append("T");
    } else {
        query.append("F");
    }
}

int main() {
    string input;
    int x;

    while(true){
        cin >> input;

        if (input.compare("quit") == 0){ 
            cout << query << endl; 
            return 0; 
        }

        cin >> x;

        if(input.compare("add") == 0) { add(x); }
        if(input.compare("del") == 0) { del(x); }
        if(input.compare("qry") == 0) { qry(x); }
    }

    return 0;
}