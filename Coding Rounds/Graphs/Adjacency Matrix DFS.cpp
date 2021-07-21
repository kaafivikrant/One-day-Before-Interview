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
#include <string>
#define N 100

using namespace std;

void dfs(int nodes,vector<vector<int>> &matrix,int start, vector<int> &visited){
    visited[start] = true;
    cout<<start<<" ";
    for(int j=0;j<matrix.size();j++){
        if(matrix[start][j] == 1 && !visited[j]){
            dfs(nodes, matrix,j, visited);
        }
    }
}

int main(){

    int nodes = 7;
    vector<vector<int>> x = {{0,1},{0,2},{1,5},{2,4},{5,4},{2,3},{4,6},{3,6}};
    vector<vector<int>> matrix (nodes,vector<int>(nodes,0));

    for(auto itr: x){
        matrix[itr[0]][itr[1]] = 1;
        matrix[itr[1]][itr[0]] = 1;
    }

//    for(int i=0;i<nodes;i++){
//        for(int j=0;j<nodes;j++){
//            cout<<matrix[i][j]<<" ";
//        }
//        cout<<endl;
//    }

    vector<int> visited(nodes, false);

    dfs(nodes, matrix,0, visited);

    return 0;
}