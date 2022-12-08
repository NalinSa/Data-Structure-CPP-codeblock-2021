#include <iostream>
#include <iomanip>
#include <map>
using namespace std;

int main()
{
    cout << std::fixed << std::setprecision(2);
    int x;
    cin >>x;
    map<int,pair<int,int>> rateSub;
    map<string,pair<int,int>> rateTea;
    for (int i = 0;i<x;i++){
        int numSub,point;
        string teacher;
        cin >> numSub >> teacher>>point;
        if (rateSub.find(numSub)!=rateSub.end()){
            rateSub[numSub].first += point;
        }
        else {rateSub[numSub].first = point;}
        rateSub[numSub].second++;
        if (rateTea.find(teacher)!=rateTea.end()){
            rateTea[teacher].first += point;
        }
        else {rateTea[teacher].first = point;}
        rateTea[teacher].second++;
    }
    for (auto &i:rateSub){
        cout << i.first << " " << (i.second.first+0.0) / i.second.second << endl;
    }
    for (auto &i:rateTea){
        cout << i.first << " " << (i.second.first+0.0) / i.second.second << endl;
    }
    return 0;
}
