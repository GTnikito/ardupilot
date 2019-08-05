#pragma once

#include <AP_HAL/AP_HAL.h>
#include <GCS_MAVLink/GCS.h>
#include <string>

class AP_FrequentMessage {
public:
    AP_FrequentMessage(std::string message = "It is frequent debug print");
    ~AP_FrequentMessage();

    void do_action();
private:
    std::string secret_message;
    int counter = 0;
};