#include <iostream>
#include "my_lib.h"
#include "config.hpp"

int main() {
    greet();
    std::cout << "major version: " << project_version_major << '\n';
    std::cout << "minor version: " << project_version_minor << '\n';
    std::cout << "patch version: " << project_version_patch << '\n';
    return 0;
}
