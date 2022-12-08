#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,cardto,compete,cardcom;
    cin >> n >> m;
    map<int,int> to;
    for (int i = 0;i<n;i++){
        cin>>cardto;
        to[cardto]++;
    }
    bool t = false;
    for (int i = 1;i<m+1;i++){
        cin >> compete;
        for (int j = 0;j<compete;j++){
            cin >> cardcom;
            if (!t){
                auto it = to.upper_bound(cardcom);
                if (it != to.end()){
                    to[it->first]--;
                    if (to[it->first]==0){
                        to.erase(it);
                    }
                }
                else {
                    cout << i;
                    t = true;
                    break;
                }
            }
        }
    }
    if(!t){cout<< m+1;}
    return 0;
}
