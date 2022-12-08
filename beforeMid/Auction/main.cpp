#include <bits/stdc++.h>

using namespace std;
class Person {
public:

    Person(int& v, int& u){
        user = u;
        value = v;
    }
    int user,value;
    bool operator<(const Person& other) const{
        if (this->value == other.value){
            return this->user < other.user;
        }
        else{ return this->value < other.value;

        }
    }
};
int main()
{
    int n,m,u,a,i,v,item;
    string b;
    cin >> n >> m >> a;
    vector<int> amount_Item(n);
    for (int j = 0; j<n ; j++){
        cin >> item;
        amount_Item[j] = item;
    }
    map<int,set<Person>> allBidding;
    bool t = true;
    for (int j = 0; j<a; j++){
        cin >> b;
        if (b=="B"){
            cin >> u >> i >> v;
            Person A(v,u);
            for (auto& it : allBidding[i]){
                if (it.user == u) {
                    t = false;
                    (*it).value = v;
                    break;
                }
            }
            if(t) allBidding[i].insert(A);
        }
        else{
            cin >> u >> i;
            for (auto& it : allBidding[i]){
                if (it.user == u) {
                    allBidding[i].erase(it);
                    break;
                }
            }
        }
    }
    map<int,set<int>> eachUser;
    for (int j = 0; j<n ; j++){
        set<Person> whoBuy = allBidding[j+1];
        if (whoBuy.size() < amount_Item[j]){
            for (auto itt = whoBuy.begin(); itt != whoBuy.end();itt++){
                eachUser[(*itt).user].insert(j+1);
            }
        }
        else{
            auto itt = whoBuy.end();
            itt--;
            for (int co = 0; co < amount_Item[j]; co++){
                eachUser[(*itt).user].insert(j+1);
                itt--;
            }
        }
    }
    for (auto j = 0; j<m; j++){
        auto it = eachUser[j+1];
        if (it.empty()){
            cout << "NONE" << "\n";
        }
        else {
            for (auto itt =  it.begin();itt!= it.end();itt++){
                cout << *itt << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
