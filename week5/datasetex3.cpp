#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

void method() {
    string input, prevkey;
    int counter = 0, output = 0;
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

    for (int i = 0; i < map.at("a").size(); i++)
    {
        output += map.at("a")[i] * map.at("b")[i];
    }

    cout << output << endl;    
}

int main() {
    method();
    return 0;
}