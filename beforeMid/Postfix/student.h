#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>

using namespace std;

int eval_postfix(vector<pair<int,int> > v) {
  //WRITE YOUR CODE HERE
  //DON"T FORGET TO RETURN THE RESULT
  vector<int> vec;
  for (int i=0;i<v.size();i++){
    if (v[i].first== 1){
        vec.push_back(v[i].second);
    }
    else {
        char token;
        int cal;
        switch(v[i].second){
            case 0: token = '+'; break;
            case 1: token = '-'; break;
            case 2: token = '*'; break;
            case 3: token = '/'; break;

        }
            if (token == '+'){
                cal = vec[vec.size()-2]+vec[vec.size()-1];
            }
            if (token == '-'){
                cal = vec[vec.size()-2]-vec[vec.size()-1];
            }
            if (token == '*'){
                cal = vec[vec.size()-2]*vec[vec.size()-1];
            }
            if (token == '/'){
                cal = vec[vec.size()-2]/vec[vec.size()-1];
            }
            vec.pop_back();
            vec.pop_back();
            vec.push_back(cal);
        }
    }
return vec[0];
}

#endif
