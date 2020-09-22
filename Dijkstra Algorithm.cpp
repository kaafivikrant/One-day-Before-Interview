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
# define INF 0x3f3f3f3f

using namespace std;

class Graph{
    int V;
    list<pair<int,int>> *adj;

public:
    Graph(int V);
    void addEdge(int u,int v,int w);
    void topo(int s);
};

Graph::Graph(int V) {
    this->V=V;
    adj=new list<pair<int,int>>[V];
}

void Graph::addEdge(int u, int v,int w) {
    adj[u].push_back(make_pair(v,w));
    adj[v].push_back(make_pair(u,w));
}

void Graph::topo(int src) {
    set<pair<int,int>> setds;
    vector<int> dist(V,INF);
    setds.insert(make_pair(0,src));
    dist[src]=0;
    while(!setds.empty()){
        pair<int,int> tmp=*(setds.begin());
        setds.erase(setds.begin());

        int u=tmp.second;
        list< pair<int, int> >::iterator itr;
        for (itr = adj[u].begin(); itr != adj[u].end(); ++itr){
            int v=(*itr).first;
            int weight=(*itr).second;
            if(dist[v]>dist[u]+weight){
                if(dist[v]!=INF){
                    setds.erase(setds.find(make_pair(dist[v],v)));
                }
                dist[v]=dist[u]+weight;
                setds.insert(make_pair(dist[v],v));
            }
        }
    }

    cout<<"->>> Distance from Source";
    for(int i=0;i<V;++i){
        cout<<i<<"    "<<dist[i]<<endl;
    }
}


int main(){
    Graph g(9);
    g.addEdge(0, 1, 4);
    g.addEdge(0, 7, 8);
    g.addEdge(1, 2, 8);
    g.addEdge(1, 7, 11);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 8, 2);
    g.addEdge(2, 5, 4);
    g.addEdge(3, 4, 9);
    g.addEdge(3, 5, 14);
    g.addEdge(4, 5, 10);
    g.addEdge(5, 6, 2);
    g.addEdge(6, 7, 1);
    g.addEdge(6, 8, 6);
    g.addEdge(7, 8, 7);

    g.topo(0);

    return 0;
}