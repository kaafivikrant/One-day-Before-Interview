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

void ShortestPathUndirectedUnitWeight(int nodes,vector<int> x[], int source){
    int dist[nodes];

    for(int i=0;i<nodes;i++){
        dist[i] = INT16_MAX;
    }

    queue<int> q;
    dist[source] = 0;
    q.push(source);

    while(!q.empty()){
        int node = q.front();
        q.pop();

        for(auto it: x[node]){
            if(dist[node]+1 < dist[it]){
                dist[it] = dist[node] + 1;
                q.push(it);
            }
        }
    }

    for(int i=0; i <nodes; i++){
        cout<<i<<" "<<dist[i]<<endl;
    }
}

int main(){

    int nodes , edges;
    cin>>nodes >>edges;

    vector<int> x[nodes + 1];

    for(int i=0;i<edges ; i++){
        int u, v;
        cin>>u >>v;
        x[u].push_back(v);
    }

    ShortestPathUndirectedUnitWeight(nodes, x, 0);


    return 0;
}