#include <iostream>
#include <vector>
#include <stack>
#include <numeric>
#include <queue>
#include <cmath>
#include <unordered_map>
#include <set>
#include <string>

using namespace std;

void add_edge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void display(vector<int> adj[],int v){
    for(int i=0;i<v;i++){
        cout<<i<<"-->";
        for(auto r:adj[i]){
            cout<<r<<" ";
        }cout<<endl;
    }
}

void displaymatrix(vector<int>adj[],int v){
    int adjmat[v][v];
    for(int i=0;i<v;i++){
        for(auto u:adj[i]){
            adjmat[i][u]=1;
            adjmat[u][i]=1;
        }
    }
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            if(adjmat[i][j]!=1){
                adjmat[i][j]=0;
            }
        }
    }

    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout<<adjmat[i][j]<<" ";
        }cout<<endl;
    }
}

int main() {
    int v = 8;
    vector<int> adj[v];
    add_edge(adj, 0, 1);
    add_edge(adj, 1, 2);
    add_edge(adj, 2, 3);
    add_edge(adj, 2, 4);
    add_edge(adj, 4, 5);
    add_edge(adj, 3, 6);
    add_edge(adj, 4, 3);
    add_edge(adj, 5, 7);
    add_edge(adj, 6, 7);
    display(adj, v);
    cout << endl;
    displaymatrix(adj, v);
    return 0;
}