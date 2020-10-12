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

void print(vector<int>v){
    for_each(v.begin(),v.end(),[](int i){cout<<i<<" ";});cout<<endl;
}

int main(){

    vector<int> v={4,1,2,3,4,5,6,7,8,9,0};int N=5;
    sort(v.begin(),v.end(),[](const int &a,const int &b)->bool{return a>b;});
    print(v);
    int five=count_if(v.begin(),v.end(),[](int a){return (a>5);});
    cout<<five<<"     ";
    auto square=[](int i){
        return i*i;
    };
    cout<<square(N)<<"       ";

    auto sum=[](auto a,auto b){
        return a+b;
    };
    cout<<sum(string("Hey"),string("Buddy"));


  return 0;
}