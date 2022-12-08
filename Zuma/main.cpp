#include <iostream>
#include <list>
using namespace std;

int main()
{
    int n,idx,num,x;
    list<int> ls;
    cin>>n>>idx>>num;
    while(n--){
        cin>>x;
        ls.push_back(x);
    }
    auto it = ls.begin();
    while(idx--){
        it++;
    }
    auto tmp = it;
    auto forbegin = ls.end();
    int coun = 0;
    while(--it!=ls.end()&&*it==num){
        forbegin = it;
        coun++;
    }
    it = tmp;
    auto forend = ls.end();
    it--;
    while(++it!=ls.end()&&*it==num){
        forend = it;
        coun++;
    }
    auto forprev = ls.end();
    auto fornext = ls.end();
    if(coun>1){
            //cout << "yes";
        if(forbegin!=ls.end()&&forend!=ls.end()){
            it = forbegin;
            fornext = ++forend;
            forprev = --forbegin;
            while(it!=forend){
            ls.erase(it++);
            }
        }
        else if(forbegin!=ls.end()){
            it = forbegin;
            forprev = --forbegin;
            while(it!=tmp){
                ls.erase(it++);
            }
            fornext = tmp;
        }
        else {
            it = tmp;
            forprev = --tmp;
            forend++;
            while(it!=forend){
                ls.erase(it++);
            }
            fornext = forend;
        }
    }
    else{
        ls.insert(tmp,num);
    }
    //cout<< *fornext<<" "<<*forprev;
    while(fornext!=ls.end()&&forprev!=ls.end()&&*fornext==*forprev){
        num = *fornext;
        it = fornext;
        tmp = it;
    forbegin = ls.end();
    coun = 0;
    while(--it!=ls.end()&&*it==num){
        forbegin = it;
        coun++;
    }
    it = tmp;
    forend = ls.end();
    it--;
    while(++it!=ls.end()&&*it==num){
        forend = it;
        coun++;
    }
    forprev = ls.end();
    fornext = ls.end();
    if(coun>2){
            //cout << "yes";
        if(forbegin!=ls.end()&&forend!=ls.end()){
            it = forbegin;
            fornext = ++forend;
            forprev = --forbegin;
            while(it!=forend){
            ls.erase(it++);
            }
        }
        else if(forbegin!=ls.end()){
            it = forbegin;
            forprev = --forbegin;
            while(it!=tmp){
                ls.erase(it++);
            }
            fornext = tmp;
        }
        else {
            it = tmp;
            forprev = --tmp;
            forend++;
            while(it!=forend){
                ls.erase(it++);
            }
            fornext = forend;
        }
    }
    else{
        break;
    }

    }
    it = ls.begin();
    while(it!=ls.end()){
        cout<< *it<< " ";
        it++;
    }
}
