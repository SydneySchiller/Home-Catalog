//Programmer:Sydney Schiller
//ID: 1466911
#pragma once
#include "Collision.hpp"

template <class T>
class HashTable
{
public:
  HashTable(int(*hf)(const T &));
  bool insert(const T &newItem);
  bool remove(T &removeItem);
  void empty();
  bool update(T &wrongInfo, T &updateItem);
  bool searchFor(T &ProductToFind);
  bool findThis(T &ProductToFind);
  void display();
  Node <T>* getCurrent() const;
  ~HashTable();

private:
  Collision <T> catalog[17];
  int(*hash)(const T &);
  int location = 0;
};

#include "HashTable.cpp"