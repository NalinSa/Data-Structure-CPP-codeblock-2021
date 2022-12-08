#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
void list_erase(vector<int> &v, vector<int> &pos) {
    vector<bool> mark(v.size(),false);
    vector<int> cop;
    for (auto it = pos.begin();it!=pos.end();it++){
        mark[*it] = true;
    }
    for (unsigned int i =0;i<v.size();i++){
        if (!mark[i]) cop.push_back(v[i]);
    }
    v = cop;
 //write your code here
}
int main() {
 std::ios_base::sync_with_stdio(false);
 cin.tie(0);
 int n,m;
 cin >> n >> m;
 vector<int> v(n), pos(m);
 for (int i = 0;i < n;i++) cin >> v[i];
 for (int i = 0;i < m;i++) cin >> pos[i];
 list_erase(v,pos);
 cout << "After call list_erase" << endl << "Size = " << v.size() << endl;
 for (auto &x : v) cout << x << " ";
 cout << endl;
}
