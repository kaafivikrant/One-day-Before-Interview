#include <iostream>
#include <vector>
#include <stack>
#include <numeric>
#include <queue>
#include <cmath>
#include <unordered_map>
#include <set>

using namespace std;

void addedge(vector<int> adj[],int v,int u){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void BFS(vector<int>adj[],int v,int s){
    bool visited[v+1];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int j:adj[u]){
            if(!visited[j]){
                visited[j]=true;
                q.push(j);
            }
        }
    }
}

void DFSREC(vector<int> adj[],int s,bool visited[]){
    visited[s]=true;
    cout<<s<<" ";
    for(int u:adj[s]){
        if(!visited[u])
        DFSREC(adj,u,visited);
    }
}
void dfs(vector<int>adj[],int v,int s){
    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    DFSREC(adj,s,visited);
}


int main(){
    int v=5;
    vector<int> adj[v];
    addedge(adj,0,1);
    addedge(adj,1,3);
    addedge(adj,3,4);
    addedge(adj,4,2);
    addedge(adj,0,2);
    addedge(adj,1,2);
    addedge(adj,2,3);
    BFS(adj,5,0);
    cout<<endl;
    dfs(adj,5,0);


    return 0;
}