#ifndef OPERATOR_H
#define OPERATOR_H

#include "Client.h"

class Operator {
private:
    int id;
    bool isBusy;

public:
    Operator(int operatorId);

    bool getStatus() const;
    void processRequest(const Client& client);
};

#endif // OPERATOR_H