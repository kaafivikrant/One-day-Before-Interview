#include <iostream>
#include <vector>
#include <utility>
#include <map>
#include <cmath>

#define ll long long
using namespace std;

int main(){
    vector<pair<int,int>>x;
    pair<int,int>y;

    for(int i=0;i<3;i++){
        cin>>y.first;
        cin>>y.second;
        x.push_back(y);
    }
    for(int i=0;i<3;i++){
        cout<<x[i].first<<" "<<x[i].second<<endl;
    }
    return 0;
}