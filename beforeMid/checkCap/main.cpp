#include <iostream>

using namespace std;

int main()
{
    int n;
    int mcap=1;
    cin >> n;
    while (n>mcap){
        mcap *= 2;
    }
    cout << mcap-n << endl;
    return 0;
}
