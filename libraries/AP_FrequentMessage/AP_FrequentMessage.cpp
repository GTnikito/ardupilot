#include <AP_HAL/AP_HAL.h>
#include <AP_FrequentMessage/AP_FrequentMessage.h>

AP_FrequentMessage::AP_FrequentMessage(std::string message) : secret_message(message) {};
AP_FrequentMessage::~AP_FrequentMessage() {};

void AP_FrequentMessage::do_action() {
    counter += 1;
    gcs().send_text(MAV_SEVERITY_CRITICAL, "%s, counter:%d", secret_message.c_str(), counter);
}