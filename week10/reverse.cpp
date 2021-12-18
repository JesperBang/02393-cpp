#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// method 1
void reverse(vector<int> vec){
    string output;
    int counter = 0;

    typedef vector<int>::size_type vec_sz;
    vec_sz size = vec.size();
    
    for(int& i: vec){
        output = to_string(i) + output;
        counter ++;

        if(counter < size){
            output = " " + output;
        }
    }

    cout << output << endl;
}

// method 2
void reverse2(vector<int> vec){
    string output;
    reverse(vec.begin(),vec.end());

    for(int& i: vec){
        output += to_string(i) + " ";
    }
    output.pop_back();

    cout << output << endl;
}

int main() {
    vector<int> vec;
    int inp;
    while (true) {
        cin >> inp;
        if (cin.fail()) break;
        vec.push_back(inp);
    }

    reverse2(vec);
    return 0;
}