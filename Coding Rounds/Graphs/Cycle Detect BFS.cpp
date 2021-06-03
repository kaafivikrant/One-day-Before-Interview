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

bool checkForCycle(int i, int nodes,vector<int> x[],vector<int> &visited){
    //vector<int> parents(nodes, -1);
    queue<pair<int,int>> q;
    visited[i] = true;
    q.push({i, -1});

    while(!q.empty()){

        int node = q.front().first;
        int parent = q.front().second;
        q.pop();

        for(auto itr: x[node]){
            if(!visited[itr]) {
                visited[itr] = true;
                q.push({itr, node});
            }else if(parent != itr){
                return true;
            }
        }
    }
    return false;
}

bool isCyclic(int nodes, vector<int> x[]){
    vector<int> visited(nodes+1, 0);

    for(int i=1; i<= nodes ; i++){
        if(!visited[i]){
            if(checkForCycle(i, nodes, x, visited)){
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

    isCyclic(nodes, x)?cout<<"Yes":cout<<"No";

    return 0;
}