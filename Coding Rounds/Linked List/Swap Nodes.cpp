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

Node* SwapNodesInPairs(Node* first){
    Node** temp=&first, *a, *b;
    while((a==*temp) && (b = a->next)){
        a->next = b->next;
        b->next = a;
        *temp = b;
        temp = &(a->next);
    }
    return first;
}

int main(){
    Node* first = nullptr;

    push(&first,2);
    push(&first,3);
    push(&first,4);
    push(&first,5);
    push(&first,6);
    push(&first,7);
    push(&first,8);
    push(&first,9);
    //9 8 7 6 5 4 3 2
    //to
    //8 9 6 7 4 5 2 3

    printList(first);
    SwapNodesInPairs(first);
    printList(first);

}