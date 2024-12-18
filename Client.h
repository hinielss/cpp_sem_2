#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include <ctime>
#include <iostream>

class Client {
private:
    int id;
    std::string requestType;
    std::time_t timestamp;

public:
    Client(int clientId, const std::string& type);

    int getId() const;
    std::string getRequestType() const;
    std::time_t getTimestamp() const;
    void display() const;
};

#endif // CLIENT_H