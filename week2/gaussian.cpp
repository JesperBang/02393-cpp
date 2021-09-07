#include <iostream>

using namespace std;

void metode() {
    int input = 0, result = 0;
    cin >> input;
    
    for (int i = 0; i <= input; ++i) {
        result += i;
    }
    
    cout << result << endl;
}

int main() {
    metode();
    return 0;
}