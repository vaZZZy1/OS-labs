#include <string>
#include <iostream>

int main() {
    std::string s;
    while (getline(std::cin, s)) {
        for (char & i : s){
            if (i == ' ') std::cout << "_";
            else std::cout << i;
        }
        std::cout << '\n';
    }
    return 0;
}