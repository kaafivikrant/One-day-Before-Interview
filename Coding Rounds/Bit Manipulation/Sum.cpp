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

using namespace std;

int Sum(int x , int y){

    if(y == 0){
        return x;
    }

    int partialSum = x ^ y;
    int carry  = (x & y) << 1;
    return Sum(partialSum, carry);
}

int main(){

    int x = 4;
    int y = 9;

    cout<<Sum(x, y);


    return 0;
}