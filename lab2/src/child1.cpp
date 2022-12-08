#include <string>
#include <iostream>

int main() {
    std::string s;
    while(getline(std::cin, s)) {
        for (char & ch : s) {
            ch = toupper(ch);
        }
        std::cout << s << '\n';
    }
    return 0;
}