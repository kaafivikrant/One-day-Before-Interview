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

     int x = 6;
     int sum = 0;
     while(x != 0){
         //If the lowest order bit is 1 then add 1
         sum += x & 1;
         x >>= 1;
     }

     cout<<sum;

    return 0;
}