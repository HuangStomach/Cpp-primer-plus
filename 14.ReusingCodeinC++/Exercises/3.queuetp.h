#ifndef QUEUE_H_
#define QUEUE_H_
#include <stdio.h>

template <typename T>
class Queue {
private:
    struct Node {
        T item;
        struct Node * next;
    };
    enum { Q_SIZE = 10 };

    Node * front;
    Node * rear;
    int items;
    const int qsize;
    Queue(const Queue & q) :qsize(0) { }
    Queue & operator=(const Queue & q) { return *this; }
public:
    Queue(int qs = Q_SIZE);
    ~Queue();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(const T &t);
    bool dequeue();
};

template <typename T>
Queue<T>::Queue(int qs): qsize(qs) {
    front = rear = NULL;
    items = 0;
}

template <typename T>
Queue<T>::~Queue() {
    Node * temp;
    while (front != NULL) {
        temp = front;
        front = front->next;
        delete temp;
    }
}

template <typename T>
bool Queue<T>::isempty() const {
    return items == 0;
}

template <typename T>
bool Queue<T>::isfull() const {
    return items == qsize;
}

template <typename T>
int Queue<T>::queuecount() const {
    return items;
}

template <typename T>
bool Queue<T>::enqueue(const T & t) {
    if (isfull()) return false;
    Node * add = new Node;
    add->item = t;
    add->next = NULL;
    items++;
    if (front == NULL) front = add;
    else rear->next = add;
    rear = add;
    return true;
}

template <typename T>
bool Queue<T>::dequeue() {
    if (front == NULL) return false;

    Node * temp;
    temp = front;
    front = front->next;
    delete temp;
    items--;

    return true;
}

#endif
