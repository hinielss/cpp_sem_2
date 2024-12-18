#ifndef BANKSYSTEM_H
#define BANKSYSTEM_H

#include "Queue.h"
#include "Deque.h"
#include "Stack.h"
#include "Client.h"
#include "Operator.h"
#include <vector>
#include <string>
#include <iostream>

class BankSystem {
private:
    Queue<Client> lowPriorityQueue;
    Deque<Client> highPriorityDeque;
    Stack<Client> completedOperations;
    std::vector<Operator> operators;
    int nextClientId;

public:
    BankSystem(int operatorCount);

    void addClient(const std::string& requestType);
    void processRequest();
    void displayQueues() const;
    void displayHistory() const;
    void undoLastOperation();
};

#endif // BANKSYSTEM_H