#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  //write your code here

    CP::vector<int> vec(mSize+data.size());
    for (int i = 0; i!= data.size();i++){
        vec[data[i].first] = data[i].second;
    }
    int countVec = 0;
    for (int i = 0;i!= vec.size();i++){
        if(vec[i]!=0){
            insert_by_pos(i+countVec,vec[i]);
            countVec++;
        }
    }
}

#endif
