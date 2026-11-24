// rotate.cpp — part of windsurf-token-pool.

#include "windsurftokenpool/rotate.h"

#include <cstdio>

namespace windsurftokenpool {

Rotate::Rotate(const std::string& config_path)
    : config_path_(config_path) {}

void Rotate::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Rotate::run() {
    if (verbose_) std::fprintf(stderr, "[windsurf-token-pool] rotate: run\n");
    // core logic lives here
    return true;
}

}  // namespace windsurftokenpool
