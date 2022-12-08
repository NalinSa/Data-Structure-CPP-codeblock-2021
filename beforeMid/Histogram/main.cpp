#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string, int> mapp;
    int n;
    cin >> n;
    string name;
    for (int i = 0; i<n ;i++){
        cin >> name;
        mapp[name]++;
    }
    for (auto& it:mapp){
        if (it.second>1){
            cout << it.first << " " << it.second << endl;
        }
    }
    return 0;
}
