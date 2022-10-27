#include <iostream>
#include "my_lib.h"
#include "config.hpp"

void print_name() {
    std::cout << "project name: " << project_name << '\n';
}

void print_version() {
    std::cout << "project version: " << project_version << '\n';
}
