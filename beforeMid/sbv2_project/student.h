#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"
#include <iostream>

template <typename T>
size_t CP::stack<T>::size() const {
    return v.size();
  //write your code here
}

template <typename T>
const T& CP::stack<T>::top() const {
    return v.back();
  //write your code here
}

template <typename T>
void CP::stack<T>::push(const T& element) {
  //write your code here
  v.push_back(element);
}

template <typename T>
void CP::stack<T>::pop() {
  //write your code here
  v.pop_back();
}

template <typename T>
void CP::stack<T>::deep_push(const T& element, int depth) {
  //write your code here
  depth = v.size()-depth;
  if (depth<0){
    depth = 0;
  }
  v.insert(v.begin()+depth,element);
}

template <typename T>
void CP::stack<T>::multi_push(const std::vector<T> &w) {
  //write your code here
  for (int i = 0;i!= w.size();i++){
    v.push_back(w[i]);
  }
}

template <typename T>
void CP::stack<T>::pop_until(const T& e) {
  //write your code here
  for(int i = v.size()-1; i >= 0; i--){
    if (v[i]!=e){v.pop_back();}
    else {
        break;
    }
  }
}

#endif

