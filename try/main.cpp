#include <iostream>

using namespace std;

int main()
{
    for(int i =  0;i<Ls.size();i++){

    if(Ls[i].mSize>0){

        iterator beginl = Ls[i].begin();

        iterator last = Ls[i].end().ptr->prev;

        beginl.ptr->prev = end().ptr->prev;

        last.ptr->next = end().ptr;

        beginl.ptr->prev->next = beginl.ptr;

        last.ptr->next->prev = last.ptr;

        mSize += Ls[i].mSize;

        Ls[i].mSize = 0;

    }

}
    return 0;
}
