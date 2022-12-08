#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    unsigned int n,m;
    cin >> n >> m;
    map<unsigned long long int,unsigned long long int> treeGrand;
    for(unsigned int i = 0;i<n;i++){
        unsigned long long int f,s;
        cin >> f >> s;
        treeGrand[s] = f;
    }
   for(unsigned int i = 0;i<m;i++){
        unsigned long long int a,b;
        cin >> a >> b;
        if (a==b){
            cout << "NO" << endl;
        }
        else if (treeGrand.find(a)==treeGrand.end() || treeGrand.find(b)==treeGrand.end()){
            cout << "NO" << endl;
        }
        else{
            auto ita = treeGrand.find(a);
            auto itb = treeGrand.find(b);
            unsigned long long int fatherA = ita->second;
            unsigned long long int fatherB = itb->second;
            if (treeGrand.find(fatherA)==treeGrand.end() || treeGrand.find(fatherB)==treeGrand.end()){
                cout << "NO" << endl;
            }
            else{
                auto itaA = treeGrand.find(fatherA);
                auto itbB = treeGrand.find(fatherB);
                unsigned long long int grandfatherA = itaA->second;
                unsigned long long int grandfatherB = itbB->second;
                if (grandfatherA == grandfatherB){
                    cout << "YES" << endl;
                }
                else {cout << "NO"<<endl;}
            }
        }
   }
}
