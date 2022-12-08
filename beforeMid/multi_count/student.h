#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
std::vector<std::pair<T,size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code here
    std::map<T,int> mapp;
    for(int i = 0;i != mSize; i++){
        mapp[mData[(mFront+i)%mCap]]++;
    }
    std::vector<std::pair<T,size_t>> vec;
    for (auto &x : k){
        vec.push_back({x,mapp[x]});
    }
    return vec;
}

#endif
