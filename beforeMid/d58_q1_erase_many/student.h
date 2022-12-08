#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
    CP::vector<bool> B(mSize);
    for (int i=0; i!=pos.size(); i++){
        B[pos[i]] = true;
    }
    int coun = 0;
    for (int i=0; i!= mSize; i++){
        if(!B[i]){
            mData[coun] = mData[i];
            coun++;
        }
        //std::cout << B[i] << " ";

    }
    mSize = mSize-pos.size();
  //write your code here
}

#endif
