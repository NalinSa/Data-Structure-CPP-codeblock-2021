void splitList(list<T>& list1, list<T>& list2) {
    // Add your code here
    if(mSize>0){
    int i = (mSize+1)/2;
    list1.mSize += i;
    list2.mSize += mSize-i;
    iterator begin1 = begin();
    iterator last1 = end();
    while(i--){
        last1++;
    }
    if(mSize>1){
    iterator begin2 = last1.ptr->next;
    iterator last2 = end().ptr->prev;
    iterator list2_last = --list2.end();
    begin2.ptr->prev = list2_last.ptr;
    last2.ptr->next = list2.end().ptr;
    list2_last.ptr->next = begin2.ptr;
    list2.end().ptr->prev = last2.ptr;
    }
    //std::cout<< i<< "eee";
    begin1.ptr->prev->next = begin1.ptr->prev;
    //dont forget erase
    iterator list1_last = --list1.end();
    begin1.ptr->prev = list1_last.ptr;
    last1.ptr->next = list1.end().ptr;
    //d f next
    list1_last.ptr->next = begin1.ptr;
    list1.end().ptr->prev = last1.ptr;

    begin().ptr->prev = begin().ptr;
    mSize = 0;
    }
}
