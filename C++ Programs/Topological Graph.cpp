#include <iostream>
#include <vector>
#include <stack>
#include <numeric>
#include <queue>
#include <cmath>
#include <unordered_map>
#include <set>
#include <list>
#include <string>

using namespace std;

class Graph{
    int v;
    list<int> *adj;
    void topolo(int v,bool visited[],stack<int> &st);

public:
    Graph(int v);

    void add_edge(int v,int w);

    void topo();
};

Graph::Graph(int v) {
    this->v=v;
    adj=new list<int>[v];
}

void Graph::add_edge(int v, int w) {
    adj[v].push_back(w);
}

void Graph::topolo(int v, bool *visited, stack<int> &st) {
    visited[v]=true;
    for(auto itr:adj[v]){
        if(!visited[itr]){
            topolo(itr,visited,st);
        }
    }
    st.push(v);
}

void Graph::topo() {
    stack<int> st;
    bool *visited=new bool[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }

    for(int i=0;i<v;i++){
        if(!visited[i]){
            topolo(i,visited,st);
        }
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main(){
    Graph g(8);
    g.add_edge(0,1);
    g.add_edge(1,2);
    g.add_edge(2,3);
    g.add_edge(2,4);
    g.add_edge(3,4);
    g.add_edge(3,6);
    g.add_edge(4,5);
    g.add_edge(6,7);
    g.add_edge(5,7);

    g.topo();

    return 0;
}