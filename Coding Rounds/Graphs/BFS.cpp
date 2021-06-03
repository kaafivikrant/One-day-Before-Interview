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

void BFS(int nodes, vector<int> x[]){

    vector<int> bfs;
    vector<int> visited(nodes+1,0);

    // Iterating through the nodes
    for(int i=1;i<=nodes; i++){
        // Checking if the node is visited or not
        if(!visited[i]){
            // Adding node to the queue
            queue<int> BFSQueue;
            BFSQueue.push(i);
            visited[i] = 1;
            // Iterating though the connected nodes
            while(!BFSQueue.empty()){
                // Adding the current node to the final array
                int node = BFSQueue.front();
                BFSQueue.pop();
                bfs.push_back(node);

                //  Checking for connected nodes
                for(auto itr : x[node]){
                    if(!visited[itr]){
                        BFSQueue.push(itr);
                        visited[itr] = 1;
                    }
                }
            }
        }
    }

    for(auto print : bfs){
        cout<<print<<" ";
    }
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

    BFS(nodes, x);

    return 0;
}