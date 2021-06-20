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

using namespace std;

int main(){

    vector<int> x = {2,4,6,8,10};

    int prod = 1;

    for(int i=0;i<x.size();i++){
        prod = prod * x[i];
    }

    vector<int> y;

    for(int i=0;i<x.size();i++){
        int temp = prod / x[i];
        y.push_back(temp);
    }

    for(auto itr: y){
        cout<<itr<<" ";
    }

    return 0;
}

