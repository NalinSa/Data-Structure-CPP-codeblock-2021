// Your code here
int gethigh(node *n){
 if(n->right==NULL&&n->left==NULL){
        return 0;
    }
    if(n->right!=NULL&&n->left!=NULL){
        return 1+std::max(gethigh(n->right),gethigh(n->left));
    }
    if(n->right!=NULL){
        return 1+gethigh(n->right);
    }
     if(n->left!=NULL){
        return 1+gethigh(n->left);
    }

}
void compp(node *ptr,KeyT& key,int& balance){
    int x = -1;
    int y = -1;
     if(ptr->left!=NULL){
        x = gethigh(ptr->left);
     }
     if(ptr->right!=NULL){
        y = gethigh(ptr->right);
     }
     //std::cout<< x<< "Af" << y <<std::endl;
     int compare = (x-y)*(x-y);
     if(compare>balance){
        balance = compare;
        key = ptr->data.first;
     }
     if(compare==balance&&ptr->data.first<key){
        key = ptr->data.first;
     }
     //std::cout<< key <<std::endl;
    if(ptr->left!=NULL){
        compp(ptr->left,key,balance);
     }
     if(ptr->right!=NULL){
        compp(ptr->right,key,balance);
     }
}
KeyT getValueOfMostImbalanceNode() {
    // Your code here
    int balance = -1;
    KeyT key= mRoot->data.first;
    compp(mRoot,key,balance);
    return key;

}
