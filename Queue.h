 //
// Created by katals on 12/17/24.
//

#ifndef QUEUE_H
#define QUEUE_H

#include <memory>
#include <string>
#include "node.cpp"

template <typename T>

class Queue {
 private:
  std::shared_ptr<Node<T>> front;
  std::shared_ptr<Node<T>> rear;
  int size;

 public:
  Queue() : front(nullptr), rear(nullptr), size(0) {};
//  Queue() : front(std::make_shared<Node<T>>()), rear(std::make_shared<Node<T>>()), size(0) {};
  void enqueue(T item);
  T dequeue();
  T peekFront() const;
  T peekRear() const;
  bool isEmpty() const;
  int getSize() const;
  void display() const;
};



#endif //QUEUE_H
