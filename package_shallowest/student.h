#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

//you can use this function
template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT,MappedT,CompareT>::shallowest_leaf(node* n) {
    if(n->right==NULL&&n->left==NULL){
        return 0;
    }
    if(n->right!=NULL&&n->left!=NULL){
        return 1+std::min(shallowest_leaf(n->right),shallowest_leaf(n->left));
    }
    if(n->right!=NULL){
        return 1+shallowest_leaf(n->right);
    }
     if(n->left!=NULL){
        return 1+shallowest_leaf(n->left);
    }

}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT,MappedT,CompareT>::shallowest_leaf() {
  //write your code here
  if(mSize==0){
    return -1;
  }
  else{
    return shallowest_leaf(mRoot);
  }
}


#endif
