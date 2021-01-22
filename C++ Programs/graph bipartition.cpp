#include <iostream>
#include <vector>
#include <stack>
#include <numeric>
#include <queue>
#include <cmath>
#include <map>
#include <set>
#include <list>
#include <cstring>
#include <unordered_set>
#include <algorithm>
#include <functional>
#include <cctype>

using namespace std;

void addedge(vector<int> adj[],int i,int j){
    adj[i].push_back(j);
    adj[j].push_back(i);
}

void funcitons(vector<int> adj[],int x,int n){
    vector<int> side(n,-1);
    bool bipartie=true;
    queue<int>q;
    for(int i=0;i<n;i++){
        if(side[i]==-1){
            q.push(i);
            side[i]=0;
            while(!q.empty()){
                int v=q.front();
                q.pop();
                for(int u:adj[v]){
                    if(side[u]==-1){
                        side[u]=side[v]^1;
                        q.push(u);
                    }else{
                        bipartie &=side[u]!=side[v];
                    }
                }
            }
        }
    }
    cout << (bipartie ? "YES" : "NO") << endl;
}

int main(){
    int n=4;
    vector<int> adj[n];
    addedge(adj,0,1);
    addedge(adj,1,2);
    addedge(adj,2,3);
    addedge(adj,3,0);
    funcitons(adj,0,n);


  return 0;
}