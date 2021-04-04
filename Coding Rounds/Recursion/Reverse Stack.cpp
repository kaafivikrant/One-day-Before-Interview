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

void insertAtBottom(stack<int> &x,int temp){
    if(x.empty()){
        x.push(temp);
        return;
    }
    int top = x.top();
    x.pop();
    insertAtBottom(x,temp);
    x.push(top);
}

void ReverseStack(stack<int>&x){
    if(x.empty()){
        return;
    }
    int temp=x.top();
    x.pop();
    ReverseStack(x);
    insertAtBottom(x,temp);
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

    ReverseStack(x);

    cout<<"\nReversed:- "<<endl;
    while(!x.empty()){
        cout<<x.top()<<" ";
        x.pop();
    }
}