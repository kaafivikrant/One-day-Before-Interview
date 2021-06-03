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

bool bipartiteBFS(int i,vector<int> x[],vector<int>& colour){
    queue<int> q;
    q.push(i);
    colour[i] = 1;
    while(!q.empty()){
        int node = q.front();
        q.pop();

        for(auto itr: x[node]){
            if(colour[itr] == -1){
                colour[itr] = 1 - colour[node];
                q.push(itr);
            }else if(colour[itr] == colour[node]){
                return false;
            }
        }
    }
    return true;
}

bool bipartiteOrNot(int nodes,vector<int> x[]){
    vector<int> colour(nodes,-1);

    for(int i=0;i<nodes; i++){
        if(colour[i] == -1){
            if(!bipartiteBFS(i, x, colour)){
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

    bipartiteOrNot(nodes, x)?cout<<"Yes":cout<<"No";

    return 0;
}