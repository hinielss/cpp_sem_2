#ifndef QUEUE_H
#define QUEUE_H

#include <queue>
#include <stdexcept>
#include <iostream>

template <typename T>
class Queue {
private:
    std::queue<T> queue;

public:
    void enqueue(const T& item);
    T dequeue();
    bool isEmpty() const;
    void display() const;
};

template <typename T>
void Queue<T>::enqueue(const T& item) {
    queue.push(item);
}

template <typename T>
T Queue<T>::dequeue() {
    if (!queue.empty()) {
        T front = queue.front();
        queue.pop();
        return front;
    }
    throw std::runtime_error("Queue is empty");
}

template <typename T>
bool Queue<T>::isEmpty() const {
    return queue.empty();
}

template <typename T>
void Queue<T>::display() const {
    std::queue<T> temp = queue;
    while (!temp.empty()) {
        temp.front().display();
        temp.pop();
    }
}

#endif // QUEUE_H