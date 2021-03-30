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
#include <stack>

using namespace std;

void insert(stack<int>&x,int num){
    if(x.empty() || x.top()<num){
        x.push(num);
        return;
    }
    int num2=x.top();
    x.pop();
    insert(x,num);
    x.push(num2);
}

void sorts(stack<int>&x){
    if(x.empty()){
        return;
    }
    int num=x.top();
    x.pop();
    sorts(x);
    insert(x,num);
}

int main()
{
    stack<int> x;
    x.push(2);
    x.push(4);
    x.push(6);
    x.push(1);
    x.push(3);
    x.push(5);
    x.push(7);

    sorts(x);
    while (!x.empty()){
        cout<<x.top()<<" ";
        x.pop();
    }
}