//Programmer:Sydney Schiller
//ID: 1466911

#pragma once
template<class T>
struct Node {
  T info;
  Node<T> *next;
  Node<T> *linkNext;
  Node<T> *linkBack;
};

template <class T>
class Collision
{
public:
  Collision();
  void push(T pushItem);
  bool pop(T &popItem);
  bool isEmpty();
  void empty();
  bool update(T &wrongInfo);
  Node <T>* getCurrent() const;
  bool search(const T &findMe);
  bool find(const T &findMe);
  void display();
  ~Collision();

private:
  Node<T> *head;
  Node<T> *current;
};

#include "Collision.cpp"
