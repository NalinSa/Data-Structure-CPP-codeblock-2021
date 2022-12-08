#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v,int a,int b) {
	vector<int> copyy;
	copyy.assign(v.begin(), v.end());
	for (int i = a;i<=b;i++){
		v.insert(v.begin()+a,copyy[i]);
	}
	v.erase(v.begin()+b+1,v.begin()+2*b+2-a);
}

int main(){
    vector<int> ve = {10, 20, 30, 40, 50, 60};
    reverse(ve, 1,4);

}
