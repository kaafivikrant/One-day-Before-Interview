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

    int x = 4;
    int y = 7;

    cout<<"1  "<<x<<" "<<y<<endl;
    x = x ^ y;
    cout<<"2  "<<x<<" "<<y<<endl;

    y = x ^ y;
    cout<<"3  "<<x<<" "<<y<<endl;

    x = x ^ y;
    cout<<"4  "<<x<<" "<<y<<endl;



    return 0;
}