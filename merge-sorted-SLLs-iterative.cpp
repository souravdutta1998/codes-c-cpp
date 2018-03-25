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
Node *merge(Node *head1, Node *head2){
    if(head1 == NULL) return head2;
    if(head2 == NULL) return head2;
    Node *temp1 = head1, *temp2 = head2;
    while(temp1 && temp2){
        if(temp1->data <= temp2->data){
            insertlast(temp1->data, &head3);
            temp1 = temp1->next;
        } else {
            insertlast(temp2->data, &head3);
            temp2 = temp2->next;
        }
    }
    if(temp1 != NULL){
        while(temp1){
            insertlast(temp1->data, &head3);
            temp1 = temp1->next;
        }
    } else if(temp2 !=NULL) {
        while(temp2) {
            insertlast(temp2->data, &head3);
            temp2 = temp2->next;
        }
    }
    return head3;
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
