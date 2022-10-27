#include <iostream>
#include "my_lib.h"
#include "config.hpp"
#include <spdlog/spdlog.h>
#include <fmt/format.h>

int main() {
    auto welcome_message = fmt::format("Welcome to {} v{}\n", project_name, project_version);
    spdlog::info(welcome_message);

    return 0;
}
