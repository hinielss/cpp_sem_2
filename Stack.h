#ifndef STACK_H
#define STACK_H

#include <stack>
#include <stdexcept>
#include <iostream>

template <typename T>
class Stack {
private:
    std::stack<T> stack;

public:
    void push(const T& item);
    T pop();
    T top() const;
    bool isEmpty() const;
    void display() const;
};

template <typename T>
void Stack<T>::push(const T& item) {
    stack.push(item);
}

template <typename T>
T Stack<T>::pop() {
    if (!stack.empty()) {
        T top = stack.top();
        stack.pop();
        return top;
    }
    throw std::runtime_error("Stack is empty");
}

template <typename T>
T Stack<T>::top() const {
    if (!stack.empty()) {
        return stack.top();
    }
    throw std::runtime_error("Stack is empty");
}

template <typename T>
bool Stack<T>::isEmpty() const {
    return stack.empty();
}

template <typename T>
void Stack<T>::display() const {
    std::stack<T> temp = stack;
    while (!temp.empty()) {
        temp.top().display();
        temp.pop();
    }
}

#endif // STACK_H