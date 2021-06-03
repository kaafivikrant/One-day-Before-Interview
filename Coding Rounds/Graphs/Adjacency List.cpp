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

int main(){

    int nodes , edges;
    cin>>nodes >>edges;

    vector<int> x[nodes + 1];

    // For weighted graph
    vector<pair<int,int>> xWeighted[nodes + 1];

    //Unweighted graph
    for(int i=0;i<edges ; i++){
        int u, v;
        cin>>u >>v;

        // For directed graph
        x[u].push_back(v);
        // Add both for undirected graph
        x[v].push_back(u);

    }

//    //Weighted graph
//    for(int i=0;i<edges ; i++){
//        int u, v;
//        // For weighted graph
//        int w;
//        cin>>u >>v;
//        cin >> w;
//
//        // For weighted directed graph
//        xWeighted[u].emplace_back(v,w);
//        // For weighted Undirected graph
//        xWeighted[v].emplace_back(u,w);
//    }
//

    for(int i=0;i<edges;i++){
        cout<<i<<"->";
        for(auto j: x[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}