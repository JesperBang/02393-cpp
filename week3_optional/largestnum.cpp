#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void method(int n) {
    int largest = 0, current = 0;
    string output;
    int inp[n];
    bool first = false;

    cin >> largest;
    inp[0] = largest;

    for (int i = 1; i < n; i++)
    {
        cin >> current;
        inp[i] = current;

        if(current > largest){
            largest = current;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (inp[i] == largest && first == false){
            output += "*" + to_string(inp[i]) + "*";
            first = true;
        } else {
            output += to_string(inp[i]);
        }
        
        if(i != n-1){
            output += " ";
        }
    }
    
    
    cout << output << endl;
}

int main() {
    int n;
    cin >> n;
    
    if(n >= 1){
        method(n);
    }

    return 0;
}