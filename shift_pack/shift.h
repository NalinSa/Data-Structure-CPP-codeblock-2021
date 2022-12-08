void shift(int k) {
	// TODO: Add your code here


	//std::cout<< k;
	if(k>0){
        k = k%mSize;
        if(k>0){
        iterator it = begin();
        while(k--){
            it++;
        }
        iterator bf_it = it.ptr->prev;
        end().ptr->next->prev = end().ptr->prev;
        end().ptr->prev->next = end().ptr->next;
        end().ptr->prev = bf_it.ptr;
        end().ptr->next = it.ptr;
        it.ptr->prev = end().ptr;
        bf_it.ptr->next = end().ptr;
        }
	}
	else if(k<0){
        k = (k*-1)%mSize;
        if(k>0){
        iterator it = end();
        while(k--){
            it--;
        }
        iterator bf_it = it.ptr->prev;
        end().ptr->next->prev = end().ptr->prev;
        end().ptr->prev->next = end().ptr->next;
        end().ptr->prev = bf_it.ptr;
        end().ptr->next = it.ptr;
        it.ptr->prev = end().ptr;
        bf_it.ptr->next = end().ptr;
        }
	}


}
