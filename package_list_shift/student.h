#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::shift_left() {
  // your code here
  if(mSize>1){
    iterator header = iterator(mHeader);
    iterator first = header.ptr->next;
    first.ptr->next->prev = first.ptr->prev;
    first.ptr->prev->next = first.ptr->next;
    first.ptr->next = header.ptr;
    first.ptr->prev = header.ptr->prev;
    header.ptr->prev->next = first.ptr;
    header.ptr->prev = first.ptr;
  }
}

#endif
