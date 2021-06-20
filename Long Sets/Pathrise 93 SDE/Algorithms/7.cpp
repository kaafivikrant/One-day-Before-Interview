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

int magicNumbers(){
    srand((time(0)));
    int x = rand()%10 + 1;

    if(x % 2 == 0){
        x = 0;
    }else{
        x = 1;
    }

    return x;
}

int NewNumbers(){
    int x = magicNumbers();
    srand(time(0));

    int y = rand()%10 + x;

    return y;
}

int main(){

    cout<<NewNumbers();

    return 0;
}

