
#include <iostream>
#include <set>
#include <algorithm>
#include <map>
using namespace std;

int main(){
    map<int,int> v1;
    v1[1] = 1;
    v1[2] = 2;

    for(auto&[mapp,val] :v1){
    cout << mapp <<  " "<< val << endl;}
    cout << 3.0/2 ;
    return 0;
}
