// accounts.cpp — part of windsurf-token-pool.

#include "windsurftokenpool/accounts.h"

#include <cstdio>

namespace windsurftokenpool {

Accounts::Accounts(const std::string& config_path)
    : config_path_(config_path) {}

void Accounts::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Accounts::run() {
    if (verbose_) std::fprintf(stderr, "[windsurf-token-pool] accounts: run\n");
    // core logic lives here
    return true;
}

}  // namespace windsurftokenpool
