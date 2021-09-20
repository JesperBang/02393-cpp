#include <iostream>

using namespace std;

void method() {
    int n;
    double current, output = 0;

    cin >> n;

    double vec[n];

    for (int i = 0; i < n; i++)
    {
        cin >> current;
        vec[i] = current;
    }

    for (int j = 0; j < n; j++){
        cin >> current;
        output += vec[j] * current;
    }
    
    cout << output << endl;
}

int main() {
    method();
    return 0;
}