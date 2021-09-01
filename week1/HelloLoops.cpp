#include <iostream>

using namespace std;

int main() {
    int n, i = 0;
    cin >> n;

    if (n == 0){
        cout << 0;
        return 0;
    }

    float inp, sum;

    while (i < n) {
        cin >> inp;
        sum += inp;
        i++;
    }

    cout << sum;
}