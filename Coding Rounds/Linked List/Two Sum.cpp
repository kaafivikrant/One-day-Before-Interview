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

Node* addtwoNumbers(Node* first,Node* second){
    Node* result = nullptr;
    Node* temp, *prev = nullptr;
    int carry = 0, sum;

    while(first != nullptr || second != nullptr){
        sum = carry + (first ? first->data : 0) + (second ? second->data : 0);
        carry = (sum >= 10) ? 1 : 0;
        sum = sum%10;
        temp = newNode(sum);

        if(result == nullptr){
            result = temp;
        }else{
            prev->next = temp;
        }

        prev = temp;

        if(first){
            first = first->next;
        }
        if(second){
            second = second->next;
        }
    }
    if(carry > 0){
        temp->next = newNode(carry);
    }

    return result;
}

int main(){

    Node* result = nullptr;
    Node* first = nullptr;
    Node* second = nullptr;

    push(&first,6);
    push(&first,4);
    push(&first,9);
    push(&first,5);
    push(&first,7);
    cout<<"First Number:-";
    printList(first);

    push(&second,4);
    push(&second,8);
    cout<<"Second Number:-";
    printList(second);

    result = addtwoNumbers(first,second);
    cout<<"Result"<<" ";
    printList(result);

    return 0;
}
