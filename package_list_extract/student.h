#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
  //write your code here
    while(a!=b){
        if(*a==value){
            iterator c = a.ptr->next;
            a.ptr->prev->next = a.ptr->next;
            a.ptr->next->prev = a.ptr->prev;
            iterator it = output.begin();
            a.ptr->prev = it.ptr->prev;
            a.ptr->next = it.ptr;
            it.ptr->prev->next = a.ptr;
            it.ptr->prev = a.ptr;
            output.mSize++;
            mSize--;
            a = c;
        }
        else{
            a++;
        }
    }
}

#endif
