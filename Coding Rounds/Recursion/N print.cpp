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
#include <set>
#include <list>
#include <stack>
#define ll long long
#define dd double

using namespace std;

void printn(int n){
    if(n<=0){
        return;
    }else{
        cout<<n<<" ";
        printn(n-1);
    }
} // 10 9 8 7 6 5 4 3 2 1

void printne(int n){
    if (n<=0) {
        return;
    }else{
        printne(n - 1);
        cout<<n<<" ";
    }
} // 1 2 3 4 5 6 7 8 9 10


int main(){

    int n;
    cin>>n;
    printn(n);
    cout<<endl;
    printne(n);

    return 0;
}
