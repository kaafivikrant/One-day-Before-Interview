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

void findTopoSort(int i,vector<int> &visited,stack<int> &st,vector<int> x[]){
    visited[i] = 1;

    for(auto itr: x[i]){
        if(!visited[itr]){
            findTopoSort(itr, visited, st, x);
        }
    }
    st.push(i);
}

void TopoSort(int nodes,vector<int> x[]){
    stack<int> st;
    vector<int> visited(nodes, 0);

    for(int i=0; i<nodes; i++){
        if(visited[i] == 0){
            findTopoSort(i, visited, st, x);
        }
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

}

int main(){

    int nodes , edges;
    cin>>nodes >>edges;

    vector<int> x[nodes + 1];

//    Unweighted graph
    for(int i=0;i<edges ; i++){
        int u, v;
        cin>>u >>v;
        // For directed graph
        x[u].push_back(v);
        // Add both for undirected graph
//        x[v].push_back(u);
    }

    TopoSort(nodes, x);

    return 0;
}