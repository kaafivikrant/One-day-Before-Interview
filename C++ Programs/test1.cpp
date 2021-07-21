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

class Solution {
public:
    int dp[200][200];
    int dfs(vector<vector<int>>& matrix, int i, int j, int previous){
        cout<<"---------------------------------------------------"<<endl;
        cout<<"Checking for "<<matrix[i][j]<<endl;
        cout<<"Previous is "<<previous<<endl;
        if(i<0 || j<0 || i==matrix.size() || j==matrix[0].size() || previous >= matrix[i][j]){
            return 0;
        }

        if(dp[i][j]){
            cout<<"DP is present "<<dp[i][j]<<endl;
            return dp[i][j];
        }

        int left = dfs(matrix,i,j-1,matrix[i][j]);
        cout<<"Left "<<left<<endl;
        int right = dfs(matrix,i,j+1,matrix[i][j]);
        cout<<"Right "<<right<<endl;
        int top = dfs(matrix,i-1,j,matrix[i][j]);
        cout<<"Top "<<top<<endl;
        int down = dfs(matrix,i+1,j,matrix[i][j]);
        cout<<"Down "<<down<<endl;

        dp[i][j] = max({left, right, top, down}) + 1;
        int maxI = dp[i][j];
        cout<<"Till now max is "<<maxI<<endl;
        cout<<"---------------------------------------------------"<<endl;

        return maxI;
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int final = 0;
        // Iterating through the each index
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                // Keep changing the length of the maximum path
                final = max(final, dfs(matrix,i,j,-1));
            }
        }
        return final;
    }
};
int main(){
    Solution s;
    vector<vector<int>> matrix = {{9,9,4},{6,6,8},{2,1,1}};
    cout<<s.longestIncreasingPath(matrix);
}