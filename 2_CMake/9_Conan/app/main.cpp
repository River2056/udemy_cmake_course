#include <iostream>
#include "my_lib.h"
#include "config.hpp"
#include <spdlog/spdlog.h>
#include <fmt/format.h>

int main(int argc, char **argv) {
    auto welcome_message = fmt::format("Welcome to {} v{}\n", project_name, project_version);
    spdlog::info(welcome_message);

    cxxopts::Options options(project_name.data());
    options.add_options("arguments")("h, help", "print usage");

    return 0;
}
