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

class Solution {
public:
    static void Solve(){
        char INTs = '0';
        cout<<"Integers:- "<<endl;
        for(int i=0;i<10;i++){
            cout<<INTs+i<<" "<<int(INTs+i-47-1)<<endl;
        }
        cout<<" "<<endl;
        char Chars = 'a';
        cout<<"Characters:- "<<endl;
        for(int i=0;i<26;i++){
            cout<<Chars+i<<" "<<char(Chars+i)<<endl;
        }
        cout<<" "<<endl;
        for(int i=0;i<26;i++){
            cout<<Chars+i-32<<" "<<char(Chars+i-32)<<endl;
        }
    }
};

int main(){
    //Solution s1;

    Solution::Solve();

}