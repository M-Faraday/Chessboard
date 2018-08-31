//
// Created by Rudolph on 2018/07/13.
//

#ifndef GPEC_STACK_H
#define GPEC_STACK_H

#include <iostream>
#include "Node.h"
#include <string>

template<class T>
class Stack;

template<class T>
std::ostream& operator<<(std::ostream&,const Stack<T>&);

template<class T>
class Stack {
public:
    void Push(T* element);

    Stack(const Stack<T>& other);

    virtual ~Stack();

    Stack();

    friend std::ostream &operator<< <T>(std::ostream &os, const Stack<T> &stack);

    T* Pop();

    bool IsEmpty();

    void Empty();

    T* Peak();
private:
    Node<T> *head = nullptr;
};

template<class T>
Stack<T>::Stack() {
    head = nullptr;
}

template<class T>
Stack<T>::Stack(const Stack<T>& other) {
    if (other.head) {
        head = new Node<T>(other.head->element);
        Node<T>* nodePtr1 = head;
        Node<T>* nodePtr2 = other.head;
        while (nodePtr2->next != nullptr) {
            nodePtr1->next = new Node<T>(nodePtr2->next->element);
            nodePtr2 = nodePtr2->next;
            nodePtr1 = nodePtr1->next;
        }
    } else
        head = nullptr;
}

template<class T>
void Stack<T>::Push(T* element) {
    if (head) {
        element->next = head;
    }
    head = element;
}

template<class T>
T* Stack<T>::Pop(){
    if (head) {
        Node<T>* tempPtr = head;
        head = head->next;
        return tempPtr;
    } else {
        throw "Popped empty stack";
    }
}

template<class T>
bool Stack<T>::IsEmpty(){
    if (head)
        return false;
    else
        return true;
}

template<class T>
void Stack<T>::Empty(){
    while (head) {
        Node<T>* tempPtr = this->Pop();
        delete tempPtr;
    }
}

template<class T>
T* Stack<T>::Peak(){
    return head;
}

template<class T>
std::ostream &operator<<(std::ostream &os, const Stack<T> &stack) {
    Node<T>* nodePtr = stack.head;
    while (nodePtr != nullptr) {
        os << nodePtr->element << " ";
        nodePtr = nodePtr->next;
    }
    return os;
}

template<class T>
Stack<T>::~Stack() {
    while (head) {
        Node<T>* tempPtr = this->Pop();
        delete tempPtr;
    }
}

#endif //GPEC_STACK_H
