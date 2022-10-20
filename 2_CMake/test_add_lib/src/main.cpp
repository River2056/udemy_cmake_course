#include <iostream>
#include "../lib/include/greet.h"

int main() {
    std::cout << "hello world!" << '\n';
    std::string name = "Kevin";
    greet(name);
    return 0;
}
