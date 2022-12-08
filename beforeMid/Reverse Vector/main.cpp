#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v,vector<int>::iterator a,vector<int>::iterator b) {
    vector<int> vec;
    for (int i=a-v.begin();i<b-v.begin();i++){
        vec.push_back(v[i]);
    }
    v.erase(a,b);
    for (int j = 0; j<vec.size();j++){
        v.insert(a,vec[j]);
    }
}

int main()
{
    vector<int> v ={ 10, 20, 30, 40, 50, 60};
    reverse(v,v.begin()+1,v.begin()+5);
    return 0;
}
