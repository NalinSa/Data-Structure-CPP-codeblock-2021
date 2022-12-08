#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    unsigned int n,m;
    cin >> n >> m;
    map<int,int> mapp;
    for (int i = 0 ; i<n;i++){
        unsigned long int a , b;
        cin >> a >> b;
        mapp[b] = a;
        }
    for (int i = 0; i<m; i++){
        unsigned long int x;
        cin >> x;
        auto it = mapp.lower_bound(x);
        auto b = it->first;
        auto a = it->second;
        if (it != mapp.end() && x>=a){
            cout << "1 ";
        }
        else {cout << "0 ";}
    }

    return 0;
}
