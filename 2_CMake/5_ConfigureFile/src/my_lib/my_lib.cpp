#include <iostream>
#include "my_lib.h"
#include "config.hpp"

void greet() {
    std::cout << "Hello from ConfigureFiles" << '\n';
    std::cout << "project name: " << project_name << '\n';
    std::cout << "project version: " << project_version << '\n';
}
