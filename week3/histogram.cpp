#include <iostream>
#include <map>
#include <algorithm>
#include <math.h>

using namespace std;

map<int, int> histogram;

void method(int l, int n, int arr[]) {
    int k;
    double val;
    int m = *std::max_element(arr,arr+n);
    
    val = (double)m / l;
    k = ceil((val * 100) / 100);

    for (int i = l; i > 0; i--)
    {
        histogram.insert({(i - 1) * k, 0});
    }
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == m && arr[i] % l == 0) {
            continue;
        }
        histogram.at(arr[i] - (arr[i] % k)) += 1;
    }
    
    if (m % l == 0) {
        histogram.rbegin()->second += 1;
    }
    
    for (const auto& kv : histogram)
    {
        cout << kv.first << ": " << kv.second << endl;
    }
}

int main() {
    int l, n, input;

    cin >> l;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    method(l, n, arr);
    delete[] arr;
    return 0;
}