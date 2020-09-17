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

void add_edge(vector<pair<int,int>> adj[],int u,int v,int weight){
    adj[u].push_back(make_pair(v,weight));
}

void display(vector<pair<int,int>> adj[],int v){
    for(int i=0;i<v;i++){
        cout<<i<<"-->";
        for(auto r:adj[i]){
            cout<<r.first<<" "<<r.second<<"   ";
        }cout<<endl;
    }
}

int main() {
    int v = 8;
    vector<pair<int,int>> adj[v];
    add_edge(adj, 0, 1,10);
    add_edge(adj, 1, 2,20);
    add_edge(adj, 2, 3,30);
    add_edge(adj, 2, 4,40);
    add_edge(adj, 4, 5,50);
    add_edge(adj, 3, 6,60);
    add_edge(adj, 4, 3,70);
    add_edge(adj, 5, 7,80);
    add_edge(adj, 6, 7,90);
    display(adj, v);
    cout << endl;
    return 0;
}