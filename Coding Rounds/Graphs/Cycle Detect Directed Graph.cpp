#include <iostream>
#include <utility>
#include <vector>
#include <numeric>
#include <queue>
#include <cmath>
#include <map>
#include <string>
#include <cstring>
#include <algorithm>
#include <fstream>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <list>
#include <stack>
#define ll long long
#define dd double
#include <stack>
#include <chrono>
#include <thread>
#include <iomanip>

using namespace std;

bool checkCycle(int node, vector<int> adj[], int vis[], int dfsVis[]) {
    vis[node] = 1;
    dfsVis[node] = 1;
    for(auto it : adj[node]) {
        if(!vis[it]) {
            if(checkCycle(it, adj, vis, dfsVis)) return true;
        } else if(dfsVis[it]) {
            return true;
        }
    }
    dfsVis[node] = 0;
    return false;
}

bool CycleDetectDirected(vector<int> x[], int nodes){
    int vis[nodes], dfsVis[nodes];
    memset(vis, 0, sizeof vis);
    memset(dfsVis, 0, sizeof dfsVis);

    for(int i = 0;i<nodes;i++) {
        if(!vis[i]) {
            if(checkCycle(i, x, vis, dfsVis)) {
                return true;
            }
        }
    }
    return false;
}

int main(){

    int nodes , edges;
    cin>>nodes >>edges;

    vector<int> x[nodes + 1];

    //Unweighted graph
    for(int i=0;i<edges ; i++){
        int u, v;
        cin>>u >>v;
        // For directed graph
        x[u].push_back(v);
        // Add both for undirected graph
        x[v].push_back(u);
    }

    CycleDetectDirected(x,nodes)?cout<<"Yes":cout<<"No";

    return 0;
}