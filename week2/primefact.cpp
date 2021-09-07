#include <iostream>

using namespace std;

void metode() {
    int input = 0, i = 2;
    string result, output;

    cin >> input;

    while (i <= input) {
        if (input % i == 0){
            result.append(to_string(i) + " * ");
            input = input / i;
        }
        
        if (input % i != 0){
            ++i;
        }
    }

    output = result.substr(0, result.size()-3);

    
    cout << output << endl;
}

int main() {
    metode();
    return 0;
}