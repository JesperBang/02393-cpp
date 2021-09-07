#include <iostream>
#include <map>

using namespace std;

map<int, int> method(int input, map<int, int> memory) {
    if(memory.count(input)){
        cout << to_string(memory.at(input)) << endl;
        memory.at(input) += 1;
    } else {
        cout << to_string(0) << endl;
        memory.insert({input, 1});
    }
    return memory;
}

int main() {
    int input = 1;
    map<int, int> memory;

    while(input != 0){
        cin >> input;
        if (input == 0) {
            return 0;
        }
        memory = method(input, memory);
    }

    return 0;
}