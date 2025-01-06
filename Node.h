//
// Created by katals on 12/17/24.
//

#ifndef NODE_H
#define NODE_H

#include <memory>

template <typename T>

class Node {
    public:
    std::unique_ptr<T> data;
    std::shared_ptr<Node<T>> next;
    Node(std::unique_ptr<T> data): data(std::move(data)), next(nullptr) {}
    Node(std::unique_ptr<T> data, std::shared_ptr<Node<T>> next): data(std::move(data)), next(next) {}
};



#endif //NODE_H