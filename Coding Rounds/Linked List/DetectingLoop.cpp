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

using namespace std;

class Node{
public:
    int data;
    Node* next;
};

Node* newNode(int data){
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = nullptr;
    return new_node;
}

void push(Node** head, int new_data){
    Node* new_node = newNode(new_data);
    new_node->next = (*head);
    (*head) = new_node;
}

void printList(Node* node){
    while(node != nullptr){
        cout<<node->data<<" ";
        node = node->next;
    }
    cout<<endl;
}

bool  CycleDetect(Node* first){
    unordered_set<Node*> s;
    while (first != nullptr) {
        if (s.find(first) != s.end())
            return true;

        s.insert(first);
        first = first->next;
    }
    return false;
}

int main(){
    Node* first = nullptr;

    push(&first,1);
    push(&first,2);
    push(&first,3);
    push(&first,4);
    push(&first,4);
    push(&first,3);
    push(&first,2);
    push(&first,1);
    printList(first);

    first->next->next->next = first;

    CycleDetect(first)?cout<<"Yes":cout<<"No";


}