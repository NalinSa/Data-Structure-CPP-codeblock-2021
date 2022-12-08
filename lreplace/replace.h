void replace(const T& x, list<T>& y) {
  //write your code here
  iterator it = begin();
  while(it!=end()){
    iterator it_Next = it.ptr->next;

    if(*it==x){
        if(y.mSize>0){
        list<T> ls = y;
        iterator beginy = ls.begin();
        iterator lasty = ls.end().ptr->prev;
        it.ptr->prev->next = beginy.ptr;
        it.ptr->next->prev = lasty.ptr;
        beginy.ptr->prev = it.ptr->prev;
        lasty.ptr->next = it.ptr->next;
        delete it.ptr;
        mSize += (ls.mSize-1);
        ls.mSize = 0;
        }
        else{
            erase(it);
        }
    }
    it = it_Next;
  }

}
