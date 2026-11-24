// main.cpp — entry point. Wires config and subsystems together.

#include "windsurftokenpool/settings.h"
#include "windsurftokenpool/pool.h"
#include "windsurftokenpool/accounts.h"
#include "windsurftokenpool/rotate.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    windsurftokenpool::Settings settings = windsurftokenpool::Settings::load_default();
    windsurftokenpool::Pool pool(settings.store_path);
    windsurftokenpool::Accounts accounts(settings.store_path);
    windsurftokenpool::Rotate rotate(settings.store_path);
    std::fprintf(stderr, "[windsurf-token-pool] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
