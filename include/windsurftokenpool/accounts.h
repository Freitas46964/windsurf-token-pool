// accounts — part of windsurf-token-pool.

#pragma once

#include <string>
#include <vector>

namespace windsurftokenpool {

class Accounts {
public:
    explicit Accounts(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace windsurftokenpool
