//Programmer:Sydney Schiller
//ID: 1466911

#include "stdafx.h"

#include <iostream>
using std::endl;
using std::cout;

template <class T>
HashTable<T>::HashTable(int(*hf)(const T &))
{
  hash = hf;
}

template <class T>
bool HashTable<T>::insert(const T &newItem)
{
  location = hash(newItem);
  if (location < 0 || location >= 17)
    return false;
  catalog[location].push(newItem);
  return true;
}

template <class T>
bool HashTable<T>::remove(T &removeItem)
{
  location = hash(removeItem);
  if (location < 0 || location >= 17)
    return false;
  if (!catalog[location].pop(removeItem))
    return false;
  return true;
}

template <class T>
void HashTable<T>::empty()
{
  for (int i = 0; i < 17; i++)
    catalog[i].empty();
}

template <class T>
bool HashTable<T>::update(T &wrongInfo, T &updateItem)
{
  location = hash(wrongInfo);
  if (location < 0 || location >= 17)
    return false;
  if (!catalog[location].update(wrongInfo))
    return false;
  if (!insert(updateItem))
    return false;
  return true;
}

template <class T>
bool HashTable<T>::searchFor(T &ProductToFind)
{
  location = hash(ProductToFind);
  if (location < 0 || location >= 17)
    return false;
  if (!catalog[location].find(ProductToFind))
    return false;
  if (!catalog[location].search(ProductToFind))
    return false;
  return true;
}

template <class T>
bool HashTable<T>::findThis(T &ProductToFind)
{
  location = hash(ProductToFind);
  if (location < 0 || location >= 17)
    return false;
  if (!catalog[location].find(ProductToFind))
    return false;
  return true;
}

template <class T>
void HashTable<T>::display()
{
  for (int i = 0; i < 17; i++) {
    cout << "----------------------------------------" << endl;
    cout << "Index " << i << ": " << endl;
    cout << "----------------------------------------" << endl;
    catalog[i].display();
  }
}

template <class T>
Node <T>* HashTable<T>::getCurrent() const
{
  //cout << "GET CURRENT LOCATION:: " << location << endl;
  return catalog[location].getCurrent();
}


template <class T>
HashTable<T>::~HashTable()
{
  empty();
}
