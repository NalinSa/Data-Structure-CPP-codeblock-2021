#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {
    if(this->mSize!=other.mSize){
        return false;
    }
    CP::priority_queue<T,Comp> pri1 = other;
    CP::priority_queue<T,Comp> pri2;
    delete [] pri2.mData;
    pri2.mData = new T[mCap]();
    for (size_t i = 0; i < mCap;i++) {
        pri2.mData[i] = mData[i];
    }
    pri2.mCap = mCap;
    pri2.mSize = mSize;
    pri2.mLess = mLess ;
    while(!pri1.empty()){
        if(pri1.top()!=pri2.top()){
            return false;
        }
        pri1.pop();
        pri2.pop();
    }
    return true;

}

#endif
