#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    int n,a;
    cin >> n >>a;
    int idx = 0;
    vec.push_back(a);
    int c;
    while((c=2*vec[idx]+1)<n){
        vec.push_back(c);
        if(c+1<n) vec.push_back(c+1);
        idx++;
    }
    cout<< vec.size() << endl;
    for(auto &x:vec){
        cout<< x << " ";
    }
    return 0;
}
