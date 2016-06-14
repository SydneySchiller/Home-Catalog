//Programmer:Sydney Schiller
//ID: 1466911

#include "stdafx.h"

template<class T>
Collision<T>::Collision()
{
  current = head = NULL;
}

template<class T>
void Collision<T>::push(T pushItem)
{
  Node<T> *temp = new Node<T>;
  temp->info = pushItem;
  temp->next = head;
  head = temp;
  current = head;
}

template<class T>
bool Collision<T>::pop(T &popItem)
{
	if (head == NULL)
		return false;
	Node<T> *temp = head;
	if (temp->info == popItem){
		popItem = temp->info;
		head = head->next;
		delete temp;
		return true;
	}

	while (temp->next != NULL){
		if (temp->next->info == popItem){
			Node<T> *nextTemp = temp->next;
			popItem = nextTemp->info;
			temp->next = nextTemp->next;
			delete nextTemp;
			return true;
		}
		temp = temp->next;
	}
  cout << "pop false" << endl;
  return false;
}

template<class T>
bool Collision<T>::isEmpty()
{
  if (head != NULL) {
    return false;
  }
  else {
    return true;
  }
}

template <class T>
void Collision<T>::empty()
{
  T temp;
  
  while (head != NULL) {
    if (head != NULL) {
      Node<T> *ptr = head;
      head = head->next;
      temp = ptr->info;
      delete ptr;
    }
    else {
      return;
    }
  }
}

template<class T>
bool Collision<T>::update(T &wrongInfo)
{
  T wrong = wrongInfo;
  if (!pop(wrong))
    return false;
  else
    return true;
}

template<class T>
Node <T>* Collision<T>::getCurrent() const
{
  return current;
}

template<class T>
bool Collision<T>::search(const T &findMe)
{
  Node<T> *temp = head;
 // cout << temp->info << endl;
  while (temp != NULL) {
    if (temp->info == findMe) {
      cout << "-------Found Item-------" << endl;
      cout << temp->info << endl;
      cout << "------------------------" << endl;
      return true;
    }
    temp = temp->next;
  }
  cout << "This item doesn't exist" << endl;
  return false;
}

template<class T>
bool Collision<T>::find(const T &findMe)
{
  Node<T> *temp = head;
  while (temp != NULL) {
    if (temp->info == findMe) {
      return true;
    }
    temp = temp->next;
  }
  cout << "Item doesn't exist" << endl;
  return NULL;
}

template<class T>
void Collision<T>::display()
{
  Node<T> *temp = head;
  if (head == NULL)
    cout << "Empty" << endl;

    while (temp != NULL) {
      cout << temp->info << endl;
      temp = temp->next;
    }
    cout << endl;
}

template<class T>
Collision<T>::~Collision()
{
  empty();
}
