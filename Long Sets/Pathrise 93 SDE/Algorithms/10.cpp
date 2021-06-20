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

    vector<int> x = {2,76,4,6,9,10,10,2,76,76,9,9};

    set<int> y;

    for(int i=0;i<x.size();i++){
        y.insert(x[i]);
    }

    for(auto itr: y){
        cout<<itr<<" ";
    }

    return 0;
}

