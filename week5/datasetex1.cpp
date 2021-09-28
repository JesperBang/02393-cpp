#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

void method() {
    string input, prevkey, output;
    int counter = 0;
    map<string, vector<int>> map;

    getline(cin, input);

    input.erase(remove(input.begin(), input.end(), ' '), input.end());

    for(char c : input) {
        if (counter % 2 == 0){
            prevkey = c;
        } else {
            vector<int> vecofnum;
            vecofnum.push_back((int)c - 48);

            if(map.count(prevkey)){
                map.at(prevkey).push_back(c - 48);
            } else {
                map.insert({prevkey, vecofnum});
            }
        }
        counter += 1;
    }

    for ( const auto &keypair : map ) {
        vector<int> value = keypair.second;
        sort(value.begin(), value.end(), less<int>());
        for(int n : value){
            output += to_string(n);
            output += " ";
        }
    }
    output.pop_back();

    cout << output << endl;    

}

int main() {
    method();
    return 0;
}