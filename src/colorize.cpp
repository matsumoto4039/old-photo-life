// colorize.cpp — part of old-photo-life.

#include "oldphotolife/colorize.h"

#include <cstdio>

namespace oldphotolife {

Colorize::Colorize(const std::string& config_path)
    : config_path_(config_path) {}

void Colorize::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Colorize::run() {
    if (verbose_) std::fprintf(stderr, "[old-photo-life] colorize: run\n");
    // core logic lives here
    return true;
}

}  // namespace oldphotolife
