#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
  size_t pos = position-begin();
  size_t sizeAdd = last-first;
  ensureCapacity(mSize+sizeAdd);
  for(size_t i = mSize+sizeAdd-1;i>=pos+sizeAdd;i--){
    mData[i] = mData[i-sizeAdd];
  }
  for (size_t i = pos;i!=pos+sizeAdd;i++,first++){
    mData[i] = *first;
  }
  mSize = mSize+sizeAdd;
  mCap = mSize+sizeAdd;
}

#endif
