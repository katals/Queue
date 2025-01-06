#include <stdexcept>
#include <iostream>

#include "Stack.h"
#include "Node.h"

template <typename T>
void Stack<T>:: push(T item) {
    auto newNode = std::make_shared<Node<T>>(std::make_unique<T>(item));
    size++;
    if(isEmpty()) {
      front = newNode;
      rear = newNode;
      return;
    }
    auto temp = front;
    front = newNode;

    front->next = temp;
}

template <typename T>
T Stack<T>::pop(){
    if(isEmpty()) {
      throw std::runtime_error("Stack is empty!");
    }
    auto temp = front;
    front = front->next;
    if(!front) {
      rear = nullptr;
    }
    T item = *temp->data;
    size--;
    return item;
}

template <typename T>
T Stack<T>::peekFront() const {
  if(isEmpty()) {
    throw std::runtime_error("Stack is empty!");
  }
  return *front->data;
}

template <typename T>
T Stack<T>::peekRear() const {
  if(isEmpty()) {
    throw std::runtime_error("Stack is empty!");
  }
  return *rear->data;
}

template <typename T>
bool Stack<T>::isEmpty() const {
  return front == nullptr;
}

template <typename T>
int Stack<T>::getSize() const{
  return size;
}

template <typename T>
void Stack<T>::display() const{
  auto current = front; // Inicia desde el frente de la cola
  while (current) { // Recorre los nodos mientras no sean nullptr
    T item = *current->data;
    std::cout << item << " "; // Imprime los datos
    current = current->next; // Avanza al siguiente nodo
  }
  std::cout << std::endl;
}


