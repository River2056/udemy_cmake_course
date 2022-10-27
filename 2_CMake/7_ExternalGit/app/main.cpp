#include <iostream>
#include "my_lib.h"
#include "config.hpp"
#include <nlohmann/json.hpp>

int main() {
    greet();
    std::cout << '\n';
    print_name();
    std::cout << '\n';
    print_version();
    std::cout << '\n';
    std::cout << "major version: " << project_version_major << '\n';
    std::cout << "minor version: " << project_version_minor << '\n';
    std::cout << "patch version: " << project_version_patch << '\n';


    std::cout << "JSON lib Version: " << NLOHMANN_JSON_VERSION_MAJOR << "." << NLOHMANN_JSON_VERSION_MINOR << "." << NLOHMANN_JSON_VERSION_PATCH << '\n';
    return 0;
}
