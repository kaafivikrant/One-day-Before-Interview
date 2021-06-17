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

    // If the numbers are grey numbers then the XOR of them will be a power of 2

    int x = 0;
    int y = 1;

    int count = 0;

    int final = x ^ y;
    while(final  > 0){
        if(final % 2 == 1){
            count++;
        }
        final >>= 1;
    }
    count == 1 ? cout<<"True": cout<<"False";

    return 0;
}