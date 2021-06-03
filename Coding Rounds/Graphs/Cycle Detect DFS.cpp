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

bool checkForCycle(int node, int parents,vector<int> x[],vector<int> &visited){
    visited[node] = 1;

    for(auto itr: x[node]){
        if(visited[itr] == 0){
            if(checkForCycle(itr, node, x, visited)){
                return true;
            }
        }else if(itr != parents){
            return true;
        }
    }
    return false;
}

bool isCyclic(int nodes, vector<int> x[]){
    vector<int> visited(nodes+1, 0);

    for(int i=1; i<= nodes ; i++){
        if(!visited[i]){
            if(checkForCycle(i, -1, x, visited)){
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