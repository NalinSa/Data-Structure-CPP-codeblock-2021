#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls) {
  //write your code here
  for(auto it = ls.begin();it!=ls.end();it++){
    if((*it).mSize!=0){
        mSize+=(*it).mSize;
        mHeader->prev->next = (*it).mHeader->next;
        (*it).mHeader->next->prev = mHeader->prev;
        mHeader->prev = (*it).mHeader->prev;
        (*it).mHeader->prev->next = mHeader;
        (*it).mHeader->next = (*it).mHeader;
        (*it).mHeader->prev = (*it).mHeader;
        (*it).mSize = 0;

    }
  }

}

#endif
