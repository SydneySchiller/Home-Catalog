//Programmer:Sydney Schiller
//ID: 1466911

#pragma once
#include <string>
using std::string;

template <class T>
class Array
{
public:
  Array();
  bool push(T &item);
  bool pop(T &item);
  void update(T &wrongInfo, T &updateInfo);
  bool isEmpty();
  bool empty();
  void display();
  // various sort functions
  void sortByBrand();
  void sortByRating();
  void sortByExpiration();
  ~Array();
 
private:
  T **sortArr; //array of pointers
  int lastIndex;
  int size;
  int numElements; // how many elements are currently in the array
  void doubleArray();
};

#include "Array.cpp"