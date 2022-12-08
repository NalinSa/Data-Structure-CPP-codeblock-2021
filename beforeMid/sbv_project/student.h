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
    return v[v.size()-1];
  //write your code here
}

template <typename T>
void CP::stack<T>::push(const T& element) {
    return v.push_back(element);
  //write your code here
}

template <typename T>
void CP::stack<T>::pop() {
  //write your code here
  return v.pop_back();
}

#endif
