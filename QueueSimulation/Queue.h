//
// Created by zdy2001 on 2023/10/27.
//

#ifndef QUEUESIMULATION_QUEUE_H
#define QUEUESIMULATION_QUEUE_H
#include <iostream>
class Customer{
private:
    long arrive;
    int processTime;
public:
    Customer(){arrive=processTime=0;};
    void set(long when);
    long when()const{return arrive;};
    long int ptime()const{return processTime;};
};
typedef Customer Item;
class Queue{

private:
    enum {Q_SIZE=10};
    struct Node{Item item; Node* next; };
    Node* front;
    Node* rear;
    int items;
    const int qSize;
    Queue(const Queue &q):qSize(0){};
    Queue& operator=(const Queue& q){return *this;};
public:
    explicit Queue(int qs=Q_SIZE);
    ~Queue();
    bool isEmpty()const;
    bool isFull()const;
    int queueCount()const;
    bool enqueue(const Item& item);
    bool dequeue(Item& item);
};
#endif //QUEUESIMULATION_QUEUE_H
