#include "BankSystem.h"

BankSystem::BankSystem(int operatorCount) : nextClientId(1) {
    for (int i = 1; i <= operatorCount; ++i) {
        operators.emplace_back(i);
    }
}

void BankSystem::addClient(const std::string& requestType) {
    Client newClient(nextClientId++, requestType);
    if (requestType == "high") {
        highPriorityDeque.addBack(newClient);
    } else {
        lowPriorityQueue.enqueue(newClient);
    }
    std::cout << "Client added to the system.\n";
}

void BankSystem::processRequest() {
    for (auto& op : operators) {
        if (!op.getStatus()) {
            if (!highPriorityDeque.isEmpty()) {
                Client client = highPriorityDeque.removeFront();
                op.processRequest(client);
                completedOperations.push(client);
                return;
            } else if (!lowPriorityQueue.isEmpty()) {
                Client client = lowPriorityQueue.dequeue();
                op.processRequest(client);
                completedOperations.push(client);
                return;
            }
        }
    }
    std::cout << "No available operators or clients in queue.\n";
}

void BankSystem::displayQueues() const {
    std::cout << "High Priority Queue:\n";
    highPriorityDeque.display();
    std::cout << "\nLow Priority Queue:\n";
    lowPriorityQueue.display();
}

void BankSystem::displayHistory() const {
    std::cout << "Completed Operations:\n";
    completedOperations.display();
}

void BankSystem::undoLastOperation() {
    if (!completedOperations.isEmpty()) {
        Client client = completedOperations.pop();
        std::cout << "Operation for client ";
        client.display();
        std::cout << " has been undone.\n";
    } else {
        std::cout << "No operations to undo.\n";
    }
}