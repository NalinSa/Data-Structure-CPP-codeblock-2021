#include <iostream>
#include <vector>
using namespace std;
void vector_swap(vector<int> &v1,vector<int> &v2,
 int start1, int end1,
 int start2, int end2) {
     vector<int> copv1,copv2;
     for (int i = start1;i<end1;i++){
        copv1.push_back(v1[i]);
     }
     v1.erase(v1.begin()+start1,v1.begin()+end1);
     for (int i = start2;i<end2;i++){
        copv2.push_back(v2[i]);
     }
     v2.erase(v2.begin()+start2,v2.begin()+end2);
     v1.insert(v1.begin()+start1,copv2.begin(),copv2.end());
     v2.insert(v2.begin()+start2,copv1.begin(),copv1.end());
}
/*int main()
{
    vector<int> v1 = {0, 1, 2, 3, 4};
    vector<int> v2 = {50, 51, 52, 53, 54};
    int s1,e1,s2,e2;
    cin >> s1>>e1>>s2>>e2;
    vector_swap(v1, v2, s1, e1, s2, e2);
    for (int i = 0;i<v1.size();i++){
        cout << v1[i] << " ";
    }
    cout << "Hey" << endl;
    for (int i = 0;i<v2.size();i++){
        cout << v2[i] << " ";
    }
}*/
int main() {
 //read input
 int n,c;
 vector<int>v1,v2;
 cin >> n; //number of v1
 for (int i = 0;i < n;i++) {
 cin >> c;
 v1.push_back(c);
 }
 cin >> n; //number of v2
 for (int i = 0;i < n;i++) {
cin >> c;
 v2.push_back(c);
 }
 int s1,e1,s2,e2; //position
 cin >> s1 >> e1 >> s2 >> e2;
 //call the function
 vector_swap(v1,v2,s1,e1,s2,e2);
 //display content of the stack
 cout << "v1 has " << v1.size() << endl;
 for (auto &x : v1) { cout << x << " "; }
 cout << endl;
 //display content of the stack
 cout << "v2 has " << v2.size() << endl;
 for (auto &x : v2) { cout << x << " "; }
 cout << endl;
}
