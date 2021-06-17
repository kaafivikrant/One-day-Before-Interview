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

void findTopo(int i, vector<int> visited, stack<int> &st, vector<pair<int,int>> x[]){
    visited[i] = 1;
    for(auto it : x[i]){
        if(!visited[it.first]){
            findTopo(it.first, visited, st, x);
        }
    }
    st.push(i);
}

void ShortestPathDAGWeighted(int nodes, vector<pair<int,int>> x[], int source){
    vector<int> visited(nodes, 0);
    stack<int> st;

    for(int i=0;i<nodes;i++){
        if(!visited[i]){
            findTopo(i, visited, st, x);
        }
    }

    vector<int> distance(nodes, INT16_MAX);
    distance[source] = 0;

    while(!st.empty()){
        int node = st.top();
        st.pop();

        if(distance[node] != INT16_MAX){
            for(auto it: x[node]){
                if(distance[node] + it.second < distance[it.first]){
                    distance[it.first] = distance[node] + it.second;
                }
            }
        }
    }

    for(int i=0; i<nodes; i++){
        if(distance[i] == INT16_MAX){
            cout<<"Infinity"<<endl;
        }else{
            cout<<distance[i]<<endl;
        }
    }
}

int main(){

    int nodes , edges;
    cin>>nodes >>edges;
    vector<pair<int,int>> x[nodes + 1];

    for(int i=0;i<edges ; i++){
        int u, v, wt;
        cin>>u >>v >>wt;
        x[u].push_back({v, wt});
    }

    ShortestPathDAGWeighted(nodes, x, 0);

    return 0;
}