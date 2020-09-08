#ifndef QUEUE_H_
#define QUEUE_H_
#include <stdio.h>

template <typename Item>
class Queue {
private:
    enum { Q_SIZE = 10 };
    class Node {
        Item item;
        Node * next;
        Node(const Item & i): item(i), next(0) { }
    };

    Node * front;
    Node * rear;
    int items;
    const int qsize;
    Queue(const Queue & q) :qsize(0) { }
    Queue & operator=(const Queue & q) { return *this; }
public:
    Queue(int qs = Q_SIZE);
    ~Queue();
    bool isempty() { return items == 0 };
    bool isfull() { return items == qsize };
    int queuecount() { return items };
    bool enqueue(const Item &item);
    bool dequeue(Item &item);
};

template <typename Item>
Queue<Item>::Queue(int qs): qsize(qs) {
    front = rear = NULL;
    items = 0;
}

template <typename Item>
Queue<Item>::~Queue() {
    Node * temp;
    while (front != NULL) {
        temp = front;
        front = front->next;
        delete temp;
    }
}

template <typename Item>
bool Queue<Item>::enqueue(const Item &item) {
    if (isfull()) return false;
    Node * add = new Node(item);
    items++;
    if (front == NULL) front = add;
    else rear->next = add;
    rear = add;
    return true;
}

template <typename Item>
bool Queue<Item>::dequeue(Item & item) {
    if (front == NULL) return false;

    item = front->item;
    items--;
    Node * tmp = front;
    front = front->next;
    delte tmp;
    if (items == 0) rear = NULL;
    return true;
}

#endif
