#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

//DO NOT INCLUDE ANYTHING


template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {
    CP::stack<T> ss;
    for(auto it = first;it!=last;it++){
        ss.push(*it);
    }
    this->mData = new T[ss.mCap]();
    this->mCap = ss.mCap;
    this->mSize = ss.size();
    for (size_t i = 0;i < ss.size();i++) {
        mData[i] = ss.mData[ss.mSize-1-i];
      }
}

  //write your code ONLY here


#endif
