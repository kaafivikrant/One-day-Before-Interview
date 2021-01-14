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
#define ll long long
#include <list>

using namespace std;

class HashTable{
private:
    static const int HashGroup = 10;
    list<pair<int,string>> table[HashGroup];

public:
    bool isEmpty() const;
    int HashFunction(int key);
    void insertKey(int key, string value);
    void removeTable(int key);
    string searchTable(int key);
    void printTable();

};

void HashTable::printTable() {
    for(int i{} ; i < HashGroup; i++){
        if(table[i].empty()) continue;
        auto Itr = table[i].begin();

        for(; Itr != table[i].end(); Itr++){
            cout<<"Key :- "<< Itr->first << " "<<" Value:- "<<Itr->second<<endl;
        }
    }
}

string HashTable::searchTable(int key) {
    
    int hashValue = HashFunction(key);
    auto& cell = table[hashValue];
    auto Itr = begin(cell);
    bool keyExist = false;

    for(; Itr != end(cell) ; Itr++){
        if(Itr->first == key){
            keyExist = true;
            cout<<" Key :- "<<Itr->first<<" Value:- "<<Itr->second<<endl;
            break;
        }
    }

    if(!keyExist){
        cout<<"Item Not Found"<<endl;
    }

}

void HashTable::removeTable(int key) {
    int hashValue = HashFunction(key);
    auto& cell = table[hashValue];
    auto Itr = begin(cell);
    bool keyExist = false;

    for(; Itr != end(cell) ; Itr++){
        if(Itr->first == key){
            keyExist = true;
            Itr = cell.erase(Itr);
            cout<<"Value Removed"<< endl;
            break;
        }
    }

    if(!keyExist){
        cout<<"Item Not Found"<<endl;
    }

}

void HashTable::insertKey(int key, string value) {
    int hashValue = HashFunction(key);
    auto& cell = table[hashValue];
    auto Itr = begin(cell);
    bool keyExist = false;

    for(; Itr != end(cell) ; Itr++){
        if(Itr->first == key){
            keyExist = true;
            Itr->second = value;
            cout<<"Value Exist, Value Replaced"<< endl;
            break;
        }
    }

    if(!keyExist){
        cell.emplace_back(key,value);
    }

}

int HashTable::HashFunction(int key) {
    return key % HashGroup;
}

bool HashTable::isEmpty() const {
    int sum{};
    for (const auto & i : table){
        sum += i.size();
    }
    if(sum)
        return false;
    else
        return true;
}


int main(){
    HashTable HT;

    if(HT.isEmpty()){
        cout<<"Right!!"<<endl;
    }else{
        cout<<"Issue"<<endl;
    }

    HT.insertKey(10,"Vik");
    HT.insertKey(11,"rant");
    HT.insertKey(12,"sharma");
    HT.insertKey(13,"nit");
    HT.insertKey(14,"in");
    HT.insertKey(15,"cho");
    HT.insertKey(15,"Dhary");

    HT.printTable();

    HT.removeTable(12);
    HT.removeTable(16);


    if(HT.isEmpty()){
        cout<<"Issue!!"<<endl;
    }else{
        cout<<"Right"<<endl;
    }

    return 0;
}


// Right!!
// Value Exist, Value Replaced
// Key :- 10  Value:- Vik
// Key :- 11  Value:- rant
// Key :- 12  Value:- sharma
// Key :- 13  Value:- nit
// Key :- 14  Value:- in
// Key :- 15  Value:- Dhary
// Value Removed
// Item Not Found
// Right