#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  //write your code here
  //can include anything
  if(k==1){
    return mData[0];
  }
  if(k==2){
    if(mLess(mData[1],mData[2])){
        return mData[2];
    }
    return mData[1];
  }
  if(mLess(mData[1],mData[2])){
    int c = 1;
    if(mLess(mData[c],mData[5])) c = 5;
    if(mLess(mData[c],mData[6])) c = 6;
    return mData[c];
  }
  int c = 2;
    if(mLess(mData[c],mData[3])) c = 3;
    if(mLess(mData[c],mData[4])) c = 4;
    return mData[c];
}

#endif
