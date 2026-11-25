// main.cpp — entry point. Wires config and subsystems together.

#include "oldphotolife/settings.h"
#include "oldphotolife/animate.h"
#include "oldphotolife/restore.h"
#include "oldphotolife/colorize.h"
#include "oldphotolife/cli.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    oldphotolife::Settings settings = oldphotolife::Settings::load_default();
    oldphotolife::Animate animate(settings.store_path);
    oldphotolife::Restore restore(settings.store_path);
    oldphotolife::Colorize colorize(settings.store_path);
    oldphotolife::Cli cli(settings.store_path);
    std::fprintf(stderr, "[old-photo-life] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
