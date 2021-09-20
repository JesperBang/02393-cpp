#include <iostream>

using namespace std;

void read(int n) {
    int last = 0, curr = 0;
    bool sorted = true;

    cin >> last;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> curr;
        
        if(curr < last){
            sorted = false;
        }

        last = curr;
    }

    if (sorted == true){
        cout << "SORTED" << endl;
    } else {
        cout << "UNSORTED" << endl;
    }
}

int main() {
    int n;
    cin >> n;
    read(n);

    return 0;
}