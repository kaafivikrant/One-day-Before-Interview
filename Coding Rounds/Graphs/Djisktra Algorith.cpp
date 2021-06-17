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
#include <cstdlib>
#include <ctime>
#include <forward_list>

using namespace std;

void DijkstraAlgorithm(int nodes, vector<pair<int, int>> *x, int source = 0){

    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > pq;// min-heap ; In pair => (dist,from)
    vector<int> distTo(nodes + 1,INT16_MAX); 	// 1-indexed array for calculating shortest paths;

    distTo[source] = 0;
    pq.push(make_pair(0,source));	// (dist,from)

    while( !pq.empty() ){
        int dist = pq.top().first;
        int prev = pq.top().second;
        pq.pop();

        vector<pair<int,int> >::iterator it;
        for( it = x[prev].begin() ; it != x[prev].end() ; it++){
            int next = it->first;
            int nextDist = it->second;
            if( distTo[next] > distTo[prev] + nextDist){
                distTo[next] = distTo[prev] + nextDist;
                pq.push(make_pair(distTo[next], next));
            }
        }
    }

    cout << "The distances from source, " << source << ", are : \n";
    for(int i = 1 ; i<nodes ; i++) {
        cout << distTo[i] << " " << endl;
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
        x[v].push_back({u, wt});
    }

    DijkstraAlgorithm(nodes, x, 0);

    return 0;
}

