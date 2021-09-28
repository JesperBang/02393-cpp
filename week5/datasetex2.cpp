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

    int sizea = map.at("a").size();
    int sizeb = map.at("b").size();
    int largest;

    if (sizea > sizeb) {
        largest = sizea;
    } else {
        largest = sizeb;
    }
    
    for (int i = 0; i < largest; i++)
    {
        if (i < sizea){
            output += to_string(map.at("a")[i]);
            output += " ";
        }
        if (i < sizeb){
            output += to_string(map.at("b")[i]);
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