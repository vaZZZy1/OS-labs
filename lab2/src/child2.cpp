#include "utils.h"

int main() {
    std::string s;
    while (getline(std::cin, s)) {
        for (int i = 0; i < s.size(); i++){
            if (s[i] == ' ') s[i] = '_';
            cout << s[i];
        }
    }
    return 0;
}