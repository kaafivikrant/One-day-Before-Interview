#include <iostream>
#include <vector>
#include <numeric>
#include <queue>
#include <cmath>
#define ll long long
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int x = 12087;
    vector<int> y;
    
    while(x){
        y.push_back(x%10);
        x/=10;
    }
    reverse(y.begin(),y.end());

    for(auto d:y){
        cout<<d<<"   ";
    }
    
    return 0;
}