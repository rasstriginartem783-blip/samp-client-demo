#include "network.h"
#include <iostream>
#include <thread>
#include <chrono>

bool Network::init(const std::string& ip, int port) {
    std::cout << "Initializing connection to " << ip << ":" << port << std::endl;
    return true; // mock success
}

void Network::loop() {
    std::cout << "Running fake network loop..." << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Tick " << i << " | Player position sync OK" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

void Network::cleanup() {
    std::cout << "Closing connection..." << std::endl;
}
