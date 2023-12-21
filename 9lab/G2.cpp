#include <iostream>
#include <string>
#include <algorithm>
int main() {
    int counter = 0;
    std::string s;
    std::getline(std::cin, s);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == s[i - 1] && s[i] == '1') {
            s.erase(s.begin()+i-1);
            s.erase(s.begin()+i-1);i--;
        }
    }
    std::cout<<s;
    return 0;
}