#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,k,x,y;
    cin >> n >> m >> k;
    vector<int> vec;
    for (int i = 0;i<n;i++){
        cin >> x;
        vec.push_back(x);
    }

    sort(vec.begin(),vec.end());

    for (int i =0 ;i<m;i++){
        cin >> y;
        int num;
        auto first = lower_bound(vec.begin(),vec.end(),y-k);
        auto last = upper_bound(vec.begin(),vec.end(),y+k);
        num = last-first;
        cout << num<< " ";
    }
    return 0;
}
