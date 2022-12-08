#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__
#include<map>
#include<set>
// Your code here

using namespace std;

class SparseGraph{
public:
    SparseGraph() {
        // Your code here
        int n = 3;
        while(n--){
            maptree[n-1];
        }
    }

    SparseGraph(int n_in) {
        // Your code here
        while(n_in--){
            maptree[n_in-1];
        }
    }

    SparseGraph(const SparseGraph& G) {
        // Your code here
        for(auto x:G.maptree){
            maptree[x.first] = x.second;
        }

    }

    void AddEdge(int a, int b) {
        // Your code here
        maptree[a].insert(b);
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        if(maptree.find(a)!=maptree.end()){
            auto findd = maptree.find(a);
            if((findd->second).find(b)!=(findd->second).end()){
                (findd->second).erase(b);
            }
        }
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
         if(maptree.find(a)!=maptree.end()){
            auto findd = maptree.find(a);
            if((findd->second).find(b)!=(findd->second).end()){
                    return true;
            }
         }
         return false;

    }

    SparseGraph Transpose() const {
        // Your code here
        SparseGraph mapnew;
        for(auto x:maptree){
            for(auto y:x.second){
                mapnew.maptree[y].insert(x.first);
            }
        }
        return mapnew;
    }

protected:
    map<int,set<int>> maptree;

    // Your code here
};
#endif // __SPARSE_GRAPH_H__

