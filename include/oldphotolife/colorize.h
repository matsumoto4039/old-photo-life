// colorize — part of old-photo-life.

#pragma once

#include <string>
#include <vector>

namespace oldphotolife {

class Colorize {
public:
    explicit Colorize(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace oldphotolife
