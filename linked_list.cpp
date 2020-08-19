#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

void print(Node *n){
    while(n!= nullptr){
        cout<<n->data<<" ";
        n=n->next;
    }cout<<endl;
}

void pushhead(Node** head,int data){
    Node *new_node = static_cast<Node *>(malloc(sizeof(Node)));
    new_node->data=data;
    new_node->next=*head;
    *head=new_node;
}

void pushend(Node** head,int data){
    Node *new_node = static_cast<Node *>(malloc(sizeof(Node)));
    Node *end=*head;
    new_node->data=data;
    new_node->next= nullptr;
    while(end->next!= nullptr){
        end=end->next;
    }
    end->next=new_node;
}

void pushafter(Node* pNode,int data){
    if(pNode == nullptr){
        cout<<"Enter the elements first bro";
    }
    Node *new_node = static_cast<Node *>(malloc(sizeof(Node)));
    new_node->data=data;
    new_node->next=pNode->next;
    pNode->next=new_node;

}

void getmiddle(Node* head){
    Node *slow_ptr=head;
    Node *fast_ptr=head;

    if(head!= nullptr){
        while(fast_ptr != nullptr && fast_ptr->next != nullptr){
            fast_ptr=fast_ptr->next->next;
            slow_ptr=slow_ptr->next;
        }
        cout<<slow_ptr->data<<endl;
    }
}

void deletemiddle(Node* head){
    Node *prev=head;
    Node *slow=head;
    Node *fast=head;

    while(fast != nullptr && fast->next != nullptr){
        fast=fast->next->next;
        prev=slow;
        slow=slow->next;
    }
    prev->next=slow->next;
}

void deletefirst(Node **head){
    if(head == nullptr){
        return ;
    }
    Node *temp=*head;
    temp = temp->next;
    free(head);
    *head=temp;
}

void deleteend(Node *head){
    Node *ptr=head;
    while(ptr->next->next!= nullptr){
        ptr=ptr->next;
    }
    ptr->next= nullptr;
    free(ptr);
}

void deleteexact(Node *head,int position){
    if(head == nullptr){
        return;
    }
    Node *temp=head;
    if(position==0){
        deletefirst(&head);
    }
    for(int i=0;temp != nullptr && i<position-1;i++){
        temp=temp->next;
    }
    if(temp == nullptr || temp->next== nullptr){
        return;
    }
    Node *next=temp->next->next;
    free(temp->next);
    temp->next=next;
}

void removedupsorted(Node *head){
    Node *temp=head;
    Node *ptr;
    while(temp!= nullptr){
        while(temp->next && temp->data==temp->next->data){
            ptr=temp->next;
            temp->next=ptr->next;
            ptr->next= nullptr;
            free(ptr);
        }
        temp=temp->next;
    }
}

void detectloop(Node *head){
    Node *slow=head;
    Node *fast=head;
    while(fast != nullptr & fast->next!= nullptr){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            cout<<"Loop Detected !";
            break;
        }
    }
}

void removeloop(Node *head){
    Node *slow=head;
    Node *fast=head;
    while(fast != nullptr & fast->next!= nullptr){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            break;
        }
    }

    if(slow==fast){
        slow=head;
        while(slow !=fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        fast->next= nullptr;
    }
}

void reverse(Node **head_ref) {
    struct Node *temp;
    struct Node *prev = nullptr;
    struct Node *current = (*head_ref);
    while(current != nullptr) {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    (*head_ref) = prev;
}

int main(){

    Node *head;Node *first;Node *second;Node *third;

    head = new Node();first = new Node();second = new Node();third = new Node();

    head->data=0;head->next=first;
    first->data=1;first->next=second;
    second->data=2;second->next=third;
    third->data=3;third->next= nullptr;

    print(head);
    cout<<"Head:- 4-> ";
    pushhead(&head,4);
    print(head);
    cout<<"End:- 5-> ";
    pushend(&head,5);
    print(head);
    cout<<"Third:- 9-> ";
    pushafter(third,9);
    print(head);
    cout<<"Middle:-";
    getmiddle(head);
    deletefirst(&head);
    cout<<"Delete Head:- 4-> ";
    print(head);
    deleteend(head);
    cout<<"Delete End:- 5-> ";
    print(head);
    deletemiddle(head);
    cout<<"Delete middle-> ";
    print(head);
    deleteexact(head,2);
    cout<<"Delete exact:- 2nd-> ";
    print(head);
    cout<<"Reverse:-";
    reverse(&head);
    print(head);

    return 0;
}
