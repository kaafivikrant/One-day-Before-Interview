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
#include <set>
#include <list>
#include <stack>
#define ll long long
#define dd double

using namespace std;

void insert(std::vector<int> &v,int num)
{
    if(v.size()==0 || v[v.size()-1]<=num){
        v.push_back(num);
        return ;
    }
    int num2=v.back();
    v.pop_back();
    insert(v,num);
    v.push_back(num2);

}


void  sortv(vector<int> &v)
{
    if(v.size()==1){
        return;
    }

    int num=v.back();
    v.pop_back();
    sortv(v);
    insert(v,num);

}

int main()
{
    std::vector<int> v={1,4,3,5,6,7,1,2,3};
    sortv(v);
    for (auto i : v) {
        cout<<i<<" ";
    }
}