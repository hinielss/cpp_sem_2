#ifndef DEQUE_H
#define DEQUE_H

#include <deque>
#include <stdexcept>
#include <iostream>

template <typename T>
class Deque {
private:
    std::deque<T> deque;

public:
    void addFront(const T& item);
    void addBack(const T& item);
    T removeFront();
    T removeBack();
    bool isEmpty() const;
    void display() const;
};

template <typename T>
void Deque<T>::addFront(const T& item) {
    deque.push_front(item);
}

template <typename T>
void Deque<T>::addBack(const T& item) {
    deque.push_back(item);
}

template <typename T>
T Deque<T>::removeFront() {
    if (!deque.empty()) {
        T front = deque.front();
        deque.pop_front();
        return front;
    }
    throw std::runtime_error("Deque is empty");
}

template <typename T>
T Deque<T>::removeBack() {
    if (!deque.empty()) {
        T back = deque.back();
        deque.pop_back();
        return back;
    }
    throw std::runtime_error("Deque is empty");
}

template <typename T>
bool Deque<T>::isEmpty() const {
    return deque.empty();
}

template <typename T>
void Deque<T>::display() const {
    for (const auto& item : deque) {
        item.display();
    }
}

#endif // DEQUE_H