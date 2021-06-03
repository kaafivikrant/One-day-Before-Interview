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

    // Input of nodes and edges
    int n,m;
    cin>>n>>m;

    //Declaring the matrix with zero
    vector<vector<int>> x(n+1,vector<int> (n+1,0));

    // Printing the matrix
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    // Taking value from user and updating the matrix
    for(int i=0;i<m;i++){
        int u,v;
        cout<<"Enter the"<<i+1<<"th"<<"edge";
        cin>>u>>v;
        x[u][v] = 1;
        x[v][u] = 1;
    }

    // Printing the matrix
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }

}