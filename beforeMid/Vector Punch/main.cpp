#include <iostream>
#include <vector>
using namespace std;
vector<string> punch(vector<string> &v, vector<string>::iterator
it,int k) {
    vector<string>::iterator itb,itn;
    if (it-k<v.begin()) itb = v.begin();
    else itb = it - k;
    if (it+k+1>v.end()) itn = v.end();
    else itn = it +k +1;
    v.erase(itb,itn);
    return v;

 //don’t forget to return something
}
int main() {
 int n,j,k;
 cin >> n >> j >> k;
 vector<string> v(n);
 for (int i = 0;i < n;i++) {
  cin >> v[i];
 }
 cout << "Result after punch" << endl;
 vector<string> result = punch(v, v.begin() + j, k);
 for (auto &x : result) {
  cout << x << endl;
 }
}
