#include "network.h"
#include <iostream>

int main() {
    std::cout << "[SA:MP CLIENT DEMO]" << std::endl;
    Network net;
    if (net.init("127.0.0.1", 7777)) {
        std::cout << "Connected to test server." << std::endl;
        net.loop();
    } else {
        std::cout << "Failed to connect." << std::endl;
    }
    net.cleanup();
    return 0;
}
