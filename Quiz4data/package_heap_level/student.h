#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
std::vector<T> CP::priority_queue<T,Comp>::at_level(size_t k) const {
  //write your code here
  //can include anything
  int num = 2;
  std::vector<T> r;
  if(mSize==0) return r;
  if(mSize==1){
    r.push_back(mData[0]);
  return r;
}
  while(k--){
    num*=2;
  }
  int before = num/2;
  num-=2;
  before-= 1;
  //std::cout<<num<< " "<<before<<std::endl;
  if(num>=mSize){
    return r;
  }
  for(int i = before;i<=num;i++){
    if(i>=mSize){
        break;
    }
    r.push_back(mData[i]);
  }
  std::sort(r.begin(),r.end(),mLess);
  std::vector<T> vec;
  for(int i = r.size()-1;i>=0;i--){
    vec.push_back(r[i]);
  }
  return vec;
}

#endif

