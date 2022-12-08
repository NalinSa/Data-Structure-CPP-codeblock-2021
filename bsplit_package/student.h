#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT >

CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
  //your code here

  CP::map_bst<KeyT,MappedT,CompareT> result;
  if(mSize==0) return result;
  node *parent = NULL;
  node *ptr = mRoot;
  while (ptr != NULL) {
        int cmp = compare(val, ptr->data.first);
        node* temp = cmp < 0 ? ptr->left : ptr->right;
        if (cmp==0||cmp<0) {
            std::cout<< ptr->data.first<< " ";
            if(ptr->left!=NULL){
                ptr->left->parent = ptr->parent;
            }
            child_link(ptr->parent, ptr->data.first) = ptr->left;
            node *connect = NULL;
            result.find_node(ptr->data.first,result.mRoot, connect);
            ptr->parent = connect;
            result.child_link(connect, ptr->data.first) = ptr;
            ptr->left = NULL;
            if(cmp==0) break;
        }
        ptr = temp;
 }
 std::cout<<std::endl;
  return result;
}

#endif
