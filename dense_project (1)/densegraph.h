#ifndef __DENSE_GRAPH_H__
#define __DENSE_GRAPH_H__
#include<set>

// Your code here
#include <vector>
using namespace std;
class DenseGraph{
public:
    DenseGraph() {
        // Your code here
        node = 3;
    }

    DenseGraph(int n_in) {
        // Your code here
        node = n_in;
    }

    DenseGraph(const DenseGraph& G) {
        // Your code here
        node = G.node;
        edge = G.edge;
    }

    void AddEdge(int a, int b) {
        // Your code here
        edge.insert(make_pair(a,b));
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        edge.erase(make_pair(a,b));

    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        return edge.find(make_pair(a,b))!=edge.end();
    }

    DenseGraph Transpose() const {
        // Your code here
        DenseGraph neww = DenseGraph(node);
        for(auto x:edge){
            neww.edge.insert(make_pair(x.second,x.first));
        }
        return neww;


    }

protected:
    int node;
    set<pair<int,int>> edge;
    // Your code here
};
#endif // __DENSE_GRAPH_H__
