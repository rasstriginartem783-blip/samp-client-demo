#pragma once
#include <string>

class Network {
public:
    bool init(const std::string& ip, int port);
    void loop();
    void cleanup();
};
