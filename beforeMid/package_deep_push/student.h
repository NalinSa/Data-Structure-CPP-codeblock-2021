#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
  //write your code here
  int truePos = mSize-pos;
  ensureCapacity(mSize+1);
  for(int i = mSize; i>truePos; i--){
    mData[i] = mData[i-1];
  }
  mData[truePos] = value;
  mSize++;
}

#endif
