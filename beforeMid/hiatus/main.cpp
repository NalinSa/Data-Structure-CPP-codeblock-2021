#include <iostream>
#include <set>
using namespace std;
int main(){
  std::ios_base::sync_with_stdio(false); std::cin.tie(0);
  int n,m;
  set<int> mapp;
  cin >> n >> m;
  for (int i =0;i<n;i++){
    string a,b;
    cin >> a >> b;
    if (b.length()==1){
      b = "0"+b;
    }
    string x = a+b;
    int y = -stoi(x);
    mapp.insert(y);
    }
  for (int i=0;i<m;i++){
    string a,b;
    cin >> a >> b;
    if (b.length()==1){
      b = "0"+b;
    }
    string x = a+b;
    int y = -stoi(x);
    auto it = mapp.lower_bound(y);
    if (it == mapp.end()){
      cout << "-1 -1 " ;
    }
    else if (*it == y){
      cout << "0 0 ";
    }
    else{
        string s1 =to_string(-*it);
        string s2 =to_string(-*it);
        s1.erase(s1.length()-2,s1.length());
        s2.erase(0,s2.length()-2);
        cout << s1 << " "<<stoi(s2)<<" ";
    }
  }
}
