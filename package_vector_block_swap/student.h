#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here
    if(begin()>a||a>=end()){
    return false;
  }
  if(begin()>b||b>=end()){
    return false;
  }
  if(begin()>a+m-1||a+m-1>=end()){
    return false;
  }
  if(begin()>b+m-1||b+m-1>=end()){
    return false;
  }
    if(m<=0){
    return false;
  }
  if(a>b){
    iterator e = a;
    a = b;
    b = e;
  }
  if(a+m>b){
    return false;
  }
  for(int i = 0;i<m;i++){
    T ne = *(a+i);
    *(a+i) = *(b+i);
    *(b+i) = ne;
  }
  return true;

}

#endif
