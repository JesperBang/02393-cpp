#include <iostream>
#include <math.h>

using namespace std;

double pi(int n) {
    double result = 0;

    for (int i = 0; i <= n - 1; ++i){
        result += (pow((-1),i)) / (2 * i + 1);
    }

    return result * 4;
}

int main() {
    int digitsofpi = 0;
    cin >> digitsofpi;
    cout << pi(digitsofpi) << endl;
    return 0;
}