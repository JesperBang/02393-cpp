#include <iostream>
#include <string>

int main() {

int a, b;

std::cin >> a;
std::cin >> b;

if (a > b){
    std::cout << a << " is bigger than " << b;
}
else if (b > a){
    std::cout << a << " is smaller than " << b;
}
else if (a = b){
    std::cout << a << " is equal to " << b;
}

}