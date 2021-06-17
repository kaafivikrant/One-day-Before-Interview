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


int main(){

    auto x = 0xFFFF000;
    //Clockwise
    //If want to do counterclock wise then reverse the >> and <<
    auto y = x >> 8 | x <<(32 - 8);

    cout<<y;

    return 0;
}