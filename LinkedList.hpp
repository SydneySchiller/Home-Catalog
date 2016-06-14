//Programmer:Sydney Schiller
//ID: 1466911

#pragma once
#include "Array.hpp"
#include "HashTable.hpp"

template<class T>
class LinkedList
{
public:
  LinkedList(int(*hf)(const T &));
  bool push(T &pushItem);
  bool pop(T &popItem);
  void isEmpty();
  void empty();
  void update(T &wrongInfo, T &updateInfo);
  bool search(T &findMe);
  bool find(T &findMe);
  bool retrieved(T &retrieve);
  void display();
  void displayArr();
  void sortBrand();
  void sortRating();
  void sortExpiration();
  ~LinkedList();


private:
  Array<T> sortThis;
  HashTable<T> table;
  Node<T> *header;
  Node<T> *trailer;
  Node<T> *current;
  Node<T> headerNode;
  Node<T> trailerNode;
};

#include "LinkedList.cpp"