#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

class Tree{
    class Node{
        public:
            friend class Tree;
            Node() {data = -1; left = NULL; right = NULL;}
            Node(const int x, Node* left, Node* right) : data(x), left(left), right(right) {}

        protected:
            int data;
            Node* left;
            Node* right;
    };
public:

    Tree() {
        mRoot = NULL;
        mSize = 0;
    }

    ~Tree() {
        clear(mRoot);
    }

    void clear(Node*& r) {
        if (!r) return;
        clear(r->left);
        clear(r->right);
        delete r;
    }

    void insert(int x) {
        insertAt(mRoot, x);
    }
    bool isSameBinaryTree(Tree& t) {
        // Insert your code here
        if(mSize!=t.mSize) return false;
        Node *ptr1 = mRoot;
        Node *ptr2 = t.mRoot;
        if(check_alike(ptr1,ptr2)!=0){
            return false;
        }
        return true;

    }
    // You can also put your code here
    int check_alike(Node *ptr1,Node *ptr2){
        if(ptr1==NULL&&ptr2==NULL){
            return 0;
        }
        if(ptr1==NULL||ptr2==NULL){
            return 1;
        }
        if(ptr1->data!=ptr2->data){
            return 1;
        }
        return check_alike(ptr1->left,ptr2->left)+check_alike(ptr1->right,ptr2->right);
    }

protected:
    void insertAt(Node*& r, int x) {
        if (!r) {
           r = new Node(x, NULL, NULL);
           mSize++;
           return;
        }
        if (r->data == x) return; // Do nothing
        if (x < r->data) insertAt(r->left, x); else
        insertAt(r->right, x);
    }
    Node* mRoot;
    int mSize;

};

#endif // TREE_H_INCLUDED
