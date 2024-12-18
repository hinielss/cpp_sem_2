#include "Operator.h"
#include <iostream>

Operator::Operator(int operatorId) : id(operatorId), isBusy(false) {}

bool Operator::getStatus() const { return isBusy; }

void Operator::processRequest(const Client& client) {
    isBusy = true;
    std::cout << "Operator " << id << " is processing ";
    client.display();
    std::cout << std::endl;
    isBusy = false;
}