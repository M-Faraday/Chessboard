//
// Created by Rudolph on 2018/07/13.
//

#ifndef GPEC_NODE_H
#define GPEC_NODE_H

template<class T>
class Node {
public:
    Node(T Element);

    virtual ~Node();
    T element = nullptr;
    Node<T>* next = nullptr;

};

template<class T>
Node<T>::Node(T Element):element(Element) {}

template<class T>
Node<T>::~Node() {
    next = nullptr;
}

#endif //GPEC_NODE_H
