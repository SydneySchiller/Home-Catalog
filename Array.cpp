//Programmer:Sydney Schiller
//ID: 1466911

#include "stdafx.h"

#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
using std::swap;


template <class T>
Array<T>::Array()
{
  numElements = 0;
  lastIndex = -1;
  size = 2;
  sortArr = new T*[size];
}

template <class T>
bool Array<T>::push(T &item)
{
  T *temp = new T;
  *temp = item;
  lastIndex++;
  if (lastIndex == size) {
    doubleArray();
  }
  sortArr[lastIndex] = temp;
  if (numElements != size) {
    numElements++;
  }
  return true;
}

template <class T>
bool Array<T>::pop(T &item)
{
  for (int i = 0; i < numElements; i++) {
    if (*sortArr[i] == item) {
      delete sortArr[i];
      for(int j = i; j < numElements - 1; j++)
        *sortArr[j] = *sortArr[j + 1];
      numElements--;
     
      return true;
    }
  }
    return false;
}

template <class T>
void Array<T>::update(T &wrongInfo, T &updateInfo)
{
  for (int i = 0; i < numElements; i++) {
    if (*sortArr[i] == wrongInfo) {
      *sortArr[i] = updateInfo;
    }
  }
}

template <class T>
bool Array<T>::empty()
{
  for (int i = 0; i < size; i++) {
    sortArr[i] = NULL;
  }
  
  numElements = 0;
  lastIndex = -1;
  size = 2;
  delete[] *sortArr;
  return true;
}

template <class T>
bool Array<T>::isEmpty()
{
  if (numElements == 0) {
    return true;
  }
  else
    return false;
}

template <class T>
void Array<T>::doubleArray()
{
  T **temp = new T*[size * 2];
  for (int i = 0; i < size; i++) {
    temp[i] = sortArr[i];
  }
  delete[] sortArr;
  sortArr = temp;
  size *= 2;
}

template <class T>
void Array<T>::display()
{
  for (int i = 0; i < numElements; i++) {
    cout << *sortArr[i] << endl;
    //cout << sortArr[i] << endl;
  }
  cout << endl;
}

template <class T>
void Array<T>::sortByBrand()
{
  for (int i = 0; i < numElements-1; i++){
    for (int j = i + 1; j < numElements; j++){
      if(sortArr[i]->brandName > sortArr[j]->brandName)
        swap(sortArr[i], sortArr[j]);
    }
  }
  display();
}

template <class T>
void Array<T>::sortByRating()
{
  for (int i = 0; i < numElements - 1; i++){
    for (int j = i + 1; j < numElements; j++){
      if (sortArr[i]->rating < sortArr[j]->rating)
        swap(sortArr[i], sortArr[j]);
    }
  }
  display();
}

template <class T>
void Array<T>::sortByExpiration()
{
  for (int i = 0; i < numElements - 1; i++){
    for (int j = i + 1; j < numElements; j++){
      if (sortArr[i]->expired < sortArr[j]->expired)
        swap(sortArr[i], sortArr[j]);
    }
  }
  display();
}

template <class T>
Array<T>::~Array()
{
  empty();
}

