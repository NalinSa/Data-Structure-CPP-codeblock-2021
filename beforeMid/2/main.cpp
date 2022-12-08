#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    cin >> x >>y>>z;
    int m[x][y];
    for (int i = 0;i<x;i++){
        for (int j=0;j<y;j++){
            int num;
            cin >> num;
            m[i][j] = num;
        }
    }
    for (int k =0;k<z;k++){
        int a,b,c,d;
        cin >> a>>b>>c>>d;
        if (c<a || d<b){
            cout<< "INVALID"<<"\n";
        }
        else if (a>x||b>y){
            cout<< "OUTSIDE"<<"\n";
        }
        else {
            int maxx = m[a-1][b-1];
            for (int i = a-1;i<c;i++){
                for (int j=b-1;j<d;j++){
                    if (i<=x-1&&j<=y-1&&m[i][j]>maxx){maxx = m[i][j];}
                }
            }
            cout << maxx<<"\n";
        }
    }
    return 0;
}
