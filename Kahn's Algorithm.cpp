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

void Graph::topo() {
    vector<int> indr(v,0);

    for(int u=0;u<v;u++){
        for(auto itr:adj[u]){
            indr[itr]++;
        }
    }

    queue<int> q;
    for(int i=0;i<v;i++){
        if(indr[i]==0){
            q.push(i);
        }
    }

    int cnt=0;

    vector<int> toporder;

    while(!q.empty()){

        int u=q.front();
        q.pop();
        toporder.push_back(u);

        for(auto itr:adj[u]){
            if(--indr[itr]==0){
                q.push(itr);
            }
        }
        cnt++;
    }

    if(cnt!=v){
        cout<<"Cycle Found";
        return ;
    }

    for(int i : toporder){
        cout<<i<<" ";
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