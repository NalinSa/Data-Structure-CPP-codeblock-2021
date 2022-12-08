#include "stack.h"
#include "queue.h"

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        T* newData = new T[s.mSize+mSize];
        int coun = 0;
        for(int i = 0;i!=s.mSize;i++){
            newData[coun] = s.mData[i];
            coun++;
        }
        for(int i = 0;i!=mSize;i++){
            newData[coun] = mData[i];
            coun++;
        }
        delete [] mData;
        mData = newData;
        mSize += s.mSize;
        mCap = mSize;
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        T* newData = new T[q.mSize+mSize];
        int coun = 0;
        for(int i = q.mSize-1;i >= 0;i--){
            newData[coun] = q.mData[i];
            coun++;
        }
        for(int i = 0;i!=mSize;i++){
            newData[coun] = mData[i];
            coun++;
        }
        delete [] mData;
        mData = newData;
        mSize += q.mSize;
        mCap = mSize;
    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {
        while(!s.empty()){
            push(s.top());
            s.pop();
        }
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
        while(!q.empty()){
            push(q.front());
            q.pop();
        }
    }
}
