#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b) {
  //write your code here
  if(b==a){
    return a;
  }
  iterator tmp = --b;
  while(b!=a){
        iterator c = b.ptr->prev;
        b.ptr->prev->next = b.ptr->next;
        b.ptr->next->prev = b.ptr->prev;
        b.ptr->prev = a.ptr->prev;
        b.ptr->next = a.ptr;
        a.ptr->prev->next = b.ptr;
        a.ptr->prev = b.ptr;
        b = c;
  }
  return tmp;
}

#endif
