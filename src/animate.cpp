// animate.cpp — part of old-photo-life.

#include "oldphotolife/animate.h"

#include <cstdio>

namespace oldphotolife {

Animate::Animate(const std::string& config_path)
    : config_path_(config_path) {}

void Animate::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Animate::run() {
    if (verbose_) std::fprintf(stderr, "[old-photo-life] animate: run\n");
    // core logic lives here
    return true;
}

}  // namespace oldphotolife
