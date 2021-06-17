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

bool bipartiteDfs(int node, vector<int> adj[], int color[]) {
    for(auto it : adj[node]) {
        if(color[it] == -1) {
            color[it] = 1 - color[node];
            if(!bipartiteDfs(it, adj, color)) {
                return false;
            }
        } else if(color[it] == color[node]) return false;
    }
    return true;
}
bool checkBipartite(vector<int> adj[], int n) {
    int color[n];
    memset(color, -1, sizeof color);
    for(int i = 0;i<n;i++) {
        if(color[i] == -1) {
            if(!bipartiteDfs(i, adj, color)) {
                return false;
            }
        }
    }
    return true;
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

    checkBipartite(x,nodes)?cout<<"Yes":cout<<"No";

    return 0;
}