#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
int CP::stack<T>::compare_reserve(const CP::stack<T> &other) const {
    //write your code here
    int reserve1 = mCap-mSize;
    int reserve2 = other.mCap - other.mSize;
    if (reserve1<reserve2){
        return -1;
    }
    else if (reserve1==reserve2){
        return 0;
    }
    else {
        return 1;
    }
}

#endif
