#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    //pos--;
    T element = mData[(mFront + pos) % mCap];
    for (int i = mFront + pos;i< mFront+mSize-1;i++){
        //std::cout << mData[i] << " " <<mData[(i + 1) % mCap]<< std::endl;
        mData[i%mCap] = mData[(i + 1) % mCap];
    }
    //std::cout << element;
    mData[(mFront-1)%mCap] = element;
    mFront = (mFront-1)%mCap;
  //write your code here
}

#endif
