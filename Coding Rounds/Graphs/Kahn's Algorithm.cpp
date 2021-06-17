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

void TopoSortBFS(int nodes,vector<int> x[]){

    queue<int> q;
    vector<int> indegree(nodes, 0);

    for(int i=0; i< nodes; i++){
        for(auto it: x[i]){
            indegree[it]++;
        }
    }

    for(int i=0; i< nodes;i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }

    vector<int> topo;

    while(!q.empty()){
        int node = q.front();
        q.pop();

        topo.push_back(node);
        for(auto it: x[node]){
            indegree[it]--;
            if(indegree[it] == 0){
                q.push(it);
            }
        }
    }

    for(auto itr : topo){
        cout<<itr<<" ";
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

    TopoSortBFS(nodes, x);

    return 0;
}