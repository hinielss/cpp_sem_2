#include "Client.h"

Client::Client(int clientId, const std::string& type)
    : id(clientId), requestType(type), timestamp(std::time(nullptr)) {}

int Client::getId() const { return id; }

std::string Client::getRequestType() const { return requestType; }

std::time_t Client::getTimestamp() const { return timestamp; }

void Client::display() const {
    std::cout << "Client(id=" << id << ", type=" << requestType
              << ", time=" << std::ctime(&timestamp);
}