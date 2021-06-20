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

    vector<int> coins = {186,419,83,408};
    vector<pair<int,int>> values;
    int money = 6249;
    int count = 0;
    sort(coins.begin(), coins.end(), greater<int>());

    for(int i=0;i<coins.size();i++){
        if(money > coins[i]){
            int temp = money/coins[i];
            count+=temp;
            money -=coins[i]*temp;
            values.emplace_back(coins[i],temp);
        }
    }

    cout<<count<<" "<<money<<endl;
    for(auto itr: values){
        cout<<itr.first<<" "<<itr.second<<endl;
    }
    return 0;
}

