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

void deleteMiddle(stack<int> &x,int n, int current = 0){
    if(x.empty() || current == n){
        return;
    }
    int temp=x.top();
    x.pop();
    deleteMiddle(x,n,current+1);
    if(current != n/2){
        x.push(temp);
    }
}

int main(){
    stack<int> x;

    x.push(1);
    x.push(2);
    x.push(3);
    x.push(4);
    x.push(5);
    x.push(6);
    x.push(7);

    deleteMiddle(x,x.size());
    while(!x.empty()){
        cout<<x.top()<<" ";
        x.pop();
    }
}