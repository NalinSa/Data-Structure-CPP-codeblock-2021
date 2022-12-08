#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
  std::vector<T> res;
  //write your code only here
  //
  if (k>mSize) k = mSize;
  for (int i =0;i!= k;i++){
    res.push_back(mData[(mFront+i)%mCap]);
  }
  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from,iterator to) {
  //write your code only here
  int coun = 0;
  mData = new T[to-from];
  for(auto it = from; it!=to; it++){
    mData[coun] = *it;
    coun++;
  }
  mCap = to-from;
  mSize = mCap;
  mFront = 0;
}

#endif
