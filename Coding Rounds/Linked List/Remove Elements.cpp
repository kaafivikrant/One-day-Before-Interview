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

Node* RemoveLinkedListElements(Node* first, int x){
    Node* current = first;
    while(current != nullptr && current->next != nullptr){
        if(current->next->data == x){
            current->next = current->next->next;
        }else{
            current = current->next;
        }
    }

    return first;
}

int main(){
    Node* first = nullptr;

    push(&first,1);
    push(&first,1);
    push(&first,1);
    push(&first,2);
    push(&first,2);
    push(&first,3);
    push(&first,3);
    push(&first,4);

    int x=2;

    printList(first);
    RemoveLinkedListElements(first, x);
    printList(first);

}