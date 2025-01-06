#include <stdexcept>
#include <iostream>

#include "Queue.h"
#include "Node.h"

template <typename T>
void Queue<T>:: enqueue(T item) {
    auto newNode = std::make_shared<Node<T>>(std::make_unique<T>(item));
    if(isEmpty()) {
      front = newNode;
      rear = newNode;
      return;
    }
    auto temp = front;
    front = newNode;
    size++;
    front->next = temp;
}

template <typename T>
T Queue<T>::dequeue(){
    if(isEmpty()) {
      throw std::runtime_error("Queue is empty!");
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
T Queue<T>::peekFront() const {
  if(isEmpty()) {
    throw std::runtime_error("Queue is empty!");
  }
  return *front->data;
}

template <typename T>
T Queue<T>::peekRear() const {
  if(isEmpty()) {
    throw std::runtime_error("Queue is empty!");
  }
  return *rear->data;
}

template <typename T>
bool Queue<T>::isEmpty() const {
  return front == nullptr;
}

template <typename T>
int Queue<T>::getSize() const{
  return size;
}

template <typename T>
void Queue<T>::display() const{
  auto current = front; // Inicia desde el frente de la cola
  while (current) { // Recorre los nodos mientras no sean nullptr
    T item = *current->data;
    std::cout << item << " "; // Imprime los datos
    current = current->next; // Avanza al siguiente nodo
  }
  std::cout << std::endl;
}


