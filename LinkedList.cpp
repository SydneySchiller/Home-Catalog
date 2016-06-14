//Programmer:Sydney Schiller
//ID: 1466911

#include "stdafx.h"

#include <iostream>
using std::cout;
using std::endl;


template<class T>
LinkedList<T>::LinkedList(int(*hf)(const T &))
  : table(hf), header(&headerNode), trailer(&trailerNode)
{
  current = header->linkNext = trailer;
  trailer->linkBack = header;
}

template<class T>
bool LinkedList<T>::push(T &pushItem)
{
  //pass address of item to sorting array
  if (!sortThis.push(pushItem))
    return false;

  //insert into hash table
  if (!table.insert(pushItem))
    return false;

  current = table.getCurrent();
  current->linkNext = header->linkNext;
  current->linkBack = header;
  header->linkNext = header->linkNext->linkBack = current;
  current = trailer;

  return true;
}

template<class T>
bool LinkedList<T>::pop(T &popItem)
{
  if (!retrieved(popItem)){
    return false;
  }
  //pops from array
  if (!sortThis.pop(popItem)) {
    return false;
    
  }
  
  current->linkBack->linkNext = current->linkNext;
  current->linkNext->linkBack = current->linkBack;
  current = trailer;
  table.remove(popItem);
  
  return true;
}

template<class T>
void LinkedList<T>::isEmpty()
{
  return header->linkNext == trailer;
}

template <class T>
void LinkedList<T>::empty()
{
  if (!sortThis.empty()) {
    cout << "Unable to empty at this point. Try again later." << endl;
  }
  else {
    cout << "Emptied" << endl;
  }

  table.empty();
 
  current = header->linkNext = trailer;
  trailer->linkBack = header;
}

template<class T>
void LinkedList<T>::update(T &wrongInfo, T &updateInfo)
{
  table.update(wrongInfo, updateInfo);
  sortThis.update(wrongInfo, updateInfo);
}

template<class T>
bool LinkedList<T>::search(T &findMe)
{
  T search = findMe;
  if (table.searchFor(search)) {
    current = table.getCurrent();
    return true;
  }

  current = trailer;
  return false;
}

template<class T>
bool LinkedList<T>::find(T &findMe)
{
  T search = findMe;
  if (table.findThis(search)) {
    current = table.getCurrent();
    return true;
  }

  current = trailer;
  return false;
}

template<class T>
bool LinkedList<T>::retrieved(T &retrieve)
{
  if (!find(retrieve))
    return false;

  retrieve = current->info;
  return true;
}

template<class T>
void LinkedList<T>::display()
{
  table.display();
}

template<class T>
void LinkedList<T>::displayArr()
{
  if (!sortThis.isEmpty())
    sortThis.display();
  else
    cout << "Empty List" << endl;
}

template<class T>
void LinkedList<T>::sortBrand()
{
  sortThis.sortByBrand();
}

template<class T>
void LinkedList<T>::sortRating()
{
  sortThis.sortByRating();
}

template<class T>
void LinkedList<T>::sortExpiration()
{
  sortThis.sortByExpiration();
}

template<class T>
LinkedList<T>::~LinkedList()
{
  empty();
}


