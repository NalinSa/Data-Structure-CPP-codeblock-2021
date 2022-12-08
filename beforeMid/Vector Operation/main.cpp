#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec;
    int n;
    cin >> n;
    for (int i = 0; i<n;i++){
        string st;
        cin >> st;
        if (st == "pb"){
            int x;
            cin >> x;
            vec.push_back(x);
        }
        else if (st == "sa"){
            sort(vec.begin(),vec.end());
        }
        else if (st == "sd"){
            sort(vec.begin(),vec.end(), greater<int>());
        }
        else if (st == "r"){
            vector<int> copyvec;
            for (int j = 0; j<vec.size();j++){
                copyvec.push_back(vec[vec.size()-1-j]);
            }
            vec = copyvec;
        }
        else if (st=="d"){
            int y;
            cin >>y;
            vec.erase(vec.begin()+y);
        }
    }
    for (int i =0;i<vec.size();i++){
        cout << vec[i] << " ";
    }
    return 0;
}
