#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n >>m;
    for (int i = 0;i<m;i++){
        bool t = true;
        int a,b;
        cin >> a >> b;
        if(a==b){
            cout << "a and b are the same node" << endl;
        }
        else if (a>b){
            while(a>b){
                a = (a-1)/2;
                if(a==b){
                    cout << "b is an ancestor of a"<< endl;
                    t = false;
                    break;
                }
            }
            if(t){
                cout << "a and b are not related"<< endl;
            }
        }
        else if (b>a){
            while(b>a){
                b = (b-1)/2;
                if(a==b){
                    cout << "a is an ancestor of b"<< endl;
                    t = false;
                    break;
                }
            }
            if(t){
                cout << "a and b are not related"<< endl;
            }
        }
    }
}
