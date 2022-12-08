
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> g1;
    vector <int> g2;
    vector <int> g3;

    g1.assign(5, 10);   // 5 elements with value 10 each

    vector <int> :: iterator it;
    it = g1.begin() + 1;
    g2.assign(it, g1.end() - 1); // the 3 middle values of g1
    vector <int> a = {1,3};
    cout << a[0] << endl;
    int gquiz[] = {1, 2};
    cout << gquiz << endl;
    g3.assign(gquiz, gquiz + 2);   // assigning from array
    for (it = g3.begin() ; it < g3.end(); ++it) {
        cout << *it << " ";}
    cout << "Size of g1: " << int(g1.size()) << '\n';
    cout << "Size of g2: " << int(g2.size()) << '\n';
    cout << "Size of g3: " << int(g3.size()) << '\n';
    vector <int> xx(3,5);
    for (int a : xx)
      cout << a << " ";
    cout << "ha" << endl;
    std::vector<int> myvector (3,100);
    std::vector<int>::iterator itr;

    itr = myvector.begin();
    cout << *itr << "\n";
    myvector.insert ( myvector.begin()+1 ,2, 300 );

    cout << myvector[5] << "\n";
    return 0;
}
