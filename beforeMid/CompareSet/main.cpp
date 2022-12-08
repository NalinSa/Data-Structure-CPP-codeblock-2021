#include<bits/stdc++.h>
using namespace std;
class Student {
private:
    string surname;
public:
    string name;
    float gpax;
    Student(float score, string name, string surname){
        setFullname(name, surname);
        this->gpax = score;
    }
    void setFullname(string name, string surname){
        this->name = name;
        this->surname = surname;
    }
    string getName(){
        return this->name;
    }
    bool operator<(const Student & other) const {
        return this->gpax < other.gpax;
    }
};
int main(){
    vector<int> a = {1,2,3};
    vector<int> b = {1,2,3,4};
    vector<int> c = {2,3,4};
    cout << (a < c) << endl;
}
