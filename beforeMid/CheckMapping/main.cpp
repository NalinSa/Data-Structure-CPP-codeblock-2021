#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,s;
  cin >> n;
  vector<int> vec(n,0);
  string t = "YES";
  for (int i = 0;i< n;i++){
    cin >>s;
    if (s<1 || s>n){
        t = "NO";
        }
    else{
        if (vec[s-1]==0){
            vec[s-1] = 1;
        }
        else {
            t = "NO";
        }
    }
  }
cout << t;
return 0;
}
