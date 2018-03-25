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
void print(Node *head){
    Node *temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}
Node *merge(Node *head1, Node *head2){
    Node *result = NULL;
    if(head1 == NULL) return head2;
    if(head2 == NULL) return head1;
    if(head1->data <= head2->data){
        result = head1;
        result->next = merge(head1->next, head2);
    } else {
        result = head2;
        result->next = merge(head1, head2->next);
    }
    return result;
}
int main(){
    insertb(9,&head1);
    insertb(5,&head1);
    insertb(4,&head1);
    insertb(2,&head1);
    insertb(3,&head2);
    insertb(1,&head2);
    print(head1);
    print(head2);
    head3 = merge(head1, head2);
    print(head3);
}
