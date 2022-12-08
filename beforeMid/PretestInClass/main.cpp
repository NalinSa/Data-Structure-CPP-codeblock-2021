#include <bits/stdc++.h>
using namespace std;
class cc{
    public:
map<string,map<string,int>> mapOverall;
map<string,map<int,set<string>>> timeOut;
int get_time(){
    int n = 15;
    return n;
}
void check_in(string building, string name) {
    int timeIn = get_time();
    timeOut[building][timeIn].insert(name);
    auto findMap = mapOverall[building].find(name);
    if (findMap!=mapOverall[building].end()){
        int Oldtime = mapOverall[building][name];
        timeOut[building][Oldtime].erase(name);
    }
    mapOverall[building][name] = timeIn;
}

void check_out(string building, string name){
    auto findMap = mapOverall[building].find(name);
    if (findMap!=mapOverall[building].end()){
        int time = mapOverall[building][name];
        timeOut[building][time].erase(name);
        mapOverall[building].erase(name);
    }
}

int how_many(string building){
    /*map<int,set<string>> mapTime = timeOut[building];*/
    int compare = get_time()-7200;
    auto itLow = timeOut[building].lower_bound(compare);
    if (itLow != timeOut[building].end()){
        for(auto it = timeOut[building].begin();it!=itLow;it++){
            for(auto& x: it->second){
                    mapOverall[building].erase(x);
            }
        }
        timeOut[building].erase(timeOut[building].begin(),itLow);
    }
    return mapOverall[building].size();
}
};
int main(){
    cc b;
    b.check_in("Std", "sa");
    b.check_out("std","sa");
    b.how_many("std");
}
