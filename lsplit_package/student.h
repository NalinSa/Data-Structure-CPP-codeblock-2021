#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
CP::list<T> CP::list<T>::split(iterator it,size_t pos) {
  //write your code here
  CP::list<T> result;
    if(it!=end()){
        iterator last = end().ptr->prev;
        it.ptr->prev->next = end().ptr;
        end().ptr->prev = it.ptr->prev;
        it.ptr->prev = result.end().ptr;
        last.ptr->next = result.end().ptr;
        result.end().ptr->next = it.ptr;
        result.end().ptr->prev = last.ptr;
        result.mSize = mSize-pos;
        mSize = pos;
    }
  return result;
}

#endif
