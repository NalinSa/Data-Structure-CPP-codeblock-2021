#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "map_bst.h"

template <typename KeyT,typename MappedT, typename CompareT >
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* n) {
  //write your code here
  if(n==NULL) return 0;
  return 1+process(n->left)+process(n->right);

}

template <typename KeyT,typename MappedT, typename CompareT >
std::pair<KeyT,MappedT> CP::map_bst<KeyT,MappedT,CompareT>::subtree(map_bst<KeyT,MappedT,CompareT> &left, map_bst<KeyT,MappedT,CompareT> &right) {
  //write your code here
  if(mSize==0) return std::pair<KeyT,MappedT>();
  //left.delete_all_nodes(left.mRoot);
  //right.delete_all_nodes(right.mRoot);
  size_t sizele = process(mRoot->left);
  //std::cout<<sizele<<std::endl;
  size_t sizeri = process(mRoot->right);
  //std::cout<<sizeri<<std::endl;
  right.mRoot = mRoot->right;
  left.mRoot= mRoot->left;
  if(mRoot->right!=NULL) mRoot->right->parent = NULL;
  if(mRoot->left!=NULL) mRoot->left->parent = NULL;
  mRoot->right = NULL;
  mRoot->left = NULL;
  mSize = 1;
  right.mSize = sizeri;
  left.mSize = sizele;
  return std::make_pair(mRoot->data.first,mRoot->data.second);
 //mRoot = NULL;
   //mSize = 0;
}

#endif

