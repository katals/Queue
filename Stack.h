 //
// Created by katals on 12/17/24.
//

#ifndef STACK_H
#define STACK_H

#include <memory>
#include <string>
#include "node.cpp"

template <typename T>

class Stack {
 private:
  std::shared_ptr<Node<T>> front;
  std::shared_ptr<Node<T>> rear;
  int size;

 public:
  Stack() : front(nullptr), rear(nullptr), size(0) {};
//  Stack() : front(std::make_shared<Node<T>>()), rear(std::make_shared<Node<T>>()), size(0) {};
  void push(T item);
  T pop();
  T peekFront() const;
  T peekRear() const;
  bool isEmpty() const;
  int getSize() const;
  void display() const;
};



#endif //STACK_H
