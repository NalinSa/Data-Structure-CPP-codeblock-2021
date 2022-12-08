#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::height() const {
  if(mSize==0){
    return -1;
  }
  long int x = 1;
  int time = 0;
  while(mSize>=x*2){
    x*= 2;
    time++;
  }
  return time;
}
#endif

