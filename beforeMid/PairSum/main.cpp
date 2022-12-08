#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n,m;
    cin >> n>>m;
    map<int,int> a;
    for (int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        if (a.find(x)!=a.end()){
            a[x] = 2;
        }
        else{
            a[x] = 1;
        }
    }
    for (int i=0; i<m; i++)
    {
        int y;
        cin >> y;
        bool t = true;
        for (auto j=a.begin();j!=a.end();j++){
            if (y-(j->first) == j->first && a[j->first] == 2){
                cout << "YES" << endl;
                t = false;
                break;
            }
            else if (y-(j->first) != j->first && a.find(y-(j->first))!=a.end()){
                cout << "YES" << endl;
                t = false;
                break;
            }
        } if (t) cout << "NO" << endl;
    }

    return 0;
}
