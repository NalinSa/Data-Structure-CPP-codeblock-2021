#include <bits/stdc++.h>

using namespace std;

int main()
{
    auto compare = [](const pair<int,int>& lhs, const pair<int,int>& rhs){
        return lhs>=rhs;
    };
    int N,M,time;
    cin >> N >> M;
    vector<int> timeCus(M,0);
    priority_queue<pair<int,int>,vector<pair<int,int>>,decltype(compare)> pq(compare);
    if (M<=5000){
    for (int i = 0; i< N; i++){
        cin >> time;
        pq.push({time,time});
    }
    for (int i = N; i<M; i++){
        timeCus[i] = pq.top().first;
        int pa = pq.top().first+pq.top().second;
        int pb = pq.top().second;
        pq.push({pa,pb});
        pq.pop();
    }
    for (auto &v:timeCus){
        cout << v << endl;
    }
    }
    else{
      for (int i = 0; i< N; i++){
        cin >> time;
        if (time<193){
            pq.push({time,time});
        }
      }
        for (int i = N; i<M; i++){
        timeCus[i] = pq.top().first;
        int pa = pq.top().first+pq.top().second;
        int pb = pq.top().second;
        pq.push({pa,pb});
        pq.pop();
        }
        for (auto &v:timeCus){
            cout << v << endl;
        }
    }
    return 0;
}
