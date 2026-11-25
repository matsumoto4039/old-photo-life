// restore.cpp — part of old-photo-life.

#include "oldphotolife/restore.h"

#include <cstdio>

namespace oldphotolife {

Restore::Restore(const std::string& config_path)
    : config_path_(config_path) {}

void Restore::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Restore::run() {
    if (verbose_) std::fprintf(stderr, "[old-photo-life] restore: run\n");
    // core logic lives here
    return true;
}

}  // namespace oldphotolife
