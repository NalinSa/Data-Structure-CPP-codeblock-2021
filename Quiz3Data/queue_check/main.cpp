#include <iostream>

using namespace std;
int test4(int mFront,int mSize,int mCap,int last){
    if(last!=(mFront+mSize)%mCap){
                return (mFront+mSize)%mCap;
            }
    else{
                return -1;
            }
}
int test3(int mFront,int mSize,int mCap,int last){
                if(last>=mFront){
                    if(mCap<=last){
                        return last+1;
                    }
                    else{
                        return -1;
                    }
                }
                else{
                    if(mCap!=mSize-last+mFront){
                       return mSize-last+mFront;
                    }
                    else{
                       return -1;
                    }
                }
}
int test2(int mFront,int mSize,int mCap,int last){
if(last>=mFront){
                if(mSize!=last-mFront){
                    return last-mFront;
                }
                else{
                   return -1;
                }
            }
            else{
                if(mSize!=mCap-mFront+last){
                    return mCap-mFront+last;
                }
                else{
                    return -1;
                }
            }
}
int test1(int mFront,int mSize,int mCap,int last){
            if(mFront!=(last-mSize)%mCap){
                return (last-mSize)%mCap;
            }
            else{
                return -1;
            }
}
int main()
{
    int n, mFront, mSize, mCap, last, correction;
    cin >> n;
    while(n--){
        cin >> mFront>> mSize>> mCap>> last>> correction;
        if(correction==4){
            int t = test4(mFront, mSize,mCap,last);
            if(t!=-1){
                cout<< "WRONG " << t<<endl;
            }
            else{
                cout<< "OK"<< endl;
            }
        }
        else if(correction==3){
                int t = test3(mFront, mSize,mCap,last);
            if(t!=-1){
                cout<< "WRONG " << t <<endl;
            }
            else{
                cout<< "OK"<< endl;
            }
        }
        else if(correction==2){
                int t = test2(mFront, mSize,mCap,last);
            if(t!=-1){
                cout<< "WRONG " << t <<endl;
            }
            else{
                cout<< "OK"<< endl;
            }
        }
        else if(correction==1){
int t = test1(mFront, mSize,mCap,last);
            if(t!=-1){
                cout<< "WRONG " << t <<endl;
            }
            else{
                cout<< "OK"<< endl;
            }
        }
        else{
              int t1 = test1(mFront, mSize,mCap,last);
        int t2 = test2(mFront, mSize,mCap,last);
        int t3 = test3(mFront, mSize,mCap,last);
        int t4 = test4(mFront, mSize,mCap,last);
        if(t1==-1&&t2==-1&&t3==-1&&t4==-1){
            cout << "OK"<< endl;
        }
        else{
            cout<< "WRONG"<<t1<<t2<<t3<<t4<< endl;
        }
        }
    }

}
