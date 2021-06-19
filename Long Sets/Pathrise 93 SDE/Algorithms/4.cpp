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

bool palindrome(string x){
    int i = 0;
    int j = x.size()-1;
    while(i<j){
        if(x[i] != x[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main(){

    string x = "ababcbaba";

    palindrome(x)?cout<<"Yes":cout<<"No";

    return 0;
}

