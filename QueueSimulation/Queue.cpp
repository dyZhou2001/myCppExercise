//
// Created by zdy2001 on 2023/10/27.
//
#include "Queue.h"
#include <iostream>

Queue::Queue(int qs):qSize(qs),front(nullptr),rear(nullptr),items(0){}
Queue::~Queue() {
    Node* p;
    while (front!= nullptr){
        p=front;
        front=front->next;
        delete p;
    }
}
bool Queue::isFull() const {
    if (items==qSize){
        return true;
    } else {
        return false;
    }
}

bool Queue::isEmpty() const {
    if(items==0){
        return true;
    } else{
        return false;
    }
}

int Queue::queueCount() const {return items;}

bool Queue::enqueue(const Item &item) {
    if(isFull()) return false;
    Node* add=new Node;
    add->item=item;
    add->next= nullptr;
    ++items;
    if(front== nullptr) front=add;
    else{
        rear->next=add;
    }
    rear=add;
    return true;
}

bool Queue::dequeue(Item &item) {
    if(isEmpty()) return false;
    item=front->item;
    items--;
    Node* tmp=front;
    front=front->next;
    delete tmp;
    if(isEmpty()) rear= nullptr;
    return true;
}

void Customer::set(long when) {
    processTime=std::rand()%3+1;
    arrive=when;
}