#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror() {
  T *mDataNew = new T[this->mSize*2]();
  //write your code here
      for (size_t i = 0;i < mSize;i++) {
        mDataNew[i] = mData[i];
        mDataNew[mSize+i] = mData[mSize-1-i];
      }
      delete [] mData;
      mData = mDataNew;
      mCap = mSize*2;
      mSize = mSize*2;
}

#endif
