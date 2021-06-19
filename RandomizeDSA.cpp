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

    vector<string> list = {"Map","Set","Vector","Queue","Stack","Pair","Tree","Graph","Linked List"};

    srand(time(0));

    int x = rand()%10 - 1;
    int y = rand()%10 - 1;

    cout<<list[x]<<" in "<<list[y];

    return 0;
}

