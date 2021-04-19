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

using namespace std;

struct Timer{
    chrono::time_point<chrono::system_clock> start,end;
    chrono::duration<float> duration;

    Timer(){
        start = chrono::system_clock::now();
    }

    ~Timer(){
        end = chrono::system_clock::now();;
        duration = end - start;
        float ms = duration.count() * 1000.0f;
        cout<<"\nFunction took: "<<ms<<"ms"<<endl;
    }
};

void sorted(){
    Timer timer;
    vector<int> x={1,1,32,1,532,723,19,131,13223,15};
    vector<int> sorted;
    while(!x.empty()){
        auto mine=min_element(x.begin(), x.end());
        sorted.push_back(*mine);
        x.erase(mine);
    }

    for(auto t: sorted){
        cout<<t<<" ";
    }
}


int main(){

    sorted();

}



//int main()
//{
//
//    std::chrono::time_point<std::chrono::system_clock> start, end;
//
//    start = std::chrono::system_clock::now();
//    sorted();
//    end = std::chrono::system_clock::now();
//
//    std::chrono::duration<double> elapsed_seconds = end - start;
//
//    std::cout<< "\nElapsed time: " << elapsed_seconds.count() << "s\n";
//}