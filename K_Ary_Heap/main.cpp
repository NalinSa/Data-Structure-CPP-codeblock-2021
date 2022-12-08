#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long int n;
    int k;
    cin>> n >> k;
    long long int x = 1;
    long long int time = 0;
    if(k == 1){ cout<< n-1;}
    else{
    while((n-x)>0){
        n -= x;
        time++;
        x = pow(k,time);
    }
    cout<< time;
    }
}
