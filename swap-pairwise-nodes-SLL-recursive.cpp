#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int n =0){
        data = n;
        next = NULL;
    }
};
Node *head1 =NULL, *head2 = NULL, *head3;

void insertb(int val, Node **head){
    Node *ptr = new Node(val);
    if(*head == NULL){
        *head = ptr;
        return;
    }
    ptr->next = *head;
    *head = ptr;
}
void insertlast(int val, Node **head){
    Node *ptr = new Node(val);
    if(*head == NULL){
        *head = ptr;
        return;
    }
    Node *temp  = *head;
    while(temp->next) temp = temp->next;
    temp->next = ptr;
}
void print(Node *head){
    if(head == NULL) return;
    Node *temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}
Node *swappair(Node *head){
    if(head == NULL || head->next == NULL) return head;
    
    Node *temp = head->next;
    head->next = temp->next;
    temp->next = head;
    head = temp;
    head->next->next = swappair(head->next->next);
    return head;
}
int main(){
    //insertb(6,&head1);
    insertb(5,&head1);
    insertb(4,&head1);
    insertb(3,&head1);
    insertb(2,&head1);
    insertb(1,&head1);
    print(head1);
    head3 = swappair(head1);
    print(head3);
}
